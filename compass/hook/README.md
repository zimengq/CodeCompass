# Use abstract syntax tree for code plagiarism detection
Author: king-jojo
e-mail: kimwhu@outlook.com

Clang is a useful tool to show complete information of the syntax tree of a program. This project intends to apply Clang to generating syntax tree of programs. By comparing different syntax trees, we can find the same nodes and parts of two programs so that we can detect which program is suspected of plagiarising. The same parts two syntax trees share will be distinguished by red nodes shown in graph. However, this project has just started for a short time and some functions haven't realized yet. 

## Usage
Environment:Ubuntu 16.04</br>
First install Clang and Graphviz with: 

    $ sudo apt-get install clang
    $ sudo pip install graphviz

## Write into json
This project can convert syntax tree into json format

    $ python main.py --tojson c_file_dir True/False

![Image text](https://github.com/king-jojo/Screenshots/blob/master/codetracker/ast2json.png)

## Generate AST graph with Graphviz

    $ python main.py --view c_file_dir True/False

![Image text](https://github.com/king-jojo/Screenshots/blob/master/codetracker/ast3.png)
## Compare two ASTs

    $ python main.py --compare c_file_dir1 c_file_dir2 True/False

The first AST is shown in pdf format:
![Image text](https://github.com/king-jojo/Screenshots/blob/master/codetracker/ast1.png)

The second AST is also shown in pdf format as follows:
![Image text](https://github.com/king-jojo/Screenshots/blob/master/codetracker/ast2.png)

The same part of two trees is labeled in red.
## Combine two ASTs into one

    $ python main.py --combine c_file_dir1 c_file_dir2 True/False

![Image text](https://github.com/king-jojo/Screenshots/blob/master/codetracker/Combined.png)
(True or False is the choice that whether you need to remove the header files included in the C/C++ files. As the graph generated from some header files like <stdio.h> is too large for evince, this kind of choice is necessary)

## In future 
There are so many things to do to complete this project in a perfect version. 
### Extract the subtrees two programs share
This function can help programmer understand some program fast. By extracting the same subtree, we can know the same function of two programs. 
### Establish a code dictionary
We will establish a dictionary, which contains the syntax tree of many classical programs. Just compare the syntax tree of the program and the dictionary, we can find some classical algorithm used in the program so that it is easy to understand it. Further more, we can let the computer to program just by importing the function you want and the computer will combine the syntax trees of classical algorithm to generate the final code of the program with the help of AI or other things. 
### Plagiarism detection
There are several strategies for us to detect plagiarism by comparing syntax trees
#### Syntax tree transform
We will apply some code plagiarism strategies to transform the syntax tree into standard shape. For example, normalize all the syntax trees of if...else... into switch... and all the while circulation into for circulation. 
#### Map into Hash table
We transform syntax tree into arraylist and assign value to the specific node and finally mapping into the Hash table
#### Top Down Unordered Maximum Common Subtree Isomorphism(TDUMCSI)
Ligaarden(2007) process an AST based approach to detect plagiarism in JAVA source code. AST is generated for each of the source code files and a preorder traversal is done through the ASTs to be compared as done to generate node sequences. TDUMCSI algorithm along with sequence matching algorithms - NW algorithm and LCS algorithm, are then used to compare the node sequences and find matches. 
