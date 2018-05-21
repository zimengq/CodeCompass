from urllib.request import urlopen
import xml.etree.ElementTree as ET
#import nltk 

uid = 6231
tokenid = "b5Hw9fSU3Ho8gZAB"

def valid(item):
    categoryBank = ['COMPUTING','INTERNET']
    if float(item['score']) < 3.0 :
        return False
    if (item['class'] in categoryBank) or (item['parent'] in categoryBank) :
        return True
    return False    

def abbreviate(term):
    prefix = "https://www.abbreviations.com/services/v2/abbr.php?"
    url = prefix + "uid=" + str(uid) + "&tokenid=" + tokenid + "&term=" + term
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
    return candidates[0]['name']

def get_name_list(name):
    segments = name.split("|")
    
word = input()
print(abbreviate(word))