#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2018 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
package functions of semantic analysis for code module.
"""

from utilities import *
from visualization import *
from graphviz import Digraph


class SemanticAnalysis(object):

    def __init__(self, ast_file):
        self.ast_file = ast_file
        self.graph_dir = 'graph'
        self.parsed_ast_file = 'data/parsed_ast.json'

    def convert_ast(self):
        ast_data = load_json(self.ast_file)
        parsed_ast = extract_nodes(ast_data)
        save_json(parsed_ast, self.parsed_ast_file)
        return parsed_ast

    def visualize_graph(self, ast):
        if not os.path.exists(self.graph_dir):
            try:
                os.makedirs(self.graph_dir)
            except OSError as exception:
                raise SystemExit("Error: Could not create the output dir.")

        project_graph = Digraph('Project Module Graph', format='pdf')
        index = 0
        for file in ast:
            module_graph = Digraph(comment=file['__filename'], format='pdf')
            for module in file['__content']['_subnode']:
                module_graph = visualization(module, module['_subnode'], module_graph)
            graph_file = self.graph_dir + '/module_graph' + '_' + str(index)
            index += 1
            save_graph(module_graph, graph_file)
            project_graph.subgraph(module_graph)
        save_graph(project_graph, self.graph_dir + '/project_graph')