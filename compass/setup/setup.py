#!/usr/bin/python
# -*- coding: UTF-8 -*-
import os
import datetime
from datapath import home_path

setup_path = os.path.dirname(os.path.realpath(__file__))

repo_dict = [
    {"owner": "openvswitch", "repo": "ovs"},
    {"owner": "ceph", "repo": "ceph"}
]

if __name__ == '__main__':
    starttime = datetime.datetime.now()
    if not os.path.exists(home_path):
        try:
            os.mkdir(home_path)
        except OSError as exception:
            raise SystemExit("Error: could not create home path directory.")
    os.system("cp ~/Code-Compass/compass/setup/datapath.py ~/Code-Compass/compass/webApp/")
    os.chdir(home_path)
    os.system("git clone https://github.com/openvswitch/ovs.git")
    os.system("git clone https://github.com/ceph/ceph.git")
    os.system("git clone https://github.com/google/protobuf.git")
    os.chdir(setup_path)
    os.chdir("../hook")
    st1 = datetime.datetime.now()
    os.system("python main.py --tojson " + home_path + " True")
    os.system("python line_info.py")
    ed1 = datetime.datetime.now()
    os.system("cp ~/Code-Compass/compass/hook/jsons/*.json " + home_path)
    os.chdir("..")
    st2 = datetime.datetime.now()
    os.system("python create_semantic_graph.py")
    ed2 = datetime.datetime.now()
    os.chdir("git_tool/pull_request")
    st3 = datetime.datetime.now()
    os.system("python get_pull_request.py")
    os.system("python get_pr_code.py")
    ed3 = datetime.datetime.now()
    endtime = datetime.datetime.now()
    seconds1 = (ed1 - st1).seconds
    m1, s1 = divmod(seconds1, 60)
    h1, m1 = divmod(m1, 60)
    print ('The duration of generating AST =', '%02d:%02d:%02d' % (h1, m1, s1))
    seconds2 = (ed2 - st2).seconds
    m2, s2 = divmod(seconds2, 60)
    h2, m2 = divmod(m2, 60)
    print ('The duration of generating semantic graph =', '%02d:%02d:%02d' % (h2, m2, s2))
    seconds3 = (ed3 - st3).seconds
    m3, s3 = divmod(seconds3, 60)
    h3, m3 = divmod(m3, 60)
    print ('The duration of pull request =', '%02d:%02d:%02d' % (h3, m3, s3))
    seconds = (endtime - starttime).seconds
    m, s = divmod(seconds, 60)
    h, m = divmod(m, 60)
    print ('The duration of the whole process =', '%02d:%02d:%02d' % (h, m, s))
