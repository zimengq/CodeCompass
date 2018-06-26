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
* **Ubuntu 16.04** and **Python3** **32bit** and **8GB RAM**

* Install Packages
   
    ```
    $ sudo apt install git
    $ cd ~
    $ git clone https://github.com/ch-chiu/Code-Compass.git
    $ cd ~/Code-Compass/compass/setup
    $ python install.py
    ```
### 2. Generate Tmp Files
* change the path in ~/Code-Compass/compass/setup/datapath.py

(You can only replace user0 with your own username or replace the whole path with the path you want to store the files.

You only need to change the path at this place.)

* setup compass3.0
    
    ```
    $ cd ~/Code-Compass/compass/setup
    $ python setup.py
    ```

### 3. Run Service
* run flask app

    ```
    $ cd Code-Compass/compass/webApp
    $ sudo python app.py
    ```

* access IP with Chrome
