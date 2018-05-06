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
    def __init__(self, ast_file, outputGraphPath):
        self.ast_file = ast_file
        self.graph_dir = outputGraphPath
        self.project_nodes = []
        self.project_edges = []
        self.project_nodeList = []
        self.project_edgeList = []

    def convert_ast(self, outputPath):
        ast_data = load_json(self.ast_file)
        parsed_ast = extract_nodes(ast_data)
        save_json(parsed_ast, outputPath)
        return parsed_ast

    def get_graph(self, ast):
        if not os.path.exists(self.graph_dir):
            try:
                os.makedirs(self.graph_dir)
            except OSError as exception:
                raise SystemExit("Error: Could not create the output dir.")

        project_graph = Digraph('Project Module Graph', format='pdf')
        index = 0

        tmpNode = []
        tmpEdge = []
        for file in ast:
            module_graph = Digraph(comment=file['__filename'], format='pdf')
            nodes = {}
            edges = []
            for module in file['__content']['_subnode']:
                module_graph = visualization(module, module['_subnode'], module_graph,
                                                                         nodes, edges)
            tmpNode.append({'_content': nodes, '__filename': file['__filename']})
            tmpEdge.append(edges)
            graph_file = self.graph_dir + '/module_graph' + '_' + str(index)
            index += 1
            #save_graph(module_graph, graph_file)
            project_graph.subgraph(module_graph)
        #save_graph(project_graph, self.graph_dir + '/project_graph')

        for item in tmpNode:
            filePath = item['__filename']
            content = item['_content']
            for sectionID in content:
                declaration = content[sectionID]['node_name']
                splitName = content[sectionID]['split_name']
                nodeType = content[sectionID]['_nodetype']
                self.project_nodeList.append({"declaration":declaration, 
                                "filePath":filePath, 
                                "splitName":splitName, 
                                "nodeType":nodeType, 
                                "id":(sectionID.encode("utf-8"))})

        result = []
        for items in tmpEdge:
            for item in items:
                self.project_edgeList.append(((item[0].encode("utf-8")), (item[1].encode("utf-8"))))

    def check(self):
        print len(self.project_nodeList)
        tmp = []
        for edge in self.project_edgeList:
            tmp.append(edge[0])
            tmp.append(edge[1])
        print len(tmp)
        tmp2 = []
        for node in self.project_nodeList:
            if node['id'] not in tmp:
                tmp2.append(node['id'])

        print len(tmp2)

    def saveNode(self, outputPath):
        with open(outputPath, 'w') as f:
            json.dump(self.project_nodeList, f, ensure_ascii=False, indent=4)

    def saveEdge(self, outputPath):
        with open(outputPath, 'w') as f:
            json.dump(self.project_edgeList, f, ensure_ascii=False, indent=4)