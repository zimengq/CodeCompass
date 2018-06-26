#!/usr/bin/python
# -*- coding: UTF-8 -*-
import os
from datapath import home_path

setup_path = os.path.dirname(os.path.realpath(__file__))

repo_dict = [
    {"owner": "openvswitch", "repo": "ovs"},
    {"owner": "ceph", "repo": "ceph"}
]

if __name__ == '__main__':
    if not os.path.exists(home_path):
        try:
            os.mkdir(home_path)
        except OSError as exception:
            raise SystemExit("Error: could not create home path directory.")
    os.chdir(home_path)
    os.system("git clone https://github.com/openvswitch/ovs.git")
    os.system("git clone https://github.com/ceph/ceph.git")
    os.system("git clone https://github.com/google/protobuf.git")
    os.chdir(setup_path)
    os.chdir("../hook")
    os.system("python main.py --tojson " + home_path + " True")
    os.system("python line_info.py")
    os.system("cp ~/Code-Compass/compass/hook/jsons/*.json " + home_path)
    os.chdir("..")
    os.system("python create_semantic_graph.py")
    os.chdir("git_tool/pull_request")
    os.system("python get_pull_request.py")
    os.system("python get_pr_code.py")
