---
category: Notes
layout: default
navtitle: C++ tricks
permalink: notes/cplusplus.html
use_math: true
---

<center><h1>A few C++ tricks</h1></center>

So far, all the things we have learned have been part of the vanilla C language. C++ is an extension to C that adds some *object-oriented programming* features;
this is a collection of programming methods that are mostly useful to allow large groups of programmers to collaborate on huge projects (say, **Skyrim**). 

In our class we are not going to be using object-oriented programming. However, there are some C++ tricks that can make your lives much simpler. To use these, you'll need
to compile your code with `g++` rather than `gcc`.


Trick #1: initializing variables inside a for loop

{% highlight C linenos %}
for (int i=0; i<100; i++)
  printf("%d squared is %d.\n",i,i*i);
{% endhighlight %}


Trick #2: ``pass-by-reference'' to functions

You know how to use a function that takes a bunch of inputs and returns an output:

{% highlight C linenos %}
double hypotenuse(double a, double b)
{
  return sqrt(a*a + b*b);
}
{% endhighlight %}

Sometimes, though, you want to write a function that *changes* its inputs, or that returns more than one thing. You can't do this with `return`, since this only lets you send one value back.

Ordinary parameters are *passed by value*. This means that C takes the number and creates new variables (in the function above, `a` and `b`) that hold those numbers inside the function.

But in C++ you can also pass variables themselves by putting an ampersand before the variable name. When you do this, there is no second copy created; this means that if you change the variable
inside the function, it "stays changed". Consider the following function:


{% highlight C linenos %}
void leapfrog(double &theta, double &omega, double dt)
{
  theta = theta + omega * dt/2;
  omega = omega - sin(theta) * dt; // take g and L to be 1
  theta = theta + omega * dt/2;
}
{% endhighlight %}

The utility of something like this should be obvious.








  
