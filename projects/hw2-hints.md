---
layout: page
title: Project 2 Hints
permalink: projects/project2hints.html
use_math: true
---

1. This may be some extra work, but it will save time in the long run by making your program as modular as possible. That way, you can change what function you want 
to integrate without needing to mess with your actual integrator, or vice versa.

2. A couple of hints here:
  * The computer incurs round-off error whenever it does floating-point math. If you add 0.1 to itself ten times, you won't get 1.00000, but something either slightly less
    or slightly greater. This means that the stopping condition for your integrator shouldn't be ```x<xmax```, but ```x<xmax-0.5```, ensuring that you won't do one more
    bin than you wanted and "drive off the right side" of the interval.
  * Remember that your bin size needs to go into the size of your interval evenly -- using bins of width 0.3 while integrating from 0 to 2 isn't going to do what you want!
  * In making your error plot, it will probably be easiest if you automate the selection of different stepsizes by using a ```for``` loop 
    to cycle through various values. Since the stepsizes you want span many orders of magnitude, you may want to modify the stepsize by a *multiplicative*, rather than
    additive, factor each time through the loop. Don't forget the previous hint, though, and don’t forget to reset your accumulator after each integral. Specifically,
    you can do something like ```for (h=1; h>1e-6; h=h*0.5)```.
  * You'll need to compute the absolute value of your error using ```fabs``` to make a log-log plot, since you can't take the logarithm of a negative. Look at the
    notes for plotting to see how to make a log-log plot.
  * When calculating the error, *don't* hard-code a number for the exact answer; instead, put in an expression for it. Your numerical integration algorithm may give you an answer
    that is precise to twelve digits, so you want lots of precision.
  * Since you'll be dealing with errors that are very small, use ```%e``` to print them in scientific notation.

3. For these problems, please feel free to compare your data to your neighbors and show them to the instructors to discuss what you're seeing. The behavior is not 
    completely obvious! 

4. It'll be useful to plot all the error plots on the same axes to better interpret them.  

5. Once you understand the peculiar behavior you'll see in the previous problems, you'll understand why using ```double``` variables makes a difference. Plot 
   the error vs. stepsize for ```double``` and ```float``` on top of each other. 

