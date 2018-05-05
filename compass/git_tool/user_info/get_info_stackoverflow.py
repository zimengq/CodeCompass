import re
import time
import urllib
import urllib.error
import multiprocessing
import requests
import sys
import json
import random
from . import get_info_git as gt
from . import name_form as nf
from . import levenshtein as le


def request_api(api):
    app_key = '&key=ZEaUTt2btGSROV8q3NeOQg(('
    user_info = requests.get(api + app_key)
    user_info = user_info.json()
    return user_info


def request_source(source_url):
    request2 = urllib.request.Request(source_url)
    request2.add_header('user-agent', 'Chrome/51.0.2704.63 Safari/537.36')
    try:
        response2 = urllib.request.urlopen(request2)
        html2 = response2.read()
        user_source = html2.decode("utf8")
        response2.close()
    except urllib.error.HTTPError:
        print("********** \n"
              "Internal Server Error when requesting {}\n"
              "********** \n ".format(source_url))
        return "null"
    return user_source


def InfoByName(name):
    Info = []
    default_info = {"display_name":"","location":"","user_id":0}
    #THe API returns info of all possible Stack Overflow usernames which contain the input name
    user_api = 'https://api.stackexchange.com/2.2/users' \
               '?pagesize=10&order=asc&min={}&sort=name&inname={}' \
               '&site=stackoverflow'.format(name,name)
    info = request_api(user_api)
    if "items" in info:
        user_info = info["items"]
    else:
        return default_info

    if not user_info == None:
        for item in user_info:
            dict_info = {"display_name": item['display_name'],
                         "location": (item["location"] if "location" in item.keys() else "null"),
                         "user_id": item["user_id"]}
            Info.append(dict_info)

        Info = gt.delete_duplicate(Info)
        return Info
    else:
        return default_info


def GetGitAccount(user_id):
    """"Get the associated github account from Stack Overflow users' profile"""
    # time.sleep(random.randrange(1,10) * 0.5)
    default = "null"
    if not user_id == None:
        stk_url = 'https://stackoverflow.com/users/{}'.format(user_id)
        user_source = request_source(stk_url)
        if not user_source == "null":
            user_href = \
                re.findall(r"<a.*?href=.*?<\/a>", user_source, re.I | re.S | re.M)
            # find it directly
            git_account = []
            for href in user_href:
                if 'https://github.com/' in href:
                    git_account = \
                        re.findall('href\=\"https\:\/\/github\.com\/(.*?)\"', href, re.S)
                    print("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n"
                          "! {} \n"
                          "! {} \n"
                          "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n".format(href,git_account))

                    if not git_account == []:
                        git_account = git_account[0]
                    else:
                        return default

            if not git_account == None:
                return git_account

            else:
                return default
        else:
            return default
    else:
        return default


def get_tags(stk_developer):
    """"Get the tags of Stack Overflow developer through API"""
    tags = []
    if type(stk_developer) == dict and 'user_id' in stk_developer:
        tags_api = 'https://api.stackexchange.com/2.2/users/{}/tags' \
                   '?pagesize=100&order=desc&sort=popular' \
                   '&site=stackoverflow'.format(stk_developer['user_id'])
        tags_info = request_api(tags_api)
        tags_info = tags_info["items"]
        for tag in tags_info:
            tag_name = tag["name"]
            tags.append(tag_name)
    return tags



def merge_langtopics(git_developer):
    topics_git = git_developer["github_topics"]
    language_git = git_developer["github_language"]
    if not topics_git == "null" and not language_git == "null":
        topics_git.extend(language_git)
        tags_git = topics_git
    elif topics_git == "null" and not language_git == "null":
        tags_git = language_git
    else:
        tags_git = topics_git
    git_developer["github_tags"] = tags_git
    return git_developer


def match_info(git_developer,stk_developer,syn_list,Threshold):
    """"The location and tags comparison"""
    location_stk = stk_developer["location"]
    location_git = git_developer["location"]

    if not location_git == "null" and not location_stk == "null":
        try:
            # If the github user's location contains
            # the Stack Overflow user's location, or
            # the
            if location_git in location_stk:
                location_score = 1
            elif location_stk in location_git:
                location_score = 1
            else:
                # Levenshtein distance between two strings of location
                distance = le.lev(location_stk, location_git)
                len_git = max(len(location_git),len(location_stk))
                location_score = distance / len_git

        except TypeError:
            location_score = 0

    else:
        location_score = 0

    tags_git = git_developer["github_tags"]
    tags_stk = stk_developer["tags"]

    print("++++++++++++++++++++++++++++++++++++++++ \n"
          "- Stack Overflow user {}'s tags: {}"
          "".format(stk_developer["user_id"],tags_stk))

    match_count = github_count = 0
    match_tags = []

    if not tags_stk == [] \
            and not tags_git == "null" \
            and not tags_git == []:

        for tag in tags_git:
            github_count = github_count + 1

            # Find the synonmous tags directly
            if tag.lower() in tags_stk:
                match_count = match_count + 1
                match_tags.append(tag)
                continue

            else:
                # Can not find synonymous tags directly
                # find it in the synonymous tags list
                if tag in syn_list.keys():
                    stk_syn = syn_list[tag]
                    if type(stk_syn) == list:
                        for syn_tags in stk_syn:
                            if syn_tags in tags_stk:
                                match_tags.append(syn_tags)
                                match_count = match_count + 1
                                continue

                    elif type(stk_syn) == str:
                        if stk_syn in tags_stk:
                            match_count = match_count + 1
    else:
        match_count = 0
        github_count = 1

    tag_score = match_count / github_count * 2
    final_score = round(location_score + tag_score, 2)
    print("---------------------------------------- \n"
          "- Match tag for {}: {} \n"
          "---------------------------------------- \n"
          "- Final score for {}: {} \n"
          "++++++++++++++++++++++++++++++++++++++++ \n"
          "".format(stk_developer["display_name"],
                    match_tags,
                    stk_developer["display_name"],
                    final_score))

    if final_score >= Threshold:
        match_id_score = str(stk_developer["user_id"]) + "_" + str(final_score)
        return match_id_score
    else:
        return []


def match_account(git_developer):

    # time.sleep(random.randrange(1,10) * 0.1)
    syn_file = sys.path[0] + "/Info/syn_list.json"
    syn_list = open(syn_file, encoding='utf-8')
    syn_list = json.load(syn_list)

    default_info = []
    error_info = ['display_name', 'location', 'user_id']
    # Merge the languages and topics to github_tags
    git_developer = merge_langtopics(git_developer)
    possible_name = nf.possible_names(git_developer["name"], git_developer["github_login"])
    print("############################### \n"
          "# Possible name of {}: {} \n"
          "############################### \n".format(git_developer["name"],possible_name))

    for name in possible_name:
        # All info of developers whose username contains the input name
        stk_info = InfoByName(name)
        stk_info = gt.delete_duplicate(stk_info)

        if not stk_info == default_info and not stk_info == error_info:
            print("The possible info of Stack Overflow user {} is: \n"
                  "------------------------------------- \n"
                  " {} \n"
                  "------------------------------------- \n".format(name, stk_info))
            cTime = time.time()

            print("!!! Find associated Github account directly in the profile of Stack Overflow users: !!!")
            for stk_developer in stk_info:
                print("\n-------------{}-------------\n".format(stk_developer))

                if type(stk_developer) == dict and 'user_id' in stk_developer.keys():
                    user_id = stk_developer['user_id']
                    git_account = GetGitAccount(user_id)

                    if git_account == git_developer["github_login"]:
                        git_developer["stackoverflow_login"] = [str(stk_developer["user_id"]) + '_REAL']
                        print("Time: {}".format(time.time() - cTime))
                        break

                    else:
                        print("No associated Github account can be found "
                              "in the profile of possible associated "
                              "Stack Overflow user {}".format(stk_developer["display_name"]))
                else:
                    print("No user id has been found \n")
                    continue

            # Continue to establish mapping if the possible match has been found?
            if git_developer["stackoverflow_login"] == "null" or git_developer["stackoverflow_login"] == []:
                git_developer["stackoverflow_login"] = []
                print("****************************** \n"
                      "* No linked account has been found. Mapping the users using tags and location... \n"
                      "****************************** \n")
                print("Github user {}'s tags: \n"
                      "------------------------------ \n"
                      "{} \n"
                      "------------------------------ \n".format(git_developer["github_login"], git_developer["github_tags"]))

                cTime = time.time()
                for stk_developer in stk_info:
                    stk_developer["tags"] = get_tags(stk_developer)
                    match_id_score = match_info(git_developer, stk_developer, syn_list, 1)
                    if not match_id_score == []:
                        git_developer["stackoverflow_login"].append(match_id_score)
                print("Time: {}".format(time.time() - cTime))
            else:
                break

    if not git_developer["stackoverflow_login"] == "null" and not git_developer["stackoverflow_login"] == []:
        print("============================== \n"
              "= The Stack Overflow display_name for github user {}: {} \n"
              "============================== \n".format(git_developer["name"],git_developer['stackoverflow_login']))
    else:
        git_developer["stackoverflow_login"] = "null"
        print("============================== \n"
              "= The Stack Overflow display_name for github user {} not found \n"
              "============================== \n".format(git_developer["name"]))
    return git_developer


def multi_match(git_developers):
    pool = multiprocessing.Pool(processes=1)
    git_info = pool.map(match_account,git_developers)
    pool.close()
    pool.join()
    return git_info

if __name__ == '__main__':
    Info_path = sys.path[0] + "/Info"
    info_file = Info_path + '/login_try.json'
    git_info = open(info_file, encoding='utf-8')
    git_info = json.load(git_info)
    stk_count = total_count = 0

    cTime = time.time()
    print("Matching developers between Github and Stack Overflow...")
    match_info = multi_match(git_info)
    print("Time: {}".format(time.time() - cTime))

    for item in match_info:
        if not item["stackoverflow_login"] == "null":
            stk_count = stk_count + 1
        total_count = total_count + 1

    print("The number of developers with Stack Overflow account is {}".format(stk_count))
    print("The number of developers is {}".format(total_count))
    print("Ratio:{}".format(round(stk_count / total_count, 4)))

    print("Saving the results of matching...")
    cTime = time.time()
    file = Info_path + '/awesome_info_1.json'
    with open(info_file, 'w') as ctfile:
        json.dump(match_info, ctfile, indent=3)
    print("Time: {}".format(time.time() - cTime))
