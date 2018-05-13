#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2018 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
This script define some useful functions and classes
"""

import json

reserve_type_list = {
    'FunctionDecl',
    # 'TypedefDecl',
    'RecordDecl',
    # 'VarDecl',
    'CXXRecordDecl'
}


def load_json(json_file):
    with open(json_file) as f:
        stream = f.read()
        json_data = json.loads(stream)
    return json_data


def save_json(data, json_file):
    with open(json_file, 'w') as f:
        json.dump(data, f, ensure_ascii=False, indent=4)


def recursion(_subnodes):
    temp = _subnodes
    remove_num = 0
    for i in range(len(temp)):
        if remove_num:
            i -= remove_num
        try:
            _subnode = temp[i]
            if '_nodetype' in _subnode:
                if _subnode['_nodetype'] not in reserve_type_list:
                    temp.remove(_subnode)
                    remove_num += 1
                _subnode['split_name'] = _subnode['node_name'].split('_')
                if '_subnode' in _subnode:
                    if len(_subnode['_subnode']) != 0:
                        recursion(_subnode['_subnode'])
        except IndexError:
            pass
    return temp


def extract_nodes(ast_collection):
    ast_list = []
    for ast in ast_collection:
        ast_dict = dict()
        ast_dict['__file_name'] = ast['__filename']
        ast_dict['__content'] = ast['__content']
        ast_dict['_subnode'] = recursion(ast_dict['__content']['_subnode'])
        ast_list.append(ast_dict)
    return ast_collection



