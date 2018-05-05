#!/usr/bin/python
# -*- coding: UTF-8 -*-

__author__  = 'king-jojo'

import json
import re
import os
from AST_Process import Node_extract

RE_AZ = re.compile(r'-(.*?) ')

RE_LINENUM = re.compile(r'line:(.*?):')
RE_FILE_C = re.compile(r'.c:(.*?):')
RE_FILE_CPP = re.compile(r'.cpp:(.*?):')

dir_path = os.path.dirname(os.path.realpath(__file__))

def Sequence_gene(node_list, num_list):
    """From the root to the leaves, we traverse the tree to get all the sequences"""
    seque_list = []
    index_list = []
    for y in range(max(num_list), 1, -2):
        for x in range(len(num_list)-1, -1, -1):
            if num_list[x] == y:
                sequence = []
                index = []
                sequence.append(node_list[x + 1]['_nodetype'])
                index.append(x+1)
                for z in range(y-2, 0, -2):
                    for i in range(x-1, -1, -1):
                        if num_list[i] == z:
                            sequence.append(node_list[i + 1]['_nodetype'])
                            index.append(i+1)
                            break
                index.append(0)
                sequence.append(node_list[0]['_nodetype'])
                seque_list.append(sequence)
                index_list.append(index)
    return [seque_list, index_list]

def to_dict(node_list, id):
    """Transform the node list into nested dictionary"""
    print (id)
    node_list_cp = node_list[:]
    cp_list = []
    AST_dict = dict()
    AST_dict['_nodetype'] = node_list_cp[0]['_nodetype']
    AST_dict['coord'] = 'null'
    AST_dict['id'] = "%08d"%(0) + "%04d"%(id)
    first_sublist = []
    for x in range(1, len(node_list_cp)):
        num = node_list_cp[x]['_nodetype'].find('-')
        cp_list.append(num)
        cut = re.findall(RE_AZ, node_list_cp[x]['_nodetype'])
        if len(cut) > 0:
            node_list_cp[x]['_nodetype'] = cut[0]
        else:
            node_list_cp[x]['_nodetype'] = 'NULL'
        node_list_cp[x]['id'] = "%08d"%(x) + "%04d"%(id)
    num_list = cp_list[:]

    node_list_cp = linenum_extract(node_list_cp, num_list, id)

    for y in range(max(num_list) - 2, 0, -2):
        for x in range(len(num_list) - 1, -1, -1):
            if num_list[x] == y:
                subnode_list = []
                for z in range(len(num_list) - 1, x - 1, -1):
                    if num_list[z] == y + 2:
                        subnode_list.append(node_list_cp[z + 1])
                        num_list[z] = 0
                node_list_cp[x + 1]['_subnode'] = subnode_list
    for x in range(0, len(num_list)):
        if num_list[x] == 1:
            first_sublist.append(node_list_cp[x + 1])
    AST_dict['_subnode'] = first_sublist

    """generate trace list"""
    seq = Sequence_gene(node_list, cp_list)
    seque_list = seq[0]
    index_list = seq[1]
    count_dict = dict()
    trace_list = []
    for i in range(len(seque_list)):
        for k in range(len(index_list[i])):
            num = index_list[i][k]
            if count_dict.has_key(str(num)):
                continue
            else:
                count_dict[str(num)] = 'True'
                trace_dict = dict()
                trace_dict['id'] = "%08d"%(num) + "%04d"%(id)
                trace_dict['_nodetype'] = node_list_cp[num]['_nodetype']
                trace_dict['coord'] = node_list_cp[num]['coord']
                short_list = []
                for p in range(k, len(index_list[i]), 1):
                    short_list.append("%08d"%(index_list[i][p]) + "%04d"%(id))
                trace_dict['trace'] = short_list
                trace_list.append(trace_dict)
            if len(count_dict) == len(node_list):
                break
    return [AST_dict, cp_list, node_list_cp, trace_list]

def to_json(node_list, json_name1, json_name2, Tri=False):
    """Write into json format"""
    if Tri:
        node_list_new = node_list[:]
        final_list1 = []
        final_list2 = []
        for i in range(len(node_list_new)):
            name = node_list_new[i][0]
            del node_list_new[i][0]
            AST_dict = to_dict(node_list_new[i], i)
            new_dict = dict()
            new_dict['__filename'] = name
            new_dict['__content'] = AST_dict[0]
            trace_newdict = dict()
            trace_newdict['__filename'] = name
            trace_newdict['__content'] = AST_dict[3]
            final_list1.append(new_dict)
            final_list2.append(trace_newdict)
        with open(json_name1, 'w+') as f1:
            json.dump(final_list1, f1, ensure_ascii=False, indent=4)
        f1.close()
        with open(json_name2, 'w+') as f2:
            json.dump(final_list2, f2, ensure_ascii=False, indent=4)
        f2.close()
    else:
        node_list_new = node_list[:]
        AST_dict = to_dict(node_list_new, 0)
        with open(json_name1, 'w+') as f1:
            json.dump(AST_dict[0], f1, ensure_ascii=False, indent=4)
        f1.close()
        with open(json_name2, 'w+') as f2:
            json.dump(AST_dict[3], f2, ensure_ascii=False, indent=4)
        f2.close()

def linenum_extract(node_list, num_list, id):
    """Extract Line Number"""
    node_list_new = node_list[:]
    for i in range(1, len(node_list)):
        coordinate = node_list[i]['coord']
        if '.c' in coordinate or '.cpp' in coordinate:
            if '.cpp' not in coordinate:
                line_info1 = re.findall(RE_FILE_C, coordinate)
                line_info2 = re.findall(RE_LINENUM, coordinate)
                if len(line_info1) > 0 and len(line_info2) > 0:
                    line_begin = "%06d"%(int(line_info1[0])) + "%04d"%(id)
                    line_end = "%06d"%(int(line_info2[0])) + "%04d"%(id)
                    node_list_new[i]['coord'] = [line_begin,line_end]
                else:
                    node_list_new[i]['coord'] = 'null'
            else:
                line_info1 = re.findall(RE_FILE_CPP, coordinate)
                line_info2 = re.findall(RE_LINENUM, coordinate)
                if len(line_info1) > 0 and len(line_info2) > 0:
                    line_begin = "%06d" % (int(line_info1[0])) + "%04d" % (id)
                    line_end = "%06d" % (int(line_info2[0])) + "%04d" % (id)
                    node_list_new[i]['coord'] = [line_begin,line_end]
                else:
                    node_list_new[i]['coord'] = 'null'
        elif 'line' in coordinate:
            line_info = re.findall(RE_LINENUM, coordinate)
            if 'col' in coordinate:
                if ', col' in coordinate:
                    if len(line_info) > 0:
                        line_begin = "%06d" % (int(line_info[0])) + "%04d" % (id)
                        line_end = "%06d" % (int(line_info[0])) + "%04d" % (id)
                        node_list_new[i]['coord'] = [line_begin,line_end]
                    else:
                        node_list_new[i]['coord'] = 'null'
                elif ', line' in coordinate:
                    if len(line_info) > 0:
                        """trace its father"""
                        line_begin = 'null'
                        for step in range(2, num_list[i - 1], 2):
                            for x in range(i - 2, -1, -1):
                                if num_list[x] == num_list[i - 1] - step:
                                    if node_list_new[x + 1]['coord'] != 'null':
                                        line_begin = node_list_new[x + 1]['coord'][0]
                                        break
                                    else:
                                        break
                                else:
                                    continue
                            else:
                                continue
                            break
                        line_end = "%06d" % (int(line_info[0])) + "%04d" % (id)
                        node_list_new[i]['coord'] = [line_begin,line_end]
                    else:
                        node_list_new[i]['coord'] = 'null'
                else:
                    node_list_new[i]['coord'] = 'null'
            else:
                if len(line_info) == 2:
                    line_begin = "%06d" % (int(line_info[0])) + "%04d" % (id)
                    line_end = "%06d" % (int(line_info[1])) + "%04d" % (id)
                    node_list_new[i]['coord'] = [line_begin,line_end]
                elif len(line_info) > 0:
                    line_begin = "%06d" % (int(line_info[0])) + "%04d" % (id)
                    line_end = "%06d" % (int(line_info[0])) + "%04d" % (id)
                    node_list_new[i]['coord'] = [line_begin,line_end]
                else:
                    node_list_new[i]['coord'] = 'null'
        elif 'col' in coordinate:
            """trace its father"""
            for step in range(2, num_list[i - 1], 2):
                for x in range(i - 2, -1, -1):
                    if num_list[x] == num_list[i - 1] - step:
                        if node_list_new[x + 1]['coord'] != 'null':
                            line_begin = node_list_new[x + 1]['coord'][0]
                            line_end = node_list_new[x + 1]['coord'][0]
                            node_list_new[i]['coord'] = [line_begin,line_end]
                            break
                        else:
                            break
                    else:
                        continue
                else:
                    continue
                break
            if 'col' in node_list_new[i]['coord']:
                node_list_new[i]['coord'] = 'null'
        else:
            node_list_new[i]['coord'] = 'null'
        # print (node_list_new[i])

    return node_list_new

def find_module(line_number):
    if os.path.exists(dir_path + '/jsons/AST.json') and os.path.exists(dir_path + '/jsons/file_path.json'):
        Input_id = line_number
        Input_line = int(Input_id[0:6])
        Input_file = int(Input_id[6:10])
        max = 0
        lines = 0
        output_list = []
        count = 0
        with open(dir_path + '/jsons/file_path.json') as f1:
            file_path_list = json.load(f1)
        f1.close()
        if Input_file >= len(file_path_list):
            raise SystemExit("The file number is too large")
        file_name = file_path_list[Input_file]
        node_list = Node_extract(file_name,True)[0]
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
                            if lines <= line_number2 - line_number1:
                                lines = line_number2 - line_number1
                                output_list = node_list_new[i]['coord']
        if count == 0:
            print ("No module satisfied")
        if Input_line > max:
            raise SystemExit("The line number is too large \n#########################################")
        print ("#########################################")
        return output_list

#if __name__ == "__main__":
#    code_path = dir_path + '/example/test.cpp'
#    node_list = Node_extract(code_path, True)
#    node_list_new = to_dict(node_list[0],0)[2]
#    print (node_list_new)
