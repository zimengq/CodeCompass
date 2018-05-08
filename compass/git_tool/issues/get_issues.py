#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2017 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
Crawler for Github repository issues
"""

import os
import logging
import json
import requests
import pymysql.cursors
from bs4 import BeautifulSoup
from datetime import datetime

JSON_DIR = 'data/'
JSON_FILE = 'issues.json'
logging.basicConfig(level=logging.INFO,
                    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)


class DateEncoder(json.JSONEncoder):
    """
    To resolve error of datetime can not be encoded as json type
    """
    def default(self, obj):
        if isinstance(obj, datetime):
            return obj.strftime('%Y-%m-%d %H:%M:%S')
        else:
            return json.JSONEncoder.default(self, obj)


def retrieve_data(data):
    results = []
    soup = BeautifulSoup(data, 'html.parser')
    issues = soup.find_all('li', class_='js-issue-row')
    for issue in issues:
        issue_url = issue.find('a', attrs={'class': 'link-gray-dark'})['href'].strip()
        open_time = issue.find('relative-time')['datetime'].strip().replace('T', '-').replace('Z', '')
        issue_author = issue.find('a', attrs={'class': 'muted-link'}).get_text().strip()
        issues_by_this_author = issue.find('a', attrs={'class': 'muted-link'})['href'].strip()

        result = (issue_url, datetime.strptime(open_time, "%Y-%m-%d-%H:%M:%S"), issue_author, issues_by_this_author)
        results.append(result)
        logger.info("Fetched issues #{}".format(issue_url.split('/')[4]))
    return results


def get_response_data(page):
    request_url = 'https://github.com/tensorflow/tensorflow/issues'
    params_closed = {'page': page, 'q': 'is:closed'}
    params_open = {'page': page, 'q': 'is:open'}
    resp_closed = requests.get(request_url, params_closed)
    resp_open = requests.get(request_url, params_open)
    return resp_closed.text + resp_open.text


def insert_to_db(data):
    connection = pymysql.connect(host='localhost',
                                 user='root',
                                 password='root',
                                 db='test',
                                 charset='utf8mb4',
                                 cursorclass=pymysql.cursors.DictCursor)
    try:
        with connection.cursor() as cursor:
            sql = 'insert into project_info(issue_url, open_time, issue_author, issues_by_this_author) ' \
                  'VALUES (%s, %s, %s, %s, %s)'
            cursor.executemany(sql, data)
            connection.commit()
    except TimeoutError:
        connection.close()


def insert_to_json(data):
    if not os.path.exists(JSON_DIR):
        try:
            os.makedirs(JSON_DIR)
        except OSError as exception:
            raise SystemExit("Error: {}".format(exception))
    with open(JSON_DIR + JSON_FILE, 'w') as f:
        json.dump(data, f, indent=3, cls=DateEncoder)


if __name__ == '__main__':
    data_list = list()
    for page in range(100):
        logger.info("Processing page #{}".format(page + 1))
        res_data = get_response_data(page + 1)
        data = retrieve_data(res_data)
        if not len(data):
            break
        data_list += data
    insert_to_json(data_list)