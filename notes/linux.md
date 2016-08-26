---
category: Notes
layout: default
navtitle: Intro to Linux
title: linux-notes
permalink: notes/linux.html
use_math: true
---

<center><h1>Notes on Linux</h1></center>


For more background information on Linux, see the Wikipedia page at <https://en.wikipedia.org/wiki/Linux>. The short version: Linux is 
the operating system that powers my cellphone (and likely yours), many of the computers on the Web, my laptop and maybe yours too,
any supercomputer anyone cares about,
the LHC, and even some <a href="https://en.wikipedia.org/wiki/Steam_Machine_(hardware_platform)">video game consoles</a>. 


### 1. Files and directories

The basic unit in Linux is the *file*, just like on Windows. These files reside in a hierarchical system of directories that work just like folders in other operating systems. However, instead of clicking on them, you refer to files by name, with directories separated by slashes. For instance, the file called `zombie-army-roster.txt` in the directory `world-domination` itself in the directory `mad-science`, which resides in my home directory `/home/wfreeman` would be referred to as `/home/wfreeman/mad-science/world-domination/zombie-army-roster.txt`. Your home directory can be abbreviated with a tilde, and all paths can be given relative to the current directory. 

So, if I was currently in the directory `/home/wfreeman/mad-science/`, then `/home/wfreeman/mad-science/world-domination/zombie-army-roster.txt` is equivalent to `world-domination/zombie-army-roster.txt`. If you are referring to files in the current directory, you need only give their names. 


**Important exception:** The exception is when you want to run a program: to run the program `reanimate` in the current directory, you must write `./reanimate.` (This is for security reasons.) 

File names in Linux, like everything else, are case sensitive. It's generally a good idea to use lowercase for everything unless you have a specific reason not to.

### 2. Some basic commands
To ask Linux to do something, you use the same syntax as you would use in English for imperative sentences (commands). For instance, if I wanted you to dance, I would say "Dance!". If I wanted to be more specific about what I wanted you to dance, I'd say "Dance the funky chicken!" I could give you details about how I wanted you to do this: "Dance the funky chicken quickly!" This can be generalized as the following:

```
[verb] [object] [modifiers]
```

Linux works the same general way: a Linux command tends to have the form

```
[command] [target] [modifiers]
```

In short, you simply type the name of the program you want to run, followed by what you want to run it on. For instance, to run Firefox, just type `firefox`. (Try it!) If you want a program to run with a particular target, simply say so. For instance, if I want Firefox to tell me what's going on in the world, I could type 

```firefox news.bbc.co.uk```. 

Try this! Note that it's running a bit slowly: this is because the Firefox window, and everything in it, is actually being run elsewhere on campus, and the graphics are being streamed to you. 

If I want to run the text editor `nano` to edit the file `helloworld.c`, I write `nano helloworld.c`. (You will do this later today!)


#### 2.1 `cat` and `less`: display a file
This simply dumps the contents of a file to the screen. For instance, `cat homework1.c` will display the file `homework1.c`. Note that displaying non-text files will give you gibberish. If the file is too big for the screen, use `less` instead; this is just like `cat`, but pauses after each screenful of output.

#### 2.2 `ls`: list files
`ls` shows a list of files in the current directory. `ls -lh` shows more information about them. `ls -lt` sorts
files by how new they are. (You can combine these options; try `ls -lth`.)


#### 2.3 `cd`: change directory
This changes your current working directory. Type `cd ..` to go up a level, or `cd` (with no argument) to go back to your home directory.

#### 2.4 `mkdir`: create a directory
Does what it says on the tin.

#### 2.5 `rm`: remove files
Removes a list of files. Warning: there is no “trash bin” on Unix like there is on other operating systems. 

#### 2.6 `cp`: copy files
Do `cp file-one file-two` to make a copy of `file-one` called `file-two`. If `file-two` is a directory, a copy
with the same name will be created in the directory.

#### 2.7 `mv`: move files
Works just like `cp`, but moves the file instead.

#### 2.8 Text editors

`xemacs`: Graphical text editor with lots of features (somewhat beginner-friendly, powerful). 

`vim` and its graphical cousin `gvim`: Another option if you dont like emacs. It is less beginner-friendly but quite powerful. (I am typing this document in `vim` right now.) This is what I prefer, and you will see me use it.

`gedit` and `kate`: These are more "modern" graphical editors which may run slower over a remote graphics connection from home, but provide an attractive environment for you to code in similar to the things you're used to in Windows.

As with all programs, you can open a specific file by doing e.g. `gedit helloworld.c`.

#### 2.9 `gcc`, the C compiler

You need to use `gcc`, yet another Unix program, to turn the source code you write into machine code that the computer can run. To use it, do 

```
gcc program.c -lm -o program
```

where `program.c` is the name of the file with your source code, and you want the output program (the one that you run) to be called `program`. 

**Do not make the mistake** of doing `-o program.c` this will overwrite your source code with the output program! 

Adding `-lm` tells the compiler to link your program with the math library, which contains useful functions that we will use frequently.

### 3. Input and output redirection
This is the key to the versatility of the Linux command-line interface. Normally, when you run a Linux program, it takes input from the keyboard and prints output to the screen. But you can change this behavior with the `<`, `>`, and `|` operators.

The input redirection operator < tells a program to accept input from a file rather than from the keyboard. For instance, suppose I have a program called `wharrgarbl` that reads in input from the keyboard and does a calculation. 
If I'm getting tired of typing in all the input every time, I can put it in a text file called `input`,
and do `wharrgarbl < input`.

The output redirection operator > does the same thing, but redirects the *output* of a program. This can be combined with input redirection. Suppose I have a program called `translate` that accepts typed text in one language and prints it in another. I can then use this program to translate a file by doing, for instance, 

```translate < sindarin-text > westron-text```.

The pipe character `|` takes the output from one program and uses it as the input from another. Suppose I want to read in some text, translate it, and then display the output on the screen one page at a time using `less`. I can do this by doing `translate < sindarin-text | less`. The output of `translate` will then be sent to the standard Unix program `less`, which will display it one screen at a time.

### 4. Graphing using `graph`
There is a simple program called `graph` installed on the course computer that will make graphs for you. To use it, create a data file consisting of coordinate pairs. (Remember, you can do this using `printf` along with output redirection.) Then just type `graph [filename]`. If you have multiple files you’d like to graph, just list multiple filenames.

By default, the generated graph goes to your screen. If you’d like to save it to a PDF file instead, do

```
graph [filename1] [filename2] ... -o mygraph.pdf.
```

### 5. More Unix controls

#### 5.1 Tab completion (this will save you time!)

Even if you use long filenames, you dont have to type them out. When typing out a file or directory name at the command prompt, you can type the first few letters (enough to unambiguously identify the name) and hit Tab to have the system fill in the rest. If there are several files that “match”, hitting Tab will fill in all the characters that the names share. Try it!

#### 5.2 Task control
Sometimes you want to run one program and leave it running in the background while you do other stuff at the command prompt. This is especially useful for graphical programs (like `xemacs`), since you can edit your program in the graphical window while testing it in the shell. To do this, add an ampersand after the command: 

```xemacs program.c &```


If you forget to do this, you can suspend a running program with Ctrl-Z, then put it in the background by typing bg. This is equivalent to running it in the background in the first place. If you want to stop a program that's running (perhaps you've written a program that's stuck), use Control-C.
