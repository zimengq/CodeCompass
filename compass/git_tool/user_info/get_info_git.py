import requests
import time
import json
import multiprocessing
import sys
import random

def delete_duplicate(dict):
    """delete the duplicated items in the list"""
    Info = []
    for item in dict:
        if not item in Info:
            Info.append(item)
    return Info

def request_url(url,pagesize):
    """"""
    app = '?per_page={}&client_id=2ac0ae9b55d090f92fb3' \
          '&client_secret=08d4bfffacafb8274c3c1974ec63d5f57c9aa308'.format(pagesize)
    # cTime = time.time()
    res = requests.get(url+app)
    res.encoding = 'utf-8'
    info = res.json()
    return info

def extract_dict(res):
    # The info for comparsion with that in other open source community
    try:
        dict_info = {"name":res["name"],"github_login":res["login"],
                    "company":res["company"],"location":res["location"],
                    "email":res["email"],"stackoverflow_login":"null"}
    except:
        dict_info = {"name":"null","github_login":"null",
                    "company":"null","location":"null",
                    "email":"null","stackoverflow_login":"null"}
        print(res)
    return dict_info

def get_langtopics(user):
    # git_info = []
    language = []
    topics = []
    print("Finding languages and topics used by github user: {}".format(user["github_login"]))
    repo_api = 'https://api.github.com/users/{}/repos'.format(user["github_login"])
    repos = request_url(repo_api, 30)

    for item in repos:
        repo_name = item["name"]
        repo_topics = requests.get('https://api.github.com/repos/{}/{}/topics?'
                                   'per_page=10&client_id=2ac0ae9b55d090f92fb3'
                                   '&client_secret=08d4bfffacafb8274c3c1974ec63d5f57c9aa308'
                                   .format(user["github_login"], repo_name),
                                   headers={"Accept": "application/vnd.github.mercy-preview+json"})
        if "names" in repo_topics.json().keys():
            repo_topics = repo_topics.json()["names"]
        else:
            repo_topics = []
        topics.extend(repo_topics)

        if not item["languages_url"] == None:
            language_api = item["languages_url"]
            language_dict = request_url(language_api, 100)
        else:
            language_dict = []
        language.extend(language_dict)

    topics = delete_duplicate(topics)
    language = delete_duplicate(language)

    print("Github user {} languages: {}".format(user["github_login"], language))
    print("Github user {} topics: {}\n".format(user["github_login"], topics))
    user["github_language"] = language
    user["github_topics"] = (topics if not topics == [] else "null")
    return user


def get_info(developer_info):
    Info = []
    # for item in developer_info:
        ### For a list of developers, find their url
    if type(developer_info) == dict:
        item = developer_info
    else:
        item = "null"

    if "author" in item.keys() and not item["author"] == None:
        if not item["author"]["login"] in Info:
            author_api = item["author"]["url"]
        else:
            author_api = "null"
    else:
        author_api = "null"

    if "committer" in item.keys() and not item["committer"] == None:
        if not item["committer"]["login"] in Info:
            committer_api = item["committer"]["url"]
        else:
            committer_api = "null"
    else:
        committer_api = "null"

    if not author_api == "null":
        author_info = request_url(author_api, 100)
        author_info = extract_dict(author_info)
        Info.append(author_info)

    if not committer_api == "null":
        committer_info = request_url(committer_api, 100)
        committer_info = extract_dict(committer_info)
        Info.append(committer_info)

    return Info

def search_info(developer_login):
    # Random delay
    time.sleep(random.randrange(1,10) * 0.1)
    print("Getting info of users in the name list...")
    api = 'https://api.github.com/users/{}'.format(developer_login)
    developer_info = request_url(api, 100)
    developer_info = extract_dict(developer_info)

    return developer_info

def multi_Prcapi(commit_api):
    developer_info = request_url(commit_api, 100)
    print("Getting info of user in the commit history...")

    cTime = time.time()
    pool = multiprocessing.Pool(processes=10)
    git_info = pool.map(get_info,developer_info)
    print(time.time() - cTime)
    pool.close()
    pool.join()
    merge_info = []
    for developer in git_info:
        merge_info.extend(developer)

    cTime = time.time()
    merge_info = delete_duplicate(merge_info)
    pool = multiprocessing.Pool(processes=10)
    merge_info = pool.map(get_langtopics,merge_info)
    print(time.time() - cTime)
    pool.close()
    pool.join()
    return merge_info

def multi_Prclist(name_list):
    print("Getting info of user in the commit history...")
    cTime = time.time()
    pool = multiprocessing.Pool(processes=6)
    git_info = pool.map(search_info,name_list)
    print(time.time() - cTime)
    pool.close()
    pool.join()
    merge_info = git_info
    # for developer in git_info:
    #     merge_info.extend(developer)
    cTime = time.time()
    merge_info = delete_duplicate(merge_info)
    pool = multiprocessing.Pool(processes=6)
    merge_info = pool.map(get_langtopics,merge_info)
    print(time.time() - cTime)
    pool.close()
    pool.join()
    return merge_info



if __name__ == '__main__':
    Info_path = sys.path[0] + "/Info"
    # git_api = 'https://api.github.com/repos/sindresorhus/awesome/commits'
    # git_api = 'https://api.github.com/repos/tensorflow/tensorflow/commits'
    name_file = Info_path + '/login_list.json'
    name_list = open(name_file, encoding='utf-8')
    name_list = json.load(name_list)
    # git_info = multi_Prcapi(git_api)
    git_info = multi_Prclist(name_list)
    info_file = '/home/ace/zsj/GetInfo/Info/awesome_match_5.json'
    cTime = time.time()
    print("Dumping the info...")
    with open(info_file, 'w') as ctfile:
        json.dump(git_info, ctfile, indent=3)
    print(time.time() - cTime)


