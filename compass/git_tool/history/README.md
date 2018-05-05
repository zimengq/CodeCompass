# Map Git Commit History to Authors

Author: Zimeng Qiu

## Motivation

To build a mapping relationship between code snippets in Github repositories and authors.

## Method

Text mining on Github log. 

* Extract information using regular expression.
* Store code snippets and authors in a tree structure, which can be easily indexed.

## Usage

cd a folder which is a git repository, then run like this:

```
$ python your_dir_of_main.py input output_dir <--mapping|--fsearch|--search>
```

### Mapping Mode

This mode use command like this:

```
$ python your_dir_of_main.py input_code_file/folder output_dir --mapping
```

The script will generate a JSON file in output directory including author, file name and committed code snippets of every commit.

You can explore all time commit history by either scrolling screen or looking up generated JSON file.

![img](http://oscaak8qx.bkt.clouddn.com/Screen%20Shot%202017-10-07%20at%209.32.12%20PM.png)

### Code File Search Mode

Run like this:

```
$ python your_dir_of_main.py input_code_file output_dir --fsearch
```

This mode enable you to search a code snippet in git commit history of a file or whole directory and find who created this code snippet and which file is this snippet in.

Attention: The input code file of this mode is not a complete file from git repository, it actually stores a copy of code snippet that you might come across from somewhere of web but you are not sure which project or file it belongs to. At this time, you can copy this code snippet and save it as a .txt file as input code file of this mode. Then the script will automatically find the information you want.

![img](http://oscaak8qx.bkt.clouddn.com/Screen%20Shot%202017-10-07%20at%209.31.14%20PM.png)

### Code Search Mode

Run like this:

```
$ python your_dir_of_main.py "your code snippet" output_dir --search
```

This mode generally has the same function with ```--fsearch``` mode. However, unlike that mode, this one enables you avoid save code snippet as a .txt file, instead, you can copy them in terminal and run command directly.

Attention: Remember to add "" to declare your code snippet as a string.

![img](http://oscaak8qx.bkt.clouddn.com/Screen%20Shot%202017-10-07%20at%209.31.32%20PM.png)
