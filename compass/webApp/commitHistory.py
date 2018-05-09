#!/usr/bin/python
# -*- coding: UTF-8 -*-

import os
import re
import json

RE_FILENAME = re.compile(r'(.*?):')
RE_LINERANGE = re.compile(r':(.*)')
RE_AUTHOR = re.compile(r'Author: (.*?) <')
RE_GITINFO = re.compile(r'@@(.*?)@@')
RE_MINUS = re.compile(r'a(.*?) b')
RE_PLUS = re.compile(r'b(.*?) ')

def get_author(input_file, input_line, databasePath, filePathDictPath):
	with open(filePathDictPath) as f:
		file_path = json.load(f)
	f.close()

	file_origin_name = file_path[int(input_file[0:8])].replace("/home/zjin", databasePath)
	file_range = [int(input_file[8:16]), int(input_file[16:24])]
	true_id = "%016d"%(int(input_line))
	line_num = int(true_id[0:8])
	out_list = get_gitlog(file_origin_name)
	author_name = out_list[line_num - 1]
	other_list = []
	for i in range(len(out_list)):
		if int(file_range[0]) <= i+1 and i+1 <= int(file_range[1]):
			if out_list[i] == author_name:
				other_list.append(i+1)
	return [author_name, other_list]

def get_gitlog(code_path):
	print code_path
	if os.path.exists(code_path):
		path_name, file_name = os.path.split(code_path)
		os.chdir(path_name)
		try:
		    command = "git log -p " + file_name
		except:
			SystemExit("Error: Not a git repo")
	else:
		raise SystemExit("Error: Could not find the file")
	input_log = os.popen(command)
	log = input_log.read()
	lines = log.split("\n")
	output_dict = dict_generate(lines)
	author_list = author_generate(output_dict)
	return author_list

def dict_generate(input_line):
	count = 0
	line_dict = dict()
	for line in input_line:
		if line[0:6] == "commit":
			count += 1
			line_dict[count] = []
		if line == "\\ No newline at end of file" or line == "":
			continue
		line_dict[count].append(line)
	line_dict_new = dict()
	line_dict_new["count"] = count
	for i in range(count):
		commit_dict = dict()
		commit_count = 0
		for line in line_dict[i+1]:
			if line[0:6] == "Author":
				commit_dict["Author"] = re.findall(RE_AUTHOR, line)[0]
			if line[0:2] == "@@":
				commit_count += 1
				commit_dict[commit_count] = []
			if commit_count > 0:
				commit_dict[commit_count].append(line)
		commit_dict["commit times"] = commit_count
		line_dict_new[i+1] = commit_dict
	return line_dict_new

def author_generate(input_dict):
	author_map_list = []
	for i in range(input_dict["count"], 0, -1):
		get_dict = input_dict[i]
		author = get_dict["Author"]
		if i == input_dict["count"]:
			if get_dict["commit times"] == 1:
				author_map_list = []
				get_line_list = get_dict[1]	
				git_info = re.findall(RE_GITINFO, get_line_list[0])[0]
				git_info_t = git_info.replace("-", "a").replace("+", "b")
				minus_info = re.findall(RE_MINUS, git_info_t)[0].split(',')
				plus_info = re.findall(RE_PLUS, git_info_t)[0].split(',')
				if minus_info[0] == "0" and minus_info[1] == "0":
					for k in range(1, len(get_line_list), 1):
						if get_line_list[k][0] == "+":
							author_map_list.append(author)
					if len(author_map_list) == int(plus_info[1]):
						continue
					else:
						raise SystemExit("Error: The first time git info is wrong")
				else:
					raise SystemExit("Error: The first time git info is wrong")
			else:
				raise SystemExit("Error: The first time git info is wrong")
		else:
			if get_dict["commit times"] != 0:
				for j in range(1, get_dict["commit times"]+1, 1):
					get_line_list = get_dict[j]	
					git_info = re.findall(RE_GITINFO, get_line_list[0])[0]
					git_info_t = git_info.replace("-", "a").replace("+", "b")
					minus_info = re.findall(RE_MINUS, git_info_t)[0].split(',')
					author_map_list = minus_locate(author_map_list, get_line_list, minus_info)
				author_map_list = minus_op(author_map_list)
				for j in range(1, get_dict["commit times"]+1, 1):
					get_line_list = get_dict[j]	
					git_info = re.findall(RE_GITINFO, get_line_list[0])[0]
					git_info_t = git_info.replace("-", "a").replace("+", "b")
					plus_info = re.findall(RE_PLUS, git_info_t)[0].split(',')
					author_map_list = plus_op(author_map_list, get_line_list, plus_info, author)
			else:
				continue
	return author_map_list

def minus_locate(input_list, chan_lines, min_info):
	count = 0
	for index1 in range(1, len(chan_lines), 1):
		if chan_lines[index1][0] != "+":
			count += 1
			if chan_lines[index1][0] == "-":
				real_line = int(min_info[0]) + count - 1
				input_list[real_line - 1] = int(0)
	if count != int(min_info[1]):
		raise SystemExit("Error: The git hsitory is wrong")
	return input_list

def minus_op(input_list):
	loc_list = []
	for index in range(len(input_list)):
		if input_list[index] == int(0):
			loc_list.append(index)
	for in_index in range(len(loc_list)-1, -1, -1):
		input_list.pop(loc_list[in_index])
	return input_list

def plus_op(input_list, chan_lines, plu_info, name):
	count = 0
	for index2 in range(1, len(chan_lines), 1):
		if chan_lines[index2][0] != "-":
			count += 1
			if chan_lines[index2][0] == "+":
				real_line = int(plu_info[0]) + count - 1
				input_list.insert(real_line-1, name)
	if count != int(plu_info[1]):
		raise SystemExit("Error: The git hsitory is wrong")
	return input_list