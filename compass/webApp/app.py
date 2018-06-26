#!flask/bin/python
from flask import Flask, render_template, jsonify, request
from data_path import home_path
import json
import os
import semanticGraph, codeSection, commitHistory, prInfo

path = os.path.expandvars('$HOME')

nodeFilePath = home_path + "nodes.json"
edgeFilePath = home_path + "edges.json"

app = Flask(__name__)
graph = semanticGraph.semanticGraph(nodeFilePath, edgeFilePath)


@app.route("/", methods=['GET'])
def index():
    return render_template('index.html'), 201


@app.route("/search", methods=['POST'])
def search():
    keyword = json.loads(request.get_data().decode('utf-8'))['query']
    result = graph.query(keyword)
    return jsonify({'graph': result}), 201


@app.route("/get_line_info", methods=['POST'])
def get_line_info():
    tmp = json.loads(request.get_data().decode('utf-8'))
    file_id = tmp['fileID'].encode('utf-8')
    line_id = tmp['lineID']
    result = commitHistory.get_author(file_id, line_id,
                                      home_path,
                                      home_path + "file_path.json")
    return jsonify({'developerName': result[0], 'lineNumList': result[1]}), 201


@app.route("/get_code_section", methods=['POST'])
def get_code_section():
    declaration = json.loads(request.get_data().decode('utf-8'))['declaration']
    result = codeSection.find_code(declaration,
                                   home_path + "line_dict_new.json",
                                   home_path + "file_path.json",
                                   path)
    return jsonify({'codeSection': result}), 201


@app.route("/get_pr_info", methods=['POST'])
def get_pr_info():
    code_line = json.loads(request.get_data().decode('utf-8'))['codeLine']
    result = prInfo.getPRInfo(code_line, home_path + "code2pr.json")
    return jsonify({'prLinks': result}), 201


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=80)
