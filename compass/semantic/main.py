#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2018 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
For debugging
"""

import os
import json
from utilities import *
from visualization import *
from graphviz import Digraph
from semantic_analysis import SemanticAnalysis

dir_path = os.path.dirname(os.path.realpath(__file__))

if __name__ == '__main__':
    # ast_data = load_json('data/AST.json')
    # extracted_ast = extract_nodes(ast_data[0:10])
    # json_file = dir_path + '/data/test.json'
    # save_json(extracted_ast, json_file)
    #
    # graph_dir = dir_path + '/graph'
    # if not os.path.exists(graph_dir):
    #     try:
    #         os.makedirs(graph_dir)
    #     except OSError as exception:
    #         raise SystemExit("Error: Could not create the output dir.")
    # project_graph = Digraph('Project Module Graph', format='pdf')
    # index = 0
    # for file in extracted_ast:
    #     module_graph = Digraph(comment=file['__filename'], format='pdf')
    #     for module in file['__content']['_subnode']:
    #         module_graph = visualization(module, module['_subnode'], module_graph)
    #     graph_file = graph_dir + '/module_graph' + '_' + str(index)
    #     index += 1
    #     save_graph(module_graph, graph_file)
    #     project_graph.subgraph(module_graph)
    # save_graph(project_graph, graph_dir + '/project_graph')

    test = SemanticAnalysis(ast_file='../hook/jsons/AST.json')
    ast = test.convert_ast()[0:10]
    test.visualize_graph(ast)