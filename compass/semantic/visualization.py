#!~/anaconda3/bin/ python
# -*- coding: utf-8 -*-
#
# Copyright (C) 2018 Zimeng Qiu <CNPG-qzm@hotmail.com>
# Licensed under the GNU LGPL v2.1 - http://www.gnu.org/licenses/lgpl.html

"""
This script implement graph visualization
"""

import os
from graphviz import Digraph


def visualization(father_node, son_nodes, graph, nodes, edges):
    g = Digraph(comment=father_node['node_name'] + ' | ' + father_node['_nodetype'])
    g.node(father_node['id'],
           father_node['node_name'] + ' | ' + father_node['_nodetype'])
    nodes[father_node['id']] = {"node_name": father_node['node_name'],
                                "_nodetype": father_node['_nodetype'],
                                "split_name": father_node['split_name']}
    if len(son_nodes):
        for node in son_nodes:
            g.node(node['id'],
                   node['node_name'] + ' | ' + node['_nodetype'])
            nodes[node['id']] = {"node_name": node['node_name'],
                                        "_nodetype": node['_nodetype'],
                                        "split_name": node['split_name']}
            g.edge(father_node['id'],
                   node['id'])
            edges.append((father_node['id'], node['id']))
            if len(node['_subnode']):
                g = visualization(node, node['_subnode'], g, nodes, edges)
    graph.subgraph(g)
    return graph


def save_graph(graph, file_name):
    graph.view(file_name)
    if os.path.getsize(file_name + '.pdf') > 200000:
        raise SystemExit("Error: The graph is too large.")

