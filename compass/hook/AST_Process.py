#!/usr/bin/python
# -*- coding: UTF-8 -*-

__author__  = 'king-jojo'

import os
import re

RE_NODE = re.compile(r'(.*?)0x')
RE_LINE = re.compile(r'<(.*?)>')
RE_SLOC_LINE = re.compile(r'line:(.*?) ')
RE_SLOC_COL = re.compile(r'col:(.*?) ')

RE_CLASS = re.compile(r'class (.*)')
RE_STRUCT = re.compile(r'struct (.*)')
RE_FUNC = re.compile(r' (.+?) ')
RE_SUB = re.compile(r'@@(.*?)@@')

def AST_preprocess(code_path):
    """Preprocess of the code. Remove the head files and standard libraries"""
    if '.c' in code_path and '.cpp' not in code_path:
        path_new = './example/test_new.c'
        with open(code_path , 'r') as f:
            lines = f.readlines()
        f.close()

        with open(path_new , 'w') as f_new:
            for line in lines:
                if '#include' in line:
                    line = '\n'
                f_new.write(line)
        f_new.close()
    elif '.cpp' in code_path:
        path_new = './example/test_new.cpp'
        with open(code_path , 'r') as f:
            lines = f.readlines()
        f.close()

        with open(path_new , 'w') as f_new:
            for line in lines:
                if '#include' in line:
                    line = '\n'
                f_new.write(line)
        f_new.close()
    return path_new

def AST_generate(code_path, preprocess):
    """Print AST based on command line"""
    if preprocess == True:
        code_path = AST_preprocess(code_path)
        # command = 'clang-check -ast-dump ' + code_path + ' --extra-arg="-ferror-limit=1" --extra-arg="-fno-color-diagnostics" --'
        command = 'clang-check -ast-dump ' + code_path + ' --extra-arg="-fno-color-diagnostics" --'
        F = os.popen(command)
        # (status, output) = commands.getstatusoutput('clang -Xclang -ast-dump -fsyntax-only ' + code_path)
    else:
        # command = 'clang-check -ast-dump ' + code_path + ' --extra-arg="-ferror-limit=1" --extra-arg="-fno-color-diagnostics" --'
        command = 'clang-check -ast-dump ' + code_path + ' --extra-arg="-fno-color-diagnostics" --'
        F = os.popen(command)
        # (status, output) = commands.getstatusoutput('clang -Xclang -ast-dump -fsyntax-only ' + code_path)
    return F

def Node_extract(code_path, preprocess):
    """Extract the nodes"""
    AST = AST_generate(code_path, preprocess)
    node_list = []
    class_name_list = []
    func_name_list = []
    for lines in AST:
        Node_dict = dict()
        if len(re.findall(RE_NODE, lines)) > 0:
            new_line = re.findall(RE_NODE, lines)[0]
        else:
            new_line = lines
        Node_dict['_nodetype'] = new_line
        line_info = re.findall(RE_LINE, lines)
        if len(line_info) > 0:
            line_info_new = line_info[0].replace("<", "")
            if line_info_new == "invalid sloc":
                sloc_info_line = re.findall(RE_SLOC_LINE, lines)
                if sloc_info_line != []:
                    Node_dict['coord'] = 'line:' + sloc_info_line[0]
                else:
                    sloc_info_col = re.findall(RE_SLOC_COL, lines)
                    if sloc_info_col != []:
                        Node_dict['coord'] = 'col:' + sloc_info_col[0]
                    else:
                        Node_dict['coord'] = 'null'
            else:
                Node_dict['coord'] = line_info_new
        else:
            Node_dict['coord'] = 'null'
        node_list.append(Node_dict)

        if "FunctionDecl" in new_line:
            new_sentence1 = lines.replace("'", '@@').replace(" ", "  ")
            new_sentence2 = re.sub(r'@@(.*?)@@', "", new_sentence1)
            if re.findall(RE_FUNC, new_sentence2)[-1] != ' ':
                name = re.findall(RE_FUNC, new_sentence2)[-1]
            else:
                name = re.findall(RE_FUNC, new_sentence2)[-2]
            func_name_list.append(name)
        elif "CXXRecordDecl" in new_line:
            if 'class' in lines:
                class_name = re.findall(RE_CLASS, lines)
                if len(class_name):
                    name = class_name[0]
                else:
                    name = 'null'
                class_name_list.append(name)
            elif 'struct' in lines:
                struct_name = re.findall(RE_STRUCT, lines)
                if len(struct_name):
                    name = struct_name[0]
                else:
                    name = 'null'
                class_name_list.append(name)
        elif "RecordDecl" in new_line:
            struct_name = re.findall(RE_STRUCT, lines)
            if len(struct_name):
                name = struct_name[0]
            else:
                name = 'null'
            class_name_list.append(name)

        else:
            name = 'null'
        Node_dict['node_name'] = name
    name_list = [func_name_list,class_name_list]
    return [node_list,name_list]