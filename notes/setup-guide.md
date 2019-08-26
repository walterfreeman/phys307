---
category: Notes
layout: default
navtitle: Using your own laptop
permalink: notes/laptop.html
use_math: true
---

<center><h1>How to use your own laptop for Physics 307</h1></center>

If you are able, I recommend that you use your own laptop (which you're more 
comfortable with) for this class. (Then you won't have to go to LSB to do your work!)

You can do this in several different ways:

### If you have a Linux laptop

You'll need to install the ```gnuplot``` package (run ```sudo apt install 
gnuplot``` on Ubuntu and Debian), then grab a copy of ```plot``` from the 
course computer. You can copy it into your system directory
by running ```sudo scp username@phy-compphysclass.syr.edu:/usr/local/bin/plot /usr/local/bin/``` and entering your admin password on your computer. (A little later
you'll need to get our animation utility as well.)

You can also download ```plot``` <a href="plot">here</a>; once you download it, copy it into your /usr/local/bin directory with ```sudo cp plot /usr/local/bin/```.

Since you will be working locally, you won't be connecting to the course computer for anything. This means that you won't have to do anything difficult to 
submit your work (since it'll be saved on your own computer).

### If you have a Mac

You'll need to install the ```gnuplot``` package first. To do this:

1. Go to http://brew.sh and install brew first in your laptop. 
Brew is a package manager for macOS that allows you to easily install software from the terminal.

First, you'll want to install xquartz, which will give you nice graphical output from gnuplot. To do this, type ```brew cask install xquartz```.

Then in the terminal just type ```brew install gnuplot```. 
And you are done. In fact you can use brew in future for any package installation. Just type in the terminal ```brew install <packagename>```.

Then, grab a copy of ```plot``` from the 
course computer. You can copy it into your system directory
by running ```sudo scp username@phy-compphysclass.syr.edu:/usr/bin/plot /usr/local/bin/``` and entering first your admin password on your computer,
then your login password on the course computer. (A little later
you'll need to get our animation utility as well.)

If plot doesn't work out of the box, you'll want to install a perl interpreter, which presumably can be done with ```brew install perl```.

You can also download ```plot``` <a href="plot">here</a>; once you download it, copy it into your /usr/local/bin directory with ```sudo cp plot /usr/local/bin/```.

Since you will be working locally, you won't be connecting to the course computer for anything. This means that you won't have to do anything difficult to 
submit your work (since it'll be saved on your own computer).

### If you have a Windows machine

Most scientific software doesn't run on Windows, and I don't know of any scientists who use Windows 
for serious computational or data-analysis work. However, you can still use a laptop with Windows for this
class. There are several options:

1. Use your Windows laptop to connect to `phy-compphysclass.syr.edu` by downloading PuTTY and Xming, and do the same things
that you do to connect from the computers in the lab. You will be doing your work on the course computer, and only using
your laptop for remote access. This means that you will need a fast, stable internet connection in order to do any work.

2. Install Linux alongside Windows on your laptop. This is not as hard or scary as you might think. A ``dual-boot'' machine
like this will ask you "Linux or Windows?" every time you turn it on, and will boot the operating system you choose. You can
easily access your Windows files from Linux, but not the other way around (without some shenanigans).

3. Use a USB key that we will give you with a Linux system on it. Whenever you want to boot your machine into Linux,
you just insert the USB key, then reboot your machine and tell it to boot off of the USB key rather than your hard 
drive. Nothing on your hard drive will be changed, and you can save all your work onto the USB key.

4. Use a "virtual machine". Computers these days are powerful enough to simulate *additional* computers inside of them.
So your machine can run Windows, but simulate a second computer running Linux "inside" of it. We can give you a USB key
that has everything you need to set this up. This is a nice, self-contained solution, since you just click the "run virtual
machine" icon on your Windows desktop and a new window will appear, with an entire Linux system running inside of it.

5. (Extra credit opportunity!) Microsoft has added limited support for the Linux command-line and 
programming environment on Windows 10. I don't have a Windows
10 machine; the old Windows desktop I keep around to play games on runs Windows 8, so I don't know much about this. But one 
student has gotten the stuff for this class running on his Windows box. So you can do the whole class using this environment.
I won't be able to give you that much support on this, but if you can get it to work (including our animation software)
and teach me and other students
how you did it, then you'll get extra credit: we'll drop your lowest project grade and replace it with a 10/10.
