---
category: Notes
layout: default
navtitle: Using functions 
title: function-notes 
permalink: notes/function.html
use_math: true
---

<center><h1>Notes on functions</h1></center>

C programs are broken into functions, each of which does one task. So far you have been writing programs
that just use one function: `main()`. Every C program must have a `main()` function, since it is here that the
program begins running.

Typically, though, programs will involve tasks that are repeated many times, and it is useful to separate
out the code for those repetitive tasks without having to write every step each time. For instance, the easiest
way to compute $\sin(x)$ is with a Taylor series. Instead of writing a for loop to sum a Taylor series every
time you want to compute the sine of an angle, it’s easier to just write a function that does this. Then you
can test it, debug it, make sure it works, and then forget about what’s inside and just use it.
You’ve already been using some of these functions: `exp`, `printf`, `scanf`, and so forth. However, you will
need to write your own to make your life easier.

Consider this program that generates a `graph` data file to plot the value of $\sin(x)$ and its derivative:

{% highlight C linenos %}
#include <stdio.h>
#include <math.h>

int main(void)
{
  float x,y,dydx;
  float epsilon=1e-4; // our small value for doing derivatives

  // first plot sin(x)
  for (x=0;x<10;x=x+0.01)
  {
    y=sin(x);
    printf("%e %e\n",x,y);
  }
  printf("color red\n");
  
  for (x=0;x<10;x=x+0.01)
  {
    dydx=(sin(x+epsilon)-sin(x-epsilon))/(2*epsilon);
    printf("%e %e\n",x,dydx);
  }
}
{% endhighlight %}

If we wanted to change the function being studied here, we need to change it in three places, and to do so we need to
change things in three places. This is more work, and it adds a risk of breaking things.

We have a sub-task here that we could pull out and put into a function, as follows:

{% highlight C linenos %}
#include <stdio.h>
#include <math.h>
 
float f(float value)
{
  float y;
  y=sin(value);  
  return y;  
}

int main(void)
{
  float x,y,dydx;
  float epsilon=1e-4; // our small value for doing derivatives

  for (x=0;x<10;x=x+0.01)
  {
    y=f(x);
    printf("%e %e\n",x,y);
  }
  printf("color red\n");

  for (x=0;x<10;x=x+0.01)
  {
    dydx=(f(x+epsilon)-f(x-epsilon))/(2*epsilon);
    printf("%e %e\n",x,dydx);
  }
}
{% endhighlight %}

Now we can change the function being studied without touching `main()`, or change the way the derivative is calculated without touching the function.

This makes it easier to work with your code, and reduces the risk of introducing bugs when you fiddle with things.

So, how does this work?

As soon as the program gets to `f(x)`, it jumps out of the `main` function and into the `f` function.
When it does, the value of `x` is "passed” to `f()`, and is stored in the variable `value`. The function header
`float f(float value)` means ”This is a function called `f`; its return type is `float`, and it has one variable
passed to it (called an argument) of type `float` that will be stored in `value`.”

The `f()` function does its thing, and then will return a value. Back in main, the expression
`f(x)` will be replaced by whatever the return value was – just like how you’re used to mathematical
functions working.

A few points to keep in mind:

1. A function can have more than one argument. If it does, they are passed in in the order that they are
entered. For instance, the function declaration `int blah(double foo, int bar)` declares a function
that expects a `double` and an `int` as arguments, given in that order, and whose return value is an `int`.

2. Variables within each function are separate. The only ways (that you know of so far) for functions to
share variables is by passing arguments to functions and return values from functions. In the program
above, `main()` has a variable called `y`, and so does `f()`. They are completely independent, and in
fact `main()` has no way of even knowing what variables are used within the functions it calls.

3. A function must be declared before it is used. (This is why main() is at the bottom of my program
above.) An alternative to this (perhaps two functions that can call each other!) is to use a prototype
– a dummy line that tells C the properties of a function before it is actually written. This looks the
same as the normal function declaration, but it has a semicolon after it. So, for instance, this is legal

{% highlight C linenos %}
float f(float value); // prototype

int main(void)
{
  float x,y,dydx;
  float epsilon=1e-4; // our small value for doing derivatives

  for (x=0;x<10;x=x+0.01)
  {
    y=f(x);
    printf("%e %e\n",x,y);
  }
  printf("color red\n");

  for (x=0;x<10;x=x+0.01)
  {
    dydx=(f(x+epsilon)-f(x-epsilon))/(2*epsilon);
    printf("%e %e\n",x,dydx);
  }
}

float f(float value)
{
  float y;
  y=sin(value);
  return y;     
}
{% endhighlight %}

