#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2017 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
Utilities mapping code snippets of every commit with author
"""

import os
from commit_history import get_info


def get_code(inp):
    code_list = list()
    if os.path.isdir(inp):
        os.chdir(os.path.abspath(inp))
        command = "git log --pretty=format:'hash: %h ref: %d commit_title: %f date: %ci author: %aN email: %ae' " \
                  "--abbrev-commit -p -5000 "
    else:
        command = "git log --pretty=format:'hash: %h ref: %d commit_title: %f date: %ci author: %aN email: %ae' " \
                  "--abbrev-commit -p -5000 " + inp
        # + " > " + outp + "/log.txt"
    input_data = os.popen(command)
    data = input_data.read()
    lines = data.split("\n")
    for index, line in enumerate(lines):
        code_dict = dict()
        author = get_info.get_author(line)
        if len(author):
            email = get_info.get_email(line)
            if len(email):
                commit_author = author[0]
                commit_email = email[0]
                commit_date = get_info.get_date(line)
                if len(commit_date):
                    commit_date = commit_date[0]
        elif get_info.get_change_file(line):
            commit_file = get_info.get_change_file(line)
            # code_dict['file'] = commit_file[0]
        elif get_info.get_change_section(line):
            code_dict['file'] = commit_file[0]
            code_dict['author'] = commit_author
            # print(commit_author)
            code_dict['email'] = commit_email
            code_dict['commit_date'] = commit_date
            # print(commit_email)
            code_snippet = get_info.get_code_snippet(lines[(index + 1):len(lines)])
            code_dict['code_snippet'] = "\n".join(code_snippet)
            code_list.append(code_dict)
    return code_list


def print_code_list(code_list):
    for code in code_list:
        print('\033[1;31m')
        print('*' * 150)
        print("")
        print("")
        print("")
        print("Author: {}".format(code['author']))
        print("")
        print("")
        print("")
        print("Email: {}".format(code['email']))
        print("")
        print("")
        print("")
        print("File Name: {}".format(code['file']))
        print("")
        print("")
        print("")
        print("Commit Date: {}".format(code['commit_date']))
        print("")
        print("")
        print("")
        print('*' * 150)
        print('\033[0m')
        print(code["code_snippet"])