#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2017 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
Utility for searching code snippet in git commit history
"""

import os
import json


def get_input_code(input_file):
    input_code = open(input_file).read()
    return input_code


def search_in_history(input_code, output_dir):
    history_file = os.path.join(output_dir, 'commit_history.json')
    with open(history_file) as f:
        history = json.load(f)
    match_data_list = list()
    for code in history:
        if input_code in code['code_snippet']:
            match_data = code
            match_data_list.append(match_data)
    return match_data_list


def print_match_result(data_list):
    print('\033[1;34m')
    print("Found {} match result".format(len(data_list)))
    for data in data_list:
        print('\033[1;31m')
        print('*' * 150)
        print("")
        print("")
        print("")
        print("Author: {}".format(data['author']))
        print("")
        print("")
        print("")
        print("Email: {}".format(data['email']))
        print("")
        print("")
        print("")
        print("File Name: {}".format(data['file']))
        print("")
        print("")
        print("")
        print("Commit Date: {}".format(data['commit_date']))
        print("")
        print("")
        print("")
        print('*' * 150)
        print('\033[0m')
        print(data["code_snippet"])
