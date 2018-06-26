#!/usr/bin/python
# -*- coding: UTF-8 -*-

import os
import json

def getPRInfo(codeLine, codePRPath):
	with open(codePRPath) as f:
		code_pr_dict = json.load(f)
	f.close()
	if codeLine in code_pr_dict:
		return code_pr_dict[codeLine]
	else:
		return []