---
category: Notes
layout: default
navtitle: Notes on directories
title: organization-notes
permalink: notes/directories.html
use_math: true
---

<center><h1>Notes on organizing your files</h1></center>

You should take some time to organize your files into directories. I'd like you to create directories named "project1" or "hw1", etc., for your various projects, and take five minutes to sort your files into them.

You can do this in one of two ways. The *graphical approach* is probably going to be more familiar to those of you with experience on Mac or Windows computers. Run `nautilus` to create a graphical file manager. Note that this a graphical program running remotely, and might 
run a bit slowly if your internet connection is not solid. You can use this just as you use the Windows file manager.

Alternatively, you can use the Linux command line to do this. The first concept to understand is the Linux directory naming structure.

On a Linux system, files are stored in a *hierarchical directory tree*. The base of the tree is the *root directory*, named `/`. Inside `/` are many system directories with names like `/bin/`, `/boot/`, `/usr/`, `/etc/`, and so on. The one we care about is `/home/`, which in turn contains a directory for each user on the system. For instance, my home directory is `/home/wafreema/`. You can always abbreviate your home directory as `~`. Two other shorthands are `.` for the current directory and `..` for the parent of the current directory.

When referring to a directory, you can either specify an *absolute pathname*, starting with a `/` or `~`, or a *relative pathname*, which is relative to the current directory. So, for instance, when you type `./integrate_midpoint`, you are asking the computer to run the program `integrate_midpoint` in the current directory. 


The commands you will need are:

* `mkdir` *foo* -- make a directory called *foo* inside the current directory.
* `cd` *foo* -- change to directory *foo* if one exists in the current directory. You may stack multiple directories: for instance, `cd hw1/graphs` will change to the directory `graphs` inside the directory `hw1`. Entering `cd ../hw2` will change to the directory `hw2` contained within the directory one level up from the current one. Entering something like `cd ~/hw4` will change into the directory `hw4` inside your home directory. Finally, `cd` by itself will go back to your home directory.
* `mv` *files* *destination* will move a bunch of files.
* `cp` *files* *destination* will copy a bunch of files.
* `rm`  *files* will delete a bunch of files.

How do you specify multiple files at once? You may use the `*` and `?` characters, called "wildcards" or "globs". `*` matches any number of characters. So, for instance, writing `mv hw3*.c project3` will move all files beginning with `hw3` and ending in `.c` to the directory `project3`. You may also use this to list only certain files, by typing `ls *.c` or `ls project?/*.c`.

**Prashant has asked that you compress your projects into a single archive before turning them in**. To do this, type `zip archive.zip [files] `. For instance, if you have all your stuff for homework 3 in a directory called `project3`, you can change to that directory and type `zip project3.zip *` to add all those files to the archive `project3.zip` and send it to Prashant. Remember to add a `README` file telling him what all the files are for.
