#!/usr/bin/python
# -*- coding: UTF-8 -*-

__author__  = 'king-jojo'

from graphviz import Digraph
from AST_Process import Node_extract
import re
import os

RE_AZ = re.compile(r'-(.*?) ')
RE_C = re.compile(r'/(.*).c')

def node_graph(code_path, preprocess, same_list):
    """Show the syntax tree and display the same part of tow trees"""
    if '.c' not in code_path or '.cpp' not in code_path:
        code_path_list = []
        g = os.walk(code_path)
        for path,di,filelist in g:
            for filename in filelist:
                k = os.path.join(path, filename)
                if '.c' in k or '.cpp' in k:
                    code_path_list.append(k)
        dot = Digraph("G", format="pdf")
        dot.node('Start', 'Start')
        for i in range(len(code_path_list)):
            node_list = Node_extract(code_path_list[i], preprocess)
            num_list = []
            name = re.findall(RE_C, code_path_list[i])
            for x in range(1, len(node_list)):
                num = node_list[x]['_nodetype'].find('-')
                num_list.append(num)
                cut = re.findall(RE_AZ, node_list[x]['_nodetype'])
                if len(cut) > 0:
                    node_list[x]['_nodetype'] = cut[0]
                else:
                    node_list[x]['_nodetype'] = ''
            num_list.insert(0, 0)
            if same_list == None:
                num_cp = num_list
                sub = Digraph(comment=name)
                sub.node(str(i)+'a0', str(name))
                for y in range(1, max(num_cp) + 1, 2):
                    if y == 1:
                        for x in range(len(node_list)):
                            if num_list[x] == y:
                                sub.node(str(i) + 'b' + str(x), node_list[x]['_nodetype'])
                                sub.edge(str(i)+'a0', str(i) + 'b' + str(x))
                    if y > 1:
                        for x in range(len(num_cp)):
                            if num_list[x] == y:
                                sub.node(str(i) + 'b' + str(x), node_list[x]['_nodetype'])
                                for z in range(x, 0, -1):
                                    if num_list[z] == y - 2:
                                        sub.edge(str(i) + 'b' + str(z), str(i) + 'b' + str(x))
                                        break
            dot.subgraph(sub)
            dot.edge('Start', str(i)+'a0')
        save_name = './output/combine'
        dot.view(save_name)
        if os.path.getsize(save_name + '.pdf') > 200000:
            raise SystemExit("Error: The graph is too large for evince")
    else:
        node_list = Node_extract(code_path, preprocess)
        num_list = []
        name = re.findall(RE_C, code_path)
        for x in range(1, len(node_list)):
            num = node_list[x]['_nodetype'].find('-')
            num_list.append(num)
            cut = re.findall(RE_AZ, node_list[x]['_nodetype'])
            if len(cut) > 0:
                node_list[x]['_nodetype'] = cut[0]
            else:
                node_list[x]['_nodetype'] = ''
        num_list.insert(0,0)
        if same_list == None:
            num_cp = num_list
            dot = Digraph(comment = name, format="pdf")
            dot.node('0', 'TranslationUnitDecl')
            for y in range(1, max(num_cp)+1, 2):
                if y == 1:
                    for x in range(len(node_list)):
                        if num_list[x] == y:
                            dot.node(str(x), node_list[x]['_nodetype'])
                            dot.edge('0', str(x))
                if y > 1:
                    for x in range(len(num_cp)):
                        if num_list[x] == y:
                            dot.node(str(x), node_list[x]['_nodetype'])
                            for z in range(x, 0, -1):
                                if num_list[z] == y-2:
                                    dot.edge(str(z), str(x))
                                    break
        else:
            num_cp = num_list
            same_cp = same_list
            dot = Digraph(comment = name, format="pdf")
            if 0 in same_cp:
                dot.node('0', 'TranslationUnitDecl', _attributes={"color":"red"})
            else:
                dot.node('0', 'TranslationUnitDecl')
            for y in range(1, max(num_cp) + 1, 2):
                if y == 1:
                    for x in range(len(node_list)):
                        if num_list[x] == y:
                            if x in same_cp:
                                dot.node(str(x), node_list[x]['_nodetype'], _attributes={"color":"red"})
                                dot.edge('0', str(x))
                            else:
                                dot.node(str(x), node_list[x]['_nodetype'])
                                dot.edge('0', str(x))
                if y > 1:
                    for x in range(len(num_cp)):
                        if num_list[x] == y:
                            if x in same_cp:
                                dot.node(str(x), node_list[x]['_nodetype'], _attributes={"color":"red"})
                                for z in range(x, 0, -1):
                                    if num_list[z] == y - 2:
                                        dot.edge(str(z), str(x))
                                        break
                            else:
                                dot.node(str(x), node_list[x]['_nodetype'])
                                for z in range(x, 0, -1):
                                    if num_list[z] == y - 2:
                                        dot.edge(str(z), str(x))
                                        break
        save_name = './output/'+str(name[0])
        dot.view(save_name)
        if os.path.getsize(save_name + '.pdf') > 200000:
            raise SystemExit("Error: The graph is too large for evince")