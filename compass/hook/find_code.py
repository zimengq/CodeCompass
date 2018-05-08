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
	output_list = []
	for j in range(len(line_info)):
		file_dict = dict()
		file_num = int(line_info[j][0:8])
		begin_line = int(line_info[j][8:16])
		end_line = int(line_info[j][16:24])
		with open(file_path[file_num]) as file_content:
			check_point = 0
			line_info_dict = dict()
			for line in file_content:
				check_point += 1
				if begin_line <= check_point and end_line >= check_point:
					line_num = "%08d" % (check_point) + "%08d" % (file_num)
					line_info_dict[line_num] = line
		file_dict[file_path[file_num]] = [line_info_dict]
		output_list.append(file_dict)
	return output_list

if __name__ == "__main__":
	print (find_code("controller_ctx"))