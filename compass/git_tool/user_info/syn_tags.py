import json
import multiprocessing
import time
import requests
import sys

def request_api(api):
     app_key = '&key=ZEaUTt2btGSROV8q3NeOQg(('
     info = requests.get(api + app_key)
     info = info.json()
     return info

def delete_duplicate(dict):
    """delete the duplicated items in the list"""
    Info = []
    for item in dict:
        if not item in Info:
            Info.append(item)
    return Info

def get_syn(git_info,former_syn_list):
     tags_list = []
     for item in git_info:
         language = (item["github_language"] if not item["github_language"] == "null" else [])
         tags = (item["github_topics"] if not item["github_topics"] == "null" else [])
         tags_list.extend(language)
         tags_list.extend(tags)

     tags_list = delete_duplicate(tags_list)
     remove_list = []

     for item in tags_list:
         if '#' in item:
             remove_list.append(item)
             tags_list.remove(item)

     print("Remove list: {}".format(remove_list))
     print("Tags: {}".format(tags_list))

     syn_list = former_syn_list
     for tag in tags_list:
         syn_tags = []
         api = 'https://api.stackexchange.com/2.2/tags/{}/synonyms' \
               '?pagesize=100&order=desc&sort=creation&site=stackoverflow'.format(tag)
         syn_info = request_api(api)
         print("Finding tag {}: {}".format(tag,syn_info))
         syn_info = syn_info["items"]
         if not syn_info == []:
             for item in syn_info:
                 syn_tags.append(item["from_tag"])
             # The query of synonymous tags can't return the input tag
             syn_tags.append(tag.lower())
             syn_list[tag.lower()] = syn_tags
             print("The synonymous tags of tag {} are {}".format(tag,syn_tags))
         else:
             # The tags of Stack overflow are lowercase
             syn_list[tag.lower()] = tag.lower()
             print("The synonymous tags of tag {} not found".format(tag))

     return syn_list


if __name__ == '__main__':
    Info_path = sys.path[0] + "/Info"
    info_file = Info_path + '/ovs_info.json'
    info_file = open(info_file, encoding='utf-8')
    git_info = json.load(info_file)

    former_syn_file = Info_path + '/syn_list.json'
    former_syn_file = open(former_syn_file, encoding='utf-8')
    former_syn_list = json.load(former_syn_file)

    print("Getting the Stack Overflow synonymous tags of github tags...")
    cTime = time.time()
    syn_list = get_syn(git_info,former_syn_list)
    print(time.time() - cTime)

    print("Dumping the syn_list...")
    cTime = time.time()
    file = Info_path + '/syn_list.json'
    with open(file, 'w') as ctfile:
        json.dump(syn_list, ctfile, indent=3)
    print(time.time() - cTime)
