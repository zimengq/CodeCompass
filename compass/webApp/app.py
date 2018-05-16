#!flask/bin/python
from flask import Flask, render_template, jsonify, request
import json
import semanticGraph, codeSection, commitHistory, prInfo

nodeFilePath = "/home/kakaiu/testDataForCompass/nodes.json"
edgeFilePath = "/home/kakaiu/testDataForCompass/edges.json"

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
						'/home/kakaiu/testDataForCompass', 
						"/home/kakaiu/testDataForCompass/file_path.json")
	return jsonify({'developerName':result[0], 'lineNumList':result[1]}), 201

@app.route("/getCodeSection", methods=['POST'])
def getCodeSection():
	declaration = json.loads(request.get_data())['declaration'].encode('utf-8')
	result = codeSection.find_code(declaration, 
					"/home/kakaiu/testDataForCompass/line_dict_new.json", 
					"/home/kakaiu/testDataForCompass/file_path.json", 
					"/home/kakaiu/testDataForCompass")
	return jsonify({'codeSection':result}), 201

@app.route("/getPRInfo", methods=['POST'])
def getPRInfo():
	codeLine = json.loads(request.get_data())['codeLine'].encode('utf-8')
	result = prInfo.getPRInfo(codeLine, "/home/kakaiu/testDataForCompass/code2pr.json")
	return jsonify({'prLinks':result}), 201

if __name__ == '__main__':
	app.run(host='0.0.0.0',port=80)