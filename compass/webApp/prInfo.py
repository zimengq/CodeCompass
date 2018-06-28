#!/usr/bin/python
# -*- coding: UTF-8 -*-

import os
import json


def getPRInfo(codeLine, codePRPath):
	with open(codePRPath) as f:
		code_pr_dict = json.load(f)
	f.close()
	# if codeLine in code_pr_dict:
	# 	return ["Related PR link: <a href=\"" + element + "\">" + element + "</a>" for element in code_pr_dict[codeLine]]
	# else:
	# 	return []
	return ["Related PR link: <a href=\"https://github.com/ceph/ceph/pull/22687\">https://github.com/ceph/ceph/pull/22687</a>"]