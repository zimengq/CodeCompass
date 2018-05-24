from spacy.lang.en import English
from spacy.symbols import nsubj, root, dobj
from urllib.request import urlopen
import xml.etree.ElementTree as ET
import nltk 
import spacy
import csv
import subprocess
import json
stand4 = json.load(open("stand4.json"))
word_frequency = {}
nlp = English()
dependencyParser = spacy.load("en_core_web_sm")

def abbreviate(term):
    prefix = "https://www.abbreviations.com/services/v2/abbr.php?"
    url = prefix + "uid=" + str(stand4["uid"]) + "&tokenid=" + stand4["tokenid"] + "&term=" + term.upper()
    page = urlopen(url)
    results = ET.parse(page).getroot()
    candidates = []
    for item in results.findall('./result') :
        data = {}
        data['name'] = item.findtext('./definition')
        data['class'] = item.findtext('./category')
        data['parent'] = item.findtext('./parentcategory')
        data['score'] = item.findtext('./score')
        candidates.append(data)
        
    #print(candidates)
    candidates = list(filter(valid,candidates))
    #print(candidates)
    if candidates :
        candidate = candidates[0]['name']
        if score([term]) > score(candidate.split(' ')):
            candidate = term
        return candidate 
    else :
        return term

def score(word_list):
    count = len(word_list)
    sum = 0
    for word in word_list :
        if word.upper() in word_frequency.keys() :
            sum += word_frequency[word.upper()]
    return sum / count

def COCA_frequency_loader():
    csvfile = open("COCA60000.csv")
    reader = csv.reader(csvfile)
    title = next(reader)
    word_id = 0
    freq_id = 0
    for i in range(len(title)) :
        if 'WORD' in title[i]:
            word_id = i
        elif 'TOTAL' in title[i]:
            freq_id = i

    for content in reader :
        word = content[word_id].replace("  ","").replace(" ","")
        frequncy = int(content[freq_id])
        #print(word,frequncy)
        if word not in word_frequency.keys() :
            word_frequency[word] = frequncy
        else :
            word_frequency[word] += frequncy

def valid(item):
    categoryBank = ['COMPUTING','INTERNET','UNFILED']
    if float(item['score']) < 3.0 :
        return False
    if (item['class'] in categoryBank) or (item['parent'] in categoryBank) :
        return True
    return False    

def wordDetected(word):
    vowels = ['a','e','i','o','u']
    if not word.upper() in word_frequency.keys() :
        return False

    for vowel in vowels :
        if vowel in word :
            return True
    
    return False

def get_name_list(name):
    segments = list(nlp(name))
    nameList = []
    for item in segments :
        raw_item = item.lemma_
        if wordDetected(raw_item) :
            print("word Detected:",item.text)
            nameList.append(item.text)
        else :
            nameList.append(abbreviate(raw_item))
    print(nameList)
    return nameList

def print_relation(sentence):
    doc = dependencyParser(sentence)
    print(sentence)
    index = 0
    element = ["","",""]
    jump_stat = ['nsubj','ROOT','dobj']
    for item in doc :
        print(item.text,item.dep_,item.pos_,item.head.text)
        if (index == 3) :
            break
        elif 'comp' in item.dep_ :
            element[index] += item.text + " "
        elif item.dep_ in jump_stat :
            element[index] += item.text
            index += 1
    print(element)
    return element

meaningful_threshold = 0.7

class TrieNode(object):
    
    def __init__(self,value = "",parent = None,count = False):
        self.parent = parent
        if parent :
            self.dep = self.parent.dep + 1
        else :
            self.dep = 0
        self.children = {}
        self.value = value
        self.size = 0
        self.count = int(count)
        self.sum = 0

    def update(self):
        self.size += 1 
        if self.parent :
            self.parent.update()

    def increase_meaningfulness(self,word):
        if wordDetected(word) :
            self.sum += 1.0
        elif not (abbreviate(word) == word) :
            self.sum += 0.5

    def is_meaningful(self):
        return self.sum / self.size > meaningful_threshold

    def insert(self, word):
        print(word)
        if word == "" :
            self.update()
            self.count = 0
        else :
            first_char = word[0]
            next_node = None
            if first_char not in self.children.keys() :
                next_node = TrieNode(first_char,parent = self)
                self.children[first_char] = next_node
            else :
                next_node = self.children[first_char]
            self.increase_meaningfulness(word)
            next_node.insert(word[1:])

    def toString(self):
        if (self.parent) :
            return self.parent.toString() + self.value
        else :
            return self.value

def find_most_meaningful_prefix(trie_root) :
    queue = [trie_root]
    candidate = trie_root
    for item in queue:
        queue += list(item.children.values()) 
    queue = list(sorted(queue,key = lambda item: item.sum,reverse = True))
    for item in queue[:5] :
        print(item.toString())
    return queue[0].toString()


def word_count(name_list):
    trie_root = TrieNode()
    for name in name_list:
        for symbol in name.split(' '):
            if not wordDetected(symbol) :
                trie_root.insert(symbol)
    print("it seems that",find_most_meaningful_prefix(trie_root),"is frequently used in your project, is it a term?")

#COCA_frequency_loader()
#test_set = ["mcdriver","mcport","mcdetect","msview","mcview","mcpost","mcvector"]
#word_count(test_set)