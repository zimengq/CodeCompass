#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2017 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
Utilities to get some information from github commit history
"""

import re


def get_author(line):
    regex = re.compile("author:\s(.*)?\semail")
    author = regex.findall(line)
    return author


def get_email(line):
    # TODO: resolve ".com.cn" or ".edu.cn" case
    regex = re.compile(".+?([a-zA-Z0-9_-]+@[a-zA-Z0-9_-]+\.[a-zA-Z0-9_-]+)")
    email = regex.findall(line)
    return email


def get_file_name(line):
    regex = re.compile("\+{3}\sb/(.*)$")
    file_name = regex.findall(line)
    return file_name


def get_code_snippet(lines):
    snippet_list = list()
    snippet = list()
    regex_plus = re.compile("^\+(?!\+\+)(.*)$")
    regex_minus = re.compile("^-(?!--)(.*)$")
    regex_remain = re.compile("^\s(.*)")
    regex_pause = re.compile("^(@@|hash)")
    for line in lines:
        snippet_plus = regex_plus.findall(line)
        snippet_minus = regex_minus.findall(line)
        snippet_remain = regex_remain.findall(line)
        if len(snippet_plus):
            snippet = snippet_plus
        # elif len(snippet_minus):
            # snippet = snippet_minus
        elif len(snippet_remain):
            snippet = snippet_remain
        else:
            snippet = str()
        if regex_pause.findall(line):
            break
        if len(snippet):
            snippet_list.append(snippet[0])
    return snippet_list


def get_date(line):
    regex = re.compile("date:\s([0-9\-:+\s]*)\sauthor:")
    date = regex.findall(line)
    return date


def get_change_section(line):
    regex = re.compile("^@@")
    if regex.findall(line):
        return 1
    else:
        return 0


def get_change_file(line):
    regex = re.compile("diff\s--git\sa/.*\sb/(.*)$")
    file_name = regex.findall(line)
    if file_name:
        return file_name
    else:
        return 0


def get_line_index(inp):
    a_start_line_list = list()
    a_total_line_list = list()
    b_start_line_list = list()
    b_total_line_list = list()
    lines = inp.split("\n")
    regex_a_start = re.compile("@@\s-(\d+),\d+\s")
    regex_a_total = re.compile("@@\s-\d+,(\d+)\s")
    regex_b_start = re.compile("\+(\d+),\d+\s@@")
    regex_b_total = re.compile("\+\d+,(\d+)\s@@")
    for line in lines:
        a_start_line = regex_a_start.findall(line)
        a_total_line = regex_a_total.findall(line)
        b_start_line = regex_b_start.findall(line)
        b_total_line = regex_b_total.findall(line)
        a_start_line_list.extend(a_start_line)
        a_total_line_list.extend(a_total_line)
        b_start_line_list.extend(b_start_line)
        b_total_line_list.extend(b_total_line)
    return a_start_line_list, a_total_line_list, b_start_line_list, b_total_line_list
