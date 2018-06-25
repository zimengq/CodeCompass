#!/usr/bin/python
# -*- coding: UTF-8 -*-
import os

if __name__ == '__main__':
    os.system("sudo apt-get install clang -y")
    os.system("sudo apt-get install python-pip -y")
    os.system("sudo apt-get install python-dev -y")
    os.system("sudo apt-get install build-essential -y")
    os.system("sudo pip install --upgrade pip")
    os.system("sudo pip install --upgrade virtualenv")
    os.system("sudo pip install graphviz")
    os.system("sudo pip install gensim")
    os.system("sudo pip install nltk")
    os.system("sudo pip install flask")
    os.system("sudo apt install git")
    os.system("git clone https://github.com/ch-chiu/Code-Compass.git")