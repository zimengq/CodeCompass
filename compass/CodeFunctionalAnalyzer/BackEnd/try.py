from util import *

COCA_frequency_loader()
words = input("Please input sentence:")
name_list = get_name_list(words)
print_relation(" ".join(name_list)) 