#!flask/bin/python
from flask import Flask, render_template, jsonify, request
import json

app = Flask(__name__)

@app.route("/", methods=['GET'])
def index():
	return render_template('index.html'), 201

@app.route("/search", methods=['POST'])
def search():
	query = json.loads(request.get_data())
	print query
	return jsonify({'test':'hello'}), 201

if __name__ == '__main__':
	app.run(host='0.0.0.0',port=80)