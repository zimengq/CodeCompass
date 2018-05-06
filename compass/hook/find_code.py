import os
import json

dir_path = os.path.dirname(os.path.realpath(__file__))
home_path = os.path.expandvars('$HOME')

def find_code(keyword):

	with open(dir_path + '/jsons/line_dict_new.json') as f:
		line_dict = json.load(f)
	f.close()

	with open(dir_path + '/jsons/file_path.json') as f1:
		file_path = json.load(f1)
	f1.close()

	# for i in range(len(line_dict)):
	# dict_keys = list(line_dict.keys())
	# keyword = dict_keys[i]
	# dict_values = list(line_dict.values())
	# line_info = dict_values[i]
	line_info = line_dict[keyword]
	output_str = ""
	for j in range(len(line_info)):
		file_num = int(line_info[j][0:4])
		begin_line = int(line_info[j][4:10])
		end_line = int(line_info[j][10:16])
		file_name = file_path[file_num].replace("/home/jinzhenghui",home_path)
		output_str += file_path[file_num] + ":" + str(begin_line) + "-" + str(end_line) + "\n"
		with open(file_path[file_num]) as file_content:
			check_point = 0
			for line in file_content:
				check_point += 1
				if begin_line <= check_point and end_line >= check_point:
					output_str += line
		output_str += "\n"
	return output_str

if __name__ == "__main__":
	print (find_code("controller_ctx"))