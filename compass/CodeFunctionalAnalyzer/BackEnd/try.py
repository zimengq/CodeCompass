from urllib.request import urlopen
import xml.etree.ElementTree as ET
import nltk 
import csv
from spacy.lang.en import English
import subprocess
from nltk.corpus import brown

uid = 6231
tokenid = "b5Hw9fSU3Ho8gZAB"
word_frequency = {}
nlp = English()

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

def abbreviate(term):
    prefix = "https://www.abbreviations.com/services/v2/abbr.php?"
    url = prefix + "uid=" + str(uid) + "&tokenid=" + tokenid + "&term=" + term.upper()
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

def get_name_list(name):
    segments = [item.lemma_ for item in nlp(name)]
    nameList = []
    for item in segments :
        if wordDetected(item) :
            print("word Detected:",item)
            nameList.append(item)
        else :
            nameList.append(abbreviate(item))
    return nameList

COCA_frequency_loader()
words = input("Please input sentense:")
print(get_name_list(words))