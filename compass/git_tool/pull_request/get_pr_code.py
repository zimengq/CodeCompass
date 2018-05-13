#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2017 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
Crawler for Github repository pull request code
"""

import os
import re
import logging
import json
import requests
import pymysql.cursors
from bs4 import BeautifulSoup
from semantic.utilities import *
from git_tool.history.commit_history.get_info import *

PR_DIR = 'data/'
PR_FILE = 'pull_request.json'
OUT_FILE = 'pr_code.json'
REGEX = re.compile("^@@")

logging.basicConfig(level=logging.INFO,
                    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)


def parse_diff(data):
    code = []
    lines = data.split("\n")
    for index, line in enumerate(lines):
        if get_change_section(line):
            code.append(get_code_snippet(lines[(index + 1): len(lines)]))
    return code


def get_response_data(diff_url):
    return requests.get(diff_url).text


def load_pr_info(pr_file):
    diff_list = []
    pr_data = load_json(pr_file)
    for pr in pr_data:
        logger.info("Processing pr #%i" % pr['number'])
        diff_url = pr['diff_url']
        diff_data = get_response_data(diff_url)
        diff_module_name = parse_diff(diff_data)
        diff_list.append(diff_module_name)
    return diff_list


if __name__ == '__main__':
    diff = load_pr_info(PR_DIR + PR_FILE)
    save_json(diff, PR_DIR + OUT_FILE)