#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2017 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
Acquire issues committed by a given author via fetched repository issues.
"""

import os
import json
import logging
from semantic.utilities import *

JSON_DIR = '~/PycharmProjects/Code-Compass/testDataForCompass/'
JSON_FILE = 'issues_api.json'
USER_FILE = 'issues_by_user.json'
logging.basicConfig(level=logging.INFO,
                    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)


def get_issues_by_author(issues_json):
    issues = load_json(issues_json)
    user_dict = {}
    for issue in issues:
        if isinstance(issue, dict):
            user = issue['user']
            logger.info("Processing issue #%i, submitted by user %s" % (issue['id'], user['id']))
            if user['id'] not in user_dict:
                user_dict[user['id']] = {}
                user_dict[user['id']]['issues'] = []
            user_dict[user['id']]['issues'].append(issue)
            user_dict[user['id']]['user_info'] = user
    return user_dict


if __name__ == '__main__':
    users = get_issues_by_author(JSON_DIR + JSON_FILE)
    save_json(users, JSON_DIR + USER_FILE)