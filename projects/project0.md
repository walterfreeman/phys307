---
layout: page
title: Project 0
category: top
permalink: projects/project0.html
use_math: true
---
<center>

<b>Due Tuesday, 3 September, at 5 PM</b><br>

</center>

<br>

---
Remember, to submit your assignment, email to <suphysics307@gmail.com>. Include all your code (`.c` files), your graph (the PDF of your plot), and your report.
This report will be short (since in the beginning we're mostly interested in developing some computer skills, rather than doing physics), but the reports will
be a larger and larger portion of your submission as the semester goes on.

If you need to copy files from the course computer to your local computer, use the `WinSCP` program installed on the lab computers. (You can also google this
and download it for your own laptops.)
---

<br>

0. Join the [Slack team for Syracuse University Physics](https://suphysics.slack.com). Say hi -- introduce yourself, be silly, and ask questions! This is one of the best places for you to get help with your code, from your classmates or from me. We are sharing this Slack team with some other classes, so make sure you join the #physics307 channel and talk there, rather than in #general

1. Use a text editor to create a file in your home directory with the following information:
    - Your name, NetID, major, and academic year
    - Do you have any programming experience? If so, in which languages? (Will you use any of them for this class?)
    - Are you interested in using your own laptop for this class? If you are, which of the following are you interested in doing:
      - Using a Mac or Linux system and running everything on your own computer
      - Using a Windows machine to connect to the course computer, like we do with the lab machines
      - Running a Linux system inside a "virtual machine" on your Windows box
      - Doing all your work off of a Linux system that lives on a USB key
      - Installing Linux on your own laptop alongside Windows
    - What physics classes have you taken/are you taking now?
    - What math classes have you taken/are you taking? (Do not list calculus classes if you are beyond the calculus sequence.)
    - Are there any physical systems you are interested in modeling in this course?
Include this file with your submission.

2. Write a program that reads in a temperature in Celsius and prints the equivalent in Fahrenheit.
Discuss any issues that arose in writing your code. (Even if there weren't any, include a note saying so.
All of your programs should be submitted with some accompanying discussion.)


3. Write a program that prints two columns of numbers, corresponding to x and $\sin x$ over some
interesting range. Save the output to a file. Then modify your program to generate values for another
function of your choice over that range. Finally, use the `plot` tool to generate a PDF of a graph 
containing both functions, and submit your graph.

4. Think of a way to test (roughly) how many arithmetic operations your computer (either the course
computer, or your own) can perform per second. Note that printing things to the screen is a far bigger
task for the computer than adding or multiplying, so don't slow the computer down by requesting lots
of output. There are hard ways to do this -- and one very simple one. Choose the simple one! (Hint: Ask it 
to do a lot of things and see how long it takes.) You should do this in *both Python and in C*. How does
the speed of Python compare to the speed of C? 

  You can measure how long a program takes to run by doing `time <command>` at the Linux command line. 

  Discuss how your code measures this and how accurate you think your measurement is.
  Can you think of any factors that might cause you to get a lower result than you might otherwise?
  You should keep this value in your head throughout the semester as an order-of-magnitude estimate
  for how long calculations will take.

  From now on, you may use *any language you like* to do all the assignments for this class. Whenever it is time
  to learn a new programming idea, we will make sure to teach you whatever you need to know in both C and Python.

5. Create a directory called `project0` in your home directory using `mkdir`, then move all the files you have 
created for this project into the new directory using `mv`. (Note that `*` is the wildcard character, so you can say
something like `mv * project0/` to move every file in the current directory.)


