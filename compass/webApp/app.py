#!flask/bin/python
from flask import Flask, render_template, jsonify, request
import json
import semanticGraph

nodeFilePath = "/home/kakaiu/testDataForCompass/node.json"
edgeFilePath = "/home/kakaiu/testDataForCompass/edge.json"

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

if __name__ == '__main__':
	app.run(host='0.0.0.0',port=80)