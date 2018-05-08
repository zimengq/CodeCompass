#!flask/bin/python
from flask import Flask, render_template, jsonify, request
import json
import semanticGraph, codeSection

nodeFilePath = "/home/kakaiu/testDataForCompass/node.json"
edgeFilePath = "/home/kakaiu/testDataForCompass/edge.json"

app = Flask(__name__)
graph = semanticGraph.semanticGraph(nodeFilePath, edgeFilePath)

@app.route("/", methods=['GET'])
def index():
	return render_template('index.html'), 201

@app.route("/search", methods=['POST'])
def search():
<<<<<<< HEAD
	query = json.loads(request.get_data())
	print(query)
	return jsonify({'test':'hello'}), 201
=======
	keyword = json.loads(request.get_data())['query'].encode('utf-8')
	result = graph.query(keyword)
	return jsonify({'graph':result}), 201

@app.route("/getCodeSection", methods=['POST'])
def getCodeSection():
	declaration = json.loads(request.get_data())['declaration'].encode('utf-8')
	result = codeSection.find_code(declaration, 
					"/home/kakaiu/testDataForCompass/line_dict_new.json", 
					"/home/kakaiu/testDataForCompass/file_path.json", 
					"/home/kakaiu/testDataForCompass")
	return jsonify({'codeSection':result}), 201
>>>>>>> 92dfc56af450100b41c3b1e6c0a1fae21eb663c9

if __name__ == '__main__':
	app.run(host='0.0.0.0',port=80)