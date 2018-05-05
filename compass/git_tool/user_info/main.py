import json
import os
import time
import sys


sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from Get_Info import get_info_git as gt
from Get_Info import get_info_stackoverflow as st

Info_path = sys.path[0] + "/Info"
print(Info_path)
if not os.path.exists(Info_path):
    os.mkdir(Info_path)



if len(sys.argv) == 1 or sys.argv[1] == '--help':
    help = "--lt  : python main.py --lt [input file] [output file]\n" \
           "        Dump the info of developers in the input name list\n" \
           "\n" \
           "--cm  : python main.py --cm 'repo name'('sindresorhus/awesome') [output file] \n" \
           "        Dump the developers' info in the commit history of input repo\n" \
           "\n" \
           "--mp  : python main.py --mp [file]\n" \
           "        Mapping between developers on github and Stack Overflow, but the info should be dumped first"
    print(help)

elif sys.argv[1] == '--lt':
    name_file = Info_path + '/{}'.format(sys.argv[2])
    output_file = Info_path + '/{}'.format(sys.argv[3])
    name_list = open(name_file, encoding='utf-8')
    name_list = json.load(name_list)
    git_info = gt.multi_Prclist(name_list)

    cTime = time.time()
    print("Dumping the info...")
    with open(output_file, 'w') as ctfile:
        json.dump(git_info, ctfile, indent=3)
    print(time.time() - cTime)

elif sys.argv[1] == '--cm':
    # 'sindresorhus/awesome'
    git_api = 'https://api.github.com/repos/{}/commits'.format(sys.argv[2])
    git_info = gt.multi_Prcapi(git_api)
    output_file = Info_path + '/{}'.format(sys.argv[3])

    cTime = time.time()
    print("Dumping the info...")
    with open(output_file, 'w') as ctfile:
        json.dump(git_info, ctfile, indent=3)
    print(time.time() - cTime)

elif sys.argv[1] == '--mp':
    info_file = Info_path + '/{}'.format(sys.argv[2])

    git_info = open(info_file, encoding='utf-8')
    git_info = json.load(git_info)
    stk_count = total_count = 0

    cTime = time.time()
    print("Matching developers between Github and Stack Overflow...")
    match_info = st.multi_match(git_info)
    print(time.time() - cTime)

    for item in match_info:
        if not item["stackoverflow_login"] == "null":
            stk_count = stk_count + 1
        total_count = total_count + 1

    print("\nThe number of developers with Stack Overflow account is {}".format(stk_count))
    print("The number of developers is {}".format(total_count))
    print("Ratio:{}".format(round(stk_count / total_count, 4)))

    print("Saving the results of matching...")
    cTime = time.time()
    with open(info_file, 'w') as ctfile:
        json.dump(match_info, ctfile, indent=3)
    print(time.time() - cTime)
