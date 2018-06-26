import json

def load_json(json_file):
    with open(json_file) as f:
        stream = f.read()
        json_data = json.loads(stream)
    return json_data

class semanticGraph(object):
	def __init__(self, nodeFilePath, edgeFilePath):
		self.nodes = load_json(nodeFilePath)
		self.edges = load_json(edgeFilePath)

	def __findNodeDeclarationByID(self, nodeID):
		for node in self.nodes:
			if node['id']==nodeID:
				return node['declaration']
		return None

	def query(self, keyword):
		ns = []
		nIDs = []
		for node in self.nodes:
			if keyword.lower() in node['declaration'].lower():
				ns.append([node['declaration'], node['id']])
				nIDs.append(node['id'])
		es = []
		for edge in self.edges:
			if (edge[0] in nIDs) or (edge[1] in nIDs):
				es.append(edge)
				if edge[0] not in nIDs:
					ns.append([self.__findNodeDeclarationByID(edge[0]), edge[0]])
				if edge[1] not in nIDs:
					ns.append([self.__findNodeDeclarationByID(edge[1]), edge[1]])

		print(len(self.nodes), len(self.edges))
		print(len(ns), len(es))

		return ns, es