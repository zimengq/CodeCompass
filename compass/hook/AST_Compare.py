#!/usr/bin/python
# -*- coding: UTF-8 -*-

__author__  = 'king-jojo'

from AST2JSON import to_dict
from AST_Process import Node_extract

def list_all_node(dict_a, num_list):
    """Using recursive function to traverse the nodes and dump them into list"""
    node_list = []
    if isinstance(dict_a,dict):
        for x in range(len(dict_a)):
            temp_key = dict_a.keys()[x]
            temp_value = dict_a[temp_key]
            if isinstance(temp_value, list):
                for y in temp_value:
                    node_list.append(list_all_node(y))
            else:
                if temp_key == '_nodetype':
                    node_list.append(temp_value)
    return node_list

def Sequence_generate(node_list, num_list):
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

def Sequence_compare(seq1, seq2):
    """Compare the sequence and return the same part they share"""
    seq1_cp = seq1[0][:]
    seq2_cp = seq2[0][:]
    num1_cp = seq1[1][:]
    num2_cp = seq2[1][:]
    len_seq1 = len(seq1_cp)
    len_seq2 = len(seq2_cp)
    same_list = []
    same_num1 = []
    same_num2 = []
    same_num = []
    for i in range(min(len_seq1,len_seq2)):
        if seq1_cp[i] == seq2_cp[i]:
            same_list.insert(0, seq1_cp[i])
            same_num1.insert(0, num1_cp[i])
            same_num2.insert(0, num2_cp[i])
        else:
            break
    if len(same_num1) > 3:
        same_num = [same_num1, same_num2]
    return same_num

def Seqlist_compare(seq_list1, seq_list2):
    """Compare the sequence lists and merge the same nodes they share"""
    seq_list1_cp = seq_list1[0][:]
    seq_list2_cp = seq_list2[0][:]
    num_list1_cp = seq_list1[1][:]
    num_list2_cp = seq_list2[1][:]
    set1 = []
    set2 = []
    list1 = []
    list2 = []
    for index1,seq1 in enumerate(seq_list1_cp):
        for index2,seq2 in enumerate(seq_list2_cp):
            if index1 not in list1 and index2 not in list2:
                seq_collect1 = [seq1, num_list1_cp[index1]]
                seq_collect2 = [seq2, num_list2_cp[index2]]
                same_num = Sequence_compare(seq_collect1, seq_collect2)
                if len(same_num) > 0:
                    set1 = list(set(set1).union(set(same_num[0])))
                    set2 = list(set(set2).union(set(same_num[1])))
                    list1.append(index1)
                    list2.append(index2)
    return [set1, set2]

def seq_process(code_path, preprocess):
    nodes = Node_extract(code_path, preprocess)
    dd = to_dict(nodes, 0)
    num_list = dd[1]
    node_list = dd[2]
    seq = Sequence_generate(node_list, num_list)
    return seq
