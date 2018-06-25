#!/usr/bin/python
# -*- coding: UTF-8 -*-
import os
import commands
import re
from datapath import home_path

repo_dict = [
    {"owner": "openvswitch", "repo": "ovs"},
    {"owner": "ceph", "repo": "ceph"}
]

if __name__ == '__main__':
    if not os.path.exists(home_path):
        try:
            os.mkdir(home_path)
        except:
            print ("Exist")
    os.chdir("../compass/hook")
    os.system("python main.py --tojson " + home_path + " True")
    os.system("python line_info.py")
    os.chdir("../compass")
    os.system("python create_semantic_graph.py")
    os.chdir("../compass/git_tool/pull_request")
    os.system("python get_pull_request.py")
    os.system("python get_pr_code.py")
