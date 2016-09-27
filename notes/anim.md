---
layout: default
category: Notes
navtitle: Notes on anim 
title: Notes on animation 
permalink: notes/anim.html
use_math: true
---

## Notes on `anim`, a simple animation utility

As we're going to now focus on simulating things that move, it's handy to be able to see animations of what they look like. You can do this with a little program
`anim` that I wrote. This program reads in lines of text (using `scanf`), interprets them as instructions to draw on the screen, and then does so.

You can try it by running `anim` on the course computer, and then typing things in. Here are some simple commands; note that monospace Roman letters `like this` are
meant to be typed literally, while Italic letters *like this* are to be replaced with numerical values.

* `c` *x* *y* *r* -- draw a circle at location *x,y* with radius *r*
* `l` *x1 y1 x2 y2* -- draw a line from *x1,y1* to *x2,y2*
* `C` *r* *g* *b* -- change color to the RGB triplet given, where each value goes from 0 to 1
* `F` -- flush the frame

Try it: for instance, run `anim`, then type the following:

{% highlight C %}
c 0 0 1
C 1 0 0
l -1 -1 0.5 0.8
F
{% endhighlight %}

Note that the `anim` window is blank until the first `F` command, which actually transfers the graphics
commands you've given it to the screen.

These commands, in order, draw a circle with radius 1 at the origin; switch the color to red; draw a line from -1,-1 to 0.5,0.8; and finally send the frame to the display.

So, how do you use this with your code?

The trick lies in the Linux "pipe" operator. You are already familiar with the output redirection operator 
$\tt \rangle$, which sends the output of one program to a text file. For instance, you might have run

{% highlight C %}
./trapezoid_rule > trap_err.txt
{% endhighlight %}

for last week's homework.

However, what you want to do here is send the output of one program (yours) to another program (`anim`). This is done with the | operator, for instance

{% highlight C %}
./simulate_pendulum | anim
{% endhighlight %}

If you then print out `anim` drawing commands using your program, they will be redirected to `anim` and you'll see the animation on screen.

Try running the following program. (If you'd like to paste it into your editor and gedit isn't letting you cut and paste on the Windows boxes, try using the editors `nano` or `vim` instead of `gedit`.)

{% highlight C %}
#include <stdio.h>
#include <math.h>

int main(void)
{
  double theta,x,y;
  for (theta=0;1;theta+=0.01)
  {
    x=cos(theta);
    y=sin(theta);
    printf("l 0.0 0.0 %e %e\n,x,y);  // draw a line
    printf("c %e %e 0.05\n",x,y); // draw a circle
    printf("F\n"); // flush frame
  }
}
{% endhighlight %}

Run this program first by piping its output through `less` to see its output one screen at a time, *i.e.* `./animtest | less`. Note what it is doing, and predict what the animation will look like.

Then, run it using `anim`: `./animtest | anim`. What does it do? Is this what you expected? This is very similar to what you will do to animate your pendulum, except in this case your angle will be the result 
of solving a differential equation.

Note that even though your program can calculate very fast, `anim` can only draw 60 frames per second (on most monitors). This means that you may not want to draw every frame to the
screen. You can avoid this by only printing one out of every $N$ frames to the screen, as follows:

{% highlight C linenos %}
#include <stdio.h>
#include <math.h>

int main(void)
{
    double theta,x,y;
    int frame_skip = 100,frame=0;
    for (theta=0;1;theta+=0.0001)
      {
        
        x=cos(theta);
        y=sin(theta);
        if (frame % frame_skip == 0) // if the current frame number is divisible by frame_skip, draw a frame
        {
          printf("l 0.0 0.0 %e %e\n,x,y);  // draw a line
          printf("c %e %e 0.05\n",x,y); // draw a circle
          printf("F\n"); // flush frame
        }

        frame++;
      }
}
{% endhighlight %}

In the preceding code, try changing the `frame_skip` value and seeing the effect. Altering the skip value in your future simulations will allow you to visualize results at a useful speed, while allowing the computer
to use more than one Euler or RK2 timestep per frame for greater precision.

`Anim` also can be controlled from within the window. Here are some commands that can be used from within `anim`, while it is running. 

* -/=: zoom in and out (also: mousewheel)
* WASD: move around (also: click and drag)
* shift-A: turn on/off axis display
* shift-Q: quit
* shift-H: show a help screen

There are many more `anim` commands, including many which draw in three dimensions (more on those when we start doing things in 3D!) Here are some of the others that will be useful to you:

* `t` and `T`: these commands can be used to draw text on the animation. They are *two-line* commands. The syntax is

<br>
`t` *x y*<br>
*(displayed text)*<br>

So, in short, you first print "t" followed by the x,y coordinates of where you want the text to appear, and then on the *next line*, print the text you'd like to display. For instance, to print "The cake is a lie" at coordinates (0.6, 0.8), you would print

{% highlight C %}
t 0.6 0.8
The cake is a lie
{% endhighlight %}

What's the difference between "t" and "T"? Using "t" prints text at particular *simulation coordinates*, so scrolling around will move your text around the screen. This is particularly useful for labeling points on figures. Using "T" (capital) fixes your text to a particular place in the window
(whose coordinates are (-1,-1) to (1,1); this is useful for annotating a simulation with the current time, energy, etc.)

### Output bypass (read this!)

`Anim`, used as detailed above, hijacks your program's output. When you run `./myprogram | anim`, you are directing all of the `printf` statements (sending text to "standard output") to `anim` instead of the console. This makes certain things inconvenient:

* you can't use debugging `printf`s
* you can't redirect output intended for `graph` to a file

How do you get around this? The answer is with the `!` command in `anim`. **This is important:** if `anim` sees any line beginning with a `!`, it will chop the `!` off and print it without change to the screen.

Try out this code:

{% highlight C linenos %}
#include <stdio.h>
#include <math.h>

int main(void)
{
  double theta,x,y;
  int frame_skip = 100,frame=0,circles=0;
  for (circles=0; circles < 20; circles++)
  {
    for (theta=0;theta<2*M_PI;theta+=0.0001)
    {

      x=cos(theta);
      y=sin(theta);
      if (frame % frame_skip == 0) // if the current frame number is divisible by frame_skip, draw a frame
      {
	printf("l 0.0 0.0 %e %e\n,x,y);  // draw a line
	  printf("c %e %e 0.05\n",x*1.05,y*1.05); // draw a circle
	printf("t %e %e\ntheta = %e\n",x*1.5,y*1.5,theta); // notice that this prints two lines
	printf("F\n"); // flush frame
      }

      frame++;
    }
    printf("!Completed %d cycles\n",circles);
  }
}
{% endhighlight %}

