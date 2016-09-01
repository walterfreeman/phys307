---
layout: default
category: Notes
navtitle: Connecting
title: Connecting to the course computer
permalink: notes/connect.html
use_math: true
---

<center><h1>Connecting to the course computer</h1></center>

The Room 115 lab has only Windows computers, but if you want to get real work done in the sciences,
you need a Unix-like operating system: Linux or a BSD-based operating system like Mac OSX.
In this class, we have provided you a Linux system named
phy-compphysclass.syr.edu, located somewhere in an ITS data center. Here are instructions for connecting
to it: 

### Connecting to the computer

The standard way of controlling a Linux computer is by a text interface: you send text to the computer,
and text comes back, along with any graphical windows you request.

The standard way of connecting to remote Linux machines is via the Secure Shell protocol, abbreviated as *ssh*.
This protocol creates an encrypted channel that allows you to communicate securely with another computer. 

Once you establish a ssh session to another computer, you can send and receive text and graphics just as though you were physically
at the machine. To connect from the machines in room 115, run PuTTY from your SU-Apps folder, type in
<kbd>phy-compphysclass.syr.edu</kbd>, and click connect.

Linux uses a system called X to handle graphics. X is different than the graphics system in Windows in that the computer
creating and the computer displaying the graphics can be different. The computer displaying the graphics
needs a program running called an “X server” that actually creates the graphics on screen. The X server for
Windows is called Xming; you will need to run it before you launch PuTTY if you want graphics. (It is way down at the bottom of the Applications menu in the lab.)

Finally, you will need to tell PuTTY that it should forward graphical output over the connection. To do
this, you need to check the “Enable X Forwarding” box in the “X11” section of the options before you connect.

#### Connecting from elsewhere

**From Windows:**

The process here is the same as on the lab machines. You only need to download Xming, the Xming Fonts
package, and PuTTY. All three are open source.

Go to <http://www.straightrunning.com/XmingNotes/> and scroll down to “Public Domain Releases”.
Download the *xming* and *xming-fonts* packages and install them.

PuTTY lives at <http://www.chiark.greenend.org.uk/~sgtatham/putty/download.html>.

**From Mac OSX or Linux:**

OSX is a Unix-based operating system; I believe it comes with a ssh client, and it uses its own X server for
its own graphics.

To connect, just get a terminal window and type

```
ssh -X phy-compphysclass.syr.edu -l <username>
```

If you are on a slow connection, do instead:

```
ssh -XC phy-compphysclass.syr.edu -l <username>
```

This may speed up graphics somewhat; the -C option tells the computers to compress graphics, which will use extra computing power to save a little bandwidth.

**Note for Mac users:** In order to get the `-X` option to work, giving you graphics output, you will need to download something called XQuartz for Mac. I don't know the details, since I don't have a Mac; investigate this, and let me know what you needed to do! 
