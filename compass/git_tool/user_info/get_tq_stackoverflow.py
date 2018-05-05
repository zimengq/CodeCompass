import sys
import requests
import json
import time



def request_api(api):
    app_key = '&key=ZEaUTt2btGSROV8q3NeOQg(('
    user_info = requests.get(api + app_key)
    user_info = user_info.json()
    return user_info

def get_question_stk(user_id):
    """Get the title and link of stack overflow users"""
    question_api = "https://api.stackexchange.com/2.2/users/" \
                   "{}/questions?order=desc" \
                   "&sort=activity" \
                   "&site=stackoverflow".format(str(user_id))
    question_info = request_api(question_api)

    default = []
    stk_questions = []
    if type(question_info) == dict \
            and "items" in question_info.keys():

        question_info = question_info["items"]
        if type(question_info) == list:
            for info in question_info:
                question ={}
                question["link"] = info["link"]
                question["title"] = info["title"]
                stk_questions.append(question)
            return stk_questions

    return default

def get_tags_stk(user_id):
    """"Get the tags of Stack Overflow developer through API"""
    tags = []
    tags_api = 'https://api.stackexchange.com/2.2/users' \
               '/{}/tags?pagesize=100&order=desc' \
               '&sort=popular&site=stackoverflow'.format(user_id)
    tags_info = request_api(tags_api)
    if type(tags_info) == dict and "items" in tags_info.keys():
        tags_info = tags_info["items"]
        for tag in tags_info:
            tag_name = tag["name"]
            tags.append(tag_name)

    return tags


if __name__ == '__main__':
    Info_path = sys.path[0] + '/Info'
    info_file = Info_path + '/login_try_new.json'
    info_list = open(info_file, encoding='utf-8')
    info_list = json.load(info_list)

    new_info_list = []
    stackoverflow_info = []
    each_info = {}
    real_list = []
    stackoverflow_info = []
    print("Getting the data of questions and tags...")
    cTime = time.time()
    for developer in info_list:
        if type(developer["stackoverflow_login"]) == list:
            for user_id_score in developer["stackoverflow_login"]:
                user_id = user_id_score.split('_')[0]
                user_score = user_id_score.split('_')[1]
                questions = get_question_stk(user_id)
                tags = get_tags_stk(user_id)
                each_info = {"user_id":user_id,
                             "questions":questions,
                             "user_score":user_score,
                             "tags":tags}
                stackoverflow_info.append(each_info)
            developer["stackoverflow_info"] = stackoverflow_info
            stackoverflow_info = []
        elif type(developer["stackoverflow_login"]) == str \
                and developer["stackoverflow_login"] != "null":
            real_list.append(developer["github_login"])
            developer["stackoverflow_info"] = []
        else:
            developer["stackoverflow_info"] = []

        new_info_list.append(developer)

    new_info_file = Info_path + '/login_try_new.json'
    new_list_file = Info_path + '/new_login_list.json'
    print("Time: {}".format(time.time() - cTime))
    print("Dumping the data...")
    with open(new_info_file, 'w') as ctfile:
        json.dump(new_info_list, ctfile, indent=3)

    with open(new_list_file, 'w') as ctfile:
        json.dump(real_list, ctfile, indent=3)

