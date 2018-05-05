#!/usr/bin/python
# -*- coding: UTF-8 -*-

__author__ = 'king-jojo'

import AST_Compare
from AST_Visualization import node_graph
from AST2JSON import to_json
from AST2JSON import to_dict
from AST_Process import Node_extract
import sys
import os
import re
import json

dir_path = os.path.dirname(os.path.realpath(__file__))

RE_AZ = re.compile(r'-(.*?) ')
RE_C = re.compile(r'/(.*?).c')

RE_MODULE1 = re.compile(r'from (.*?) to')
RE_MODULE2 = re.compile(r'to (.*)')

sel = True

if __name__ == '__main__':
    args = sys.argv[1:]
    if len(args)>0:
        if args[0] == '--compare':
            if len(args[1:]) == 3:
                if args[3] != 'True' and args[3] != 'False':
                    raise SystemExit("Please use 'True' or 'False' to choose whether you need to remove the headers")
                else:
                    if args[3] == 'True':
                        sel = True
                    else:
                        sel = False
                if os.path.exists(args[1]) and os.path.exists(args[2]):
                    code_path_a = args[1]
                    code_path_b = args[2]
                    seq1 = AST_Compare.seq_process(code_path_a, sel)
                    seq2 = AST_Compare.seq_process(code_path_b, sel)
                    set = AST_Compare.Seqlist_compare(seq1, seq2)
                    node_graph(code_path_a, sel, set[0])
                    node_graph(code_path_b, sel, set[1])
                if not os.path.exists(args[1]) and os.path.exists(args[2]):
                    raise SystemExit("Error: Could not find the first c/c++ file")
                if not os.path.exists(args[2]) and os.path.exists(args[1]):
                    raise SystemExit("Error: Could not find the second c/c++ file")
                if not os.path.exists(args[1]) and not os.path.exists(args[2]):
                    raise SystemExit("Error: Could not find both two files")
            else:
                raise SystemExit("Usage: python main.py --compare c_file_dir1 c_file_dir2 True/False ")
        elif args[0] == '--view':
            if len(args[1:]) == 2:
                if args[2] != 'True' and args[2] != 'False':
                    raise SystemExit("Please use 'True' or 'False' to choose whether you need to remove the headers")
                else:
                    if args[2] == 'True':
                        sel = True
                    else:
                        sel = False
                if os.path.exists(args[1]):
                    code_path_a = args[1]
                    seq1 = AST_Compare.seq_process(code_path_a, sel)
                    node_graph(code_path_a, sel, None)
                else:
                    raise SystemExit("Error: Could not find c/c++ file")
            else:
                raise SystemExit("Usage: python main.py --view c_file_dir True/False ")
        elif args[0] == '--tojson':
            if len(args[1:]) == 2:
                if args[2] != 'True' and args[2] != 'False':
                    raise SystemExit("Please use 'True' or 'False' to choose whether you need to remove the headers")
                else:
                    if args[2] == 'True':
                        sel = True
                    else:
                        sel = False
                if os.path.exists(args[1]):
                    code_path = args[1]
                    code_path_list = []
                    names = []
                    if '.c' in code_path or '.cpp' in code_path:
                        code_path_list.append(code_path)
                        node_list = Node_extract(code_path, sel)[0]
                        names.append(Node_extract(code_path, sel)[1])
                        print ('The total amount of the nodes is {}'.format(len(node_list)))
                        json_files_dir = dir_path + '/jsons'
                        if not os.path.exists(json_files_dir):
                            os.mkdir(json_files_dir)
                        # json_file1 is a nested dict
                        json_file1 = json_files_dir + '/AST.json'
                        # json file2 is the trace of each node
                        json_file2 = json_files_dir + '/trace.json'
                        # json file3 restore the name of each module
                        json_file3 = json_files_dir + '/Module_names.json'
                        with open(json_file3, 'w+') as f:
                            json.dump(names, f, ensure_ascii=False, indent=4)
                        f.close()
                        to_json(node_list, json_file1, json_file2, False)
                        print ("The json file path: "+json_files_dir)
                    else:
                        json_list = []
                        node_len = 0
                        g = os.walk(code_path)
                        for path, di, filelist in g:
                            for filename in filelist:
                                k = os.path.join(path, filename)
                                if '.c' in k or '.cpp' in k:
                                    code_path_list.append(k)
                        for i in range(len(code_path_list)):
                            node_list = Node_extract(code_path_list[i], sel)[0]
                            names.append(Node_extract(code_path_list[i], sel)[1])
                            name = code_path_list[i]
                            node_list.insert(0, name)
                            json_list.append(node_list)
                            node_len += len(node_list)
                        print ('The total amount of the nodes is {}'.format(node_len))
                        json_files_dir = dir_path + '/jsons'
                        if not os.path.exists(json_files_dir):
                            os.mkdir(json_files_dir)
                        json_file1 = json_files_dir + '/AST.json'
                        json_file2 = json_files_dir + '/trace.json'
                        json_file3 = json_files_dir + '/Module_names.json'
                        with open(json_file3, 'w+') as f:
                            json.dump(names, f, ensure_ascii=False, indent=4)
                        f.close()
                        to_json(json_list, json_file1, json_file2, True)
                        print ("The json file path: "+json_files_dir)
                    code_path_file = dir_path + "/jsons/file_path.json"
                    with open(code_path_file, 'w+') as f:
                        json.dump(code_path_list, f, ensure_ascii=False, indent=4)
                    f.close()
                else:
                    raise SystemExit("Error: Could not find c/c++ file")
            else:
                raise SystemExit("Usage: python main.py --tojson c_file_dir True/False")
        elif args[0] == '--combine':
            if len(args[1:]) == 2:
                if args[2] != 'True' and args[2] != 'False':
                    raise SystemExit("Please use 'True' or 'False' to choose whether you need to remove the headers")
                else:
                    if args[2] == 'True':
                        sel = True
                    else:
                        sel = False
                if os.path.exists(args[1]):
                    code_path = args[1]
                    node_graph(code_path, sel, None)
                else:
                    raise SystemExit("Error: Could not find the file")
            else:
                raise SystemExit("Usage: python main.py --combine c_file_dir1 c_file_dir2 True/False ")
        elif args[0] == '--find_module':
            if len(args[1:]) == 2:
                if args[2] != 'True' and args[2] != 'False':
                    raise SystemExit("Please use 'True' or 'False' to choose whether you need to remove the headers")
                else:
                    if args[2] == 'True':
                        sel = True
                    else:
                        sel = False
                if len(args[1]) != 10:
                    raise SystemExit("Please use the right LINE_ID like 0000010001, for the first 6 characters represent the line number and the last 4 characters represent the file number")
                else:
                    if os.path.exists(dir_path + '/jsons/AST.json') and os.path.exists(dir_path + '/jsons/file_path.json'):
                        Input_id = args[1]
                        Input_line = int(Input_id[0:6])
                        Input_file = int(Input_id[6:10])
                        max = 0
                        count = 0
                        with open(dir_path + '/jsons/file_path.json') as f1:
                            file_path_list = json.load(f1)
                        f1.close()
                        if Input_file >= len(file_path_list):
                            raise SystemExit("The file number is too large")
                        file_name = file_path_list[Input_file]
                        node_list = Node_extract(file_name,sel)[0]
                        node_list_new = to_dict(node_list, Input_file)[2]
                        print ("###############The Result################")
                        print (str(file_name) + ":" + str(Input_line))
                        for i in range(1, len(node_list_new)):
                            line_range = node_list_new[i]['coord']
                            if line_range != 'null' :
                                if line_range[0] != 'null' and line_range[1] != 'null' :
                                    first_line = line_range[0]
                                    last_line = line_range[1]
                                    line_number1 = int(first_line[0:6])
                                    line_number2 = int(last_line[0:6])
                                    if line_number2 > max :
                                        max = line_number2
                                    if line_number1 != line_number2:
                                        if line_number1 <= Input_line and Input_line <= line_number2:
                                            print ("This module's node type is: %s "%(node_list_new[i]['_nodetype']))
                                            print ("This module's coordinate is: %s "%(node_list_new[i]['coord']))
                                            print ("This module's name is: %s "%(node_list_new[i]['node_name']))
                                            count = count + 1
                        if count == 0:
                            print ("No module satisfied")
                        if Input_line > max:
                            raise SystemExit("The line number is too large \n#########################################")
                        print ("#########################################")
                    else:
                        raise SystemExit("Please generate json files first with '--tojson' ")
            else:
                raise SystemExit("Usage: python main.py --find_module LINE_ID True/False")
        else:
            raise SystemExit("Usage: python main.py --compare c_file_dir1 c_file_dir2 True/False \n       python main.py --view c_file_dir True/False \n       python main.py --tojson c_file_dir True/False \n       python main.py --combine c_file_dir1 c_file_dir2 True/False \n       python main.py --find_module LINE_ID True/False  ")
    else:
        raise SystemExit("Usage: python main.py --compare c_file_dir1 c_file_dir2 True/False \n       python main.py --view c_file_dir True/False \n       python main.py --tojson c_file_dir True/False \n       python main.py --combine c_file_dir1 c_file_dir2 True/False \n       python main.py --find_module LINE_ID True/False  ")
