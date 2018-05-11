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
    test = SemanticAnalysis(ast_file='../hook/jsons/AST.json', output_graph_path='graph')
    ast = test.convert_ast('docs/parsed_ast.json')
    test.get_graph(ast)
    test.check()
    test.save_node('docs/nodes.json')
    test.save_edge('docs/edges.json')