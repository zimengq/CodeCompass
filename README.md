# Code Compass

A knowledge-based explorable search engine providing all-round information for software developement.

- build connetions among domain-specific information, like code structure, history and PR
- provide explorable UI to get the information for software development

## Features
- search C/C++ components (struct/function/class) by keywords
- present structural information, like associations among code blocks   
- present developer information of lines of code
- present PR information of lines of code

## Design
- explorable UI with high-level interactivity and density of information
    - given a keyword, interactively presenting connectivity of components which declaration contains the keyword
    - interactively presenting code blocks of the component
    - interactively presenting developers for the code block
    - interactively presenting PR infos for the code block
    
- scalable backend associating code structure, history and PR by linking them with a line of code
    - given a set of C/C++ repos (code base), establishing index of these repos according to their component (struct/function/class) declarations
    - associating between a line of code and components (struct/function/class) via code graph
    - associating between a line of code and developers via analyzing commit history
    - associating between a line of code and PR info via bugzilla(vmware) or github(open source)
    
## Prospects
- getting reusable code blocks from the code base with keywords
- inferring quality of the code block by evaluating its developers
- recommending developers who are suitable for writing a component from zero

## How it works
### 1. Prepare Environment
* Ubuntu 16.04 and Python3 32bit and 8GB RAM

* map: code - developer

    ```
    $ sudo apt-get install clang
    $ sudo apt-get install python-pip python-dev build-essential
    $ sudo pip install --upgrade pip
    $ sudo pip install --upgrade virtualenv
    $ sudo pip install graphviz
    ```

* map: code - structure
    
    ```
    $ sudo pip install gensim
    $ sudo pip install nltk
    ```

* web service

    ```
    $ sudo pip install flask
    ```

* get code

    ```
    $ sudo apt install git
    $ cd ~
    $ git clone https://github.com/ch-chiu/Code-Compass.git
    ```

### 2. Generate Tmp Files
* create a folder called "testDataForCompass" in ~/

* git clone c/c++ repos in the folder, for example:
    
    ```
    $ cd ~/testDataForCompass
    $ git clone https://github.com/openvswitch/ovs.git
    $ git clone https://github.com/ceph/ceph.git
    $ git clone https://github.com/google/protobuf.git
    ```

* generate tmp files into the folder

** AST.json, uAST.json and file_path.json

        $ cd Code-Compass/compass/hook
        $ python main.py --tojson testDataForCompass True

** line_dict_new.json
    
        $ cd Code-Compass/compass/hook
        $ python line_info.py
    
** nodes.json and edges.json

        $ cd Code-Compass/compass
        modify "/home/user0" in createSemanticGraph.py according to home path 
        $ python createSemanticGraph.py

** pull_request.json
    
        $ cd Code-Compass/compass/git_tool/pull_request
        $ python get_pull_request.py

** code2pr.json

        $ cd Code-Compass/compass/git_tool/pull_request
        $ python get_pr_code.py

* modify the path in the source code

** typically, you should adjust the ~/ since it is various in different PC

### 3. Run Service
* run flask app

    ```
    $ cd Code-Compass/compass/webApp
    modify "/home/user0" in app.py according to home path 
    $ sudo python app.py
    ```

* access IP with Chrome
