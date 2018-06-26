#!flask/bin/python
from flask import Flask, render_template, jsonify, request
from setup.datapath import home_path
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
	keyword = json.loads(request.get_data())['query'].encode('utf-8')
	result = graph.query(keyword)
	return jsonify({'graph':result}), 201

@app.route("/getLineInfo", methods=['POST'])
def getLineInfo():
	tmp = json.loads(request.get_data())
	fileID = tmp['fileID'].encode('utf-8')
	lineID = tmp['lineID']
	result = commitHistory.get_author(fileID, lineID, 
						home_path, 
						home_path + "file_path.json")
	return jsonify({'developerName':result[0], 'lineNumList':result[1]}), 201

@app.route("/getCodeSection", methods=['POST'])
def getCodeSection():
	declaration = json.loads(request.get_data())['declaration'].encode('utf-8')
	result = codeSection.find_code(declaration, 
					home_path + "line_dict_new.json", 
					home_path + "file_path.json", 
					path)
	return jsonify({'codeSection':result}), 201

@app.route("/getPRInfo", methods=['POST'])
def getPRInfo():
	codeLine = json.loads(request.get_data())['codeLine'].encode('utf-8')
	result = prInfo.getPRInfo(codeLine, home_path + "code2pr.json")
	return jsonify({'prLinks':result}), 201

if __name__ == '__main__':
	app.run(host='0.0.0.0',port=80)
