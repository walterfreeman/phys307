---
category: Notes
layout: default
navtitle: Using your own laptop
permalink: notes/laptop.html
use_math: true
---

<center><h1>How to use your own laptop for Physics 307</h1></center>

If you are able, I recommend that you use your own laptop (which you're more 
comfortable with) for this class. You can do this in two different ways:

### If you have a Linux laptop

You'll need to install the ```gnuplot``` package (run ```sudo apt install 
gnuplot``` on Ubuntu and Debian), then grab a copy of ```plot``` from the 
course computer. You can copy it into your system directory
by running ```sudo scp username@phy-compphysclass.syr.edu:/usr/bin/plot /usr/bin/``` and entering your admin password on your computer. (A little later
you'll need to get our animation utility as well.)

You can also download ```plot``` <a href="plot">here</a>; once you download it, copy it into your /usr/bin directory with ```sudo cp plot /usr/bin/```.

Since you will be working locally, you won't be connecting to the course computer for anything. This means that you won't have to do anything difficult to 
submit your work (since it'll be saved on your own computer), but **if you ask me for help, you'll need to attach your code (.c file)** since I otherwise
won't be able to log into the course computer and see it.

### If you have a Mac

You'll need to install the ```gnuplot``` package first. To do this, according to Prashant Mishra:

1. Go to http://brew.sh and install brew first in your laptop. 
Brew is a package manager for macOS that allows you to easily install software from the terminal.

First, you'll want to install xquartz, which will give you nice graphical output from gnuplot. To do this, type ```brew cask install xquartz```.

Then in the terminal just type ```brew install gnuplot --with-qt```. 
And you are done. In fact you can use brew in future for any package installation. Just type in the terminal ```brew install <packagename>```.

Then, grab a copy of ```plot``` from the 
course computer. You can copy it into your system directory
by running ```sudo scp username@phy-compphysclass.syr.edu:/usr/bin/plot /usr/local/bin/``` and entering your admin password on your computer. (A little later
you'll need to get our animation utility as well.)

If plot doesn't work out of the box, you'll want to install a perl interpreter, which presumably can be done with ```brew install perl```.

You can also download ```plot``` <a href="plot">here</a>; once you download it, copy it into your /usr/local/bin directory with ```sudo cp plot /usr/local/bin/```.

Since you will be working locally, you won't be connecting to the course computer for anything. This means that you won't have to do anything difficult to 
submit your work (since it'll be saved on your own computer), but **if you ask me for help, you'll need to attach your code (.c file)** since I otherwise
won't be able to log into the course computer and see it.

### If you have a Windows machine

Since Windows doesn't support most scientific 
software, you'll need to connect to the
course computer from your own laptop. See the notes file on "Connecting to
the course computer". 

If you want to be a professional scientist, you will
probably want access to a Linux or Mac computer of your own, but installing
Linux alongside Windows on your own computer is easy. We can help you do that;
come talk to one of us!
