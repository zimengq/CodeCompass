import os
import json

def find_code(keyword, lineDictPath, fileDictPath, codeBasePath):
	with open(lineDictPath) as f:
		line_dict = json.load(f)
	f.close()

	with open(fileDictPath) as f1:
		file_path = json.load(f1)
	f1.close()

	line_info = line_dict[keyword]
	file_dict = dict()
	for j in range(len(line_info)):
		file_num = int(line_info[j][0:8])
		begin_line = int(line_info[j][8:16])
		end_line = int(line_info[j][16:24])
		print file_path[file_num]
		print codeBasePath
		file_name = file_path[file_num].replace("/home/user0", codeBasePath)
		with open(file_name) as file_content:
			check_point = 0
			line_info_dict = dict()
			for line in file_content:
				check_point += 1
				if begin_line <= check_point and end_line >= check_point:
					line_num = "%08d" % (check_point) + "%08d" % (file_num)
					line_info_dict[line_num] = line.replace('\n', '')
		file_dict[str(line_info[j])] = line_info_dict
	return file_dict

"""print find_code("add_logical_flows", 
				"/home/user0/testDataForCompass/line_dict_new.json", 
				"/home/user0/testDataForCompass/file_path.json", 
				"/home/user0/testDataForCompass")
"""
