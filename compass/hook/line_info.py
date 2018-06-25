import os
import json
import datetime

dir_path = os.path.dirname(os.path.realpath(__file__))


class FindModule:
	def generate_dict(self):
		output_dict = dict()
		with open(dir_path + '/jsons/uAST.json') as f:
			node_all = json.load(f)
		f.close()
		for i in range(len(node_all)):
			for j in range(1, len(node_all[i])):
				if node_all[i][j]['node_name'] != 'null':
					if 'null' not in node_all[i][j]['coord']:
						if node_all[i][j]['node_name'] in output_dict.keys():
							output_line = node_all[i][j]['coord'][0][8:16] + node_all[i][j]['coord'][0][0:8] + node_all[i][j]['coord'][1][0:8]
							output_dict[node_all[i][j]['node_name']].append(output_line)
						else:
							output_line = node_all[i][j]['coord'][0][8:16] + node_all[i][j]['coord'][0][0:8] + node_all[i][j]['coord'][1][0:8]
							output_dict[node_all[i][j]['node_name']] = [output_line]

		return output_dict

	def findName(self, mod_name):
	    output_list = []
	    with open(dir_path + '/jsons/uAST.json') as f:
	    	node_all = json.load(f)
	    f.close()
	    for i in range(len(node_all)):
	        for j in range(1, len(node_all[i])):
	        	if mod_name == node_all[i][j]['node_name']:
	        		if 'null' not in node_all[i][j]['coord']:
	        			output_line = node_all[i][j]['coord'][0][8:16] + node_all[i][j]['coord'][0][0:8] + node_all[i][j]['coord'][1][0:8]
	        			output_list.append(output_line)
	    return output_list

if __name__ == '__main__':
	findmod = FindModule()
	out_dict = findmod.generate_dict()
	file_path = "./jsons/line_dict_new.json"
	with open(file_path, 'w+') as f1:
		json.dump(out_dict, f1, ensure_ascii=False, indent=4)
	f1.close()
	os.system("cp ~/Code-Compass/compass/hook/jsons/*.json ~/testDataForCompass")
