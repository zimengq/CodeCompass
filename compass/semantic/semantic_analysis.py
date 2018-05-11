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
import json


class SemanticAnalysis(object):
    def __init__(self, ast_file, output_graph_path):
        self.ast_file = ast_file
        self.graph_dir = output_graph_path
        self.project_node_list = []
        self.project_edge_list = []

    def convert_ast(self, output_path):
        ast_data = load_json(self.ast_file)
        parsed_ast = extract_nodes(ast_data)
        save_json(parsed_ast, output_path)
        return parsed_ast

    def get_graph(self, ast):
        if not os.path.exists(self.graph_dir):
            try:
                os.makedirs(self.graph_dir)
            except OSError:
                raise SystemExit("Error: Could not create the output dir.")

        project_graph = Digraph('Project Module Graph', format='pdf')
        index = 0

        tmp_node = []
        tmp_edge = []
        for file in ast:
            module_graph = Digraph(comment=file['__filename'], format='pdf')
            nodes = {}
            edges = []
            for module in file['__content']['_subnode']:
                module_graph = visualization(module, module['_subnode'],
                                             module_graph, nodes, edges)
            tmp_node.append({'_content': nodes, '__filename': file['__filename']})
            tmp_edge.append(edges)
            graph_file = self.graph_dir + '/module_graph' + '_' + str(index)
            index += 1
            #save_graph(module_graph, graph_file)
            project_graph.subgraph(module_graph)

        #save_graph(project_graph, self.graph_dir + '/project_graph')

        for item in tmp_node:
            file_path = item['__filename']
            content = item['_content']
            for section_id in content:
                declaration = content[section_id]['node_name']
                split_name = content[section_id]['split_name']
                node_type = content[section_id]['_nodetype']
                self.project_node_list.append({"declaration": declaration,
                                               "file_path": file_path,
                                               "split_name": split_name,
                                               "node_type": node_type,
                                               "id": section_id})

        result = []
        for items in tmp_edge:
            for item in items:
                self.project_edge_list.append((item[0], item[1]))

    def check(self):
        print(len(self.project_node_list))
        tmp = []
        for edge in self.project_edge_list:
            tmp.append(edge[0])
            tmp.append(edge[1])
        print(len(tmp))
        tmp2 = []
        for node in self.project_node_list:
            if node['id'] not in tmp:
                tmp2.append(node['id'])

        print(len(tmp2))

    def save_node(self, output_path):
        with open(output_path, 'w') as f:
            json.dump(self.project_node_list, f, ensure_ascii=False, indent=4)

    def save_edge(self, output_path):
        with open(output_path, 'w') as f:
            json.dump(self.project_edge_list, f, ensure_ascii=False, indent=4)

