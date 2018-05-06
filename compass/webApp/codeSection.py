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
	output_str = ""
	for j in range(len(line_info)):
		file_num = int(line_info[j][0:4])
		begin_line = int(line_info[j][4:10])
		end_line = int(line_info[j][10:16])
		file_name = file_path[file_num].replace("/home/jinzhenghui", codeBasePath)
		output_str += file_path[file_num] + ":" + str(begin_line) + "-" + str(end_line) + "\n"
		with open(file_name) as file_content:
			check_point = 0
			for line in file_content:
				check_point += 1
				if begin_line <= check_point and end_line >= check_point:
					output_str += line
		output_str += "\n"
	return output_str

"""print find_code("add_logical_flows", 
				"/home/kakaiu/testDataForCompass/line_dict_new.json", 
				"/home/kakaiu/testDataForCompass/file_path.json", 
				"/home/kakaiu/testDataForCompass")
"""