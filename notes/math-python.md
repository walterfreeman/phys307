---
layout: default
category: Notes
navtitle: Basic Math in Python
permalink: notes/math-python.html
use_math: true
---

# Notes on mathematics in Python
Most math functions in Python are fairly straightforward. The operators for addition, subtraction,
multiplication, and division are `+ - * /`. Python knows about order of operations; parentheses
work like you would expect. Note that square and curly brackets mean something different in
Python; if you have nested parentheses in a mathematical formula, just use ordinary parentheses
for them all. The exponentiation operator is `**`, so `x**3` means $x^3$.
The modulus operator is `%`; writing `a % b` returns the remainder when `a` is
divided by `b`. 
You will need this to check for divisibility when you are finding
prime numbers. The code

{% highlight python %}
if a % b == 0: # if the remainder of a/b is zero, i.e. its divisible
  do something
else:
  do something else
{% endhighlight %}

will do something if `a` is divisible by `b`, and will do something else otherwise. (This is
an example of *pseudocode*: something that looks Python-like, and illustrates some feature of
programming or algorithms, but isn't actually real code.


To use more sophisticated mathematics, you will need to include the math library with

{% highlight python %}
from numpy import *
{% endhighlight %}

or 

{% highlight python %}
from math import *
{% endhighlight %}

at the top of your program. 

The functions in the math library are pretty straightforward.

* `sin(x)`, `cos(x)`, `tan(x)` do what you'd expect (angles in radians!)
* `arcsin(x)`, `arccos(x)`, `arctan(x)` do what you'd expect too
* `sqrt(x)` returns $\sqrt{x}$
* `abs(i)` returns the absolute value of the integer `i`
* `fabs(x)` returns the absolute value of the floating-point number `x`
* `exp(x)` returns $e^x$
* `hypot(x,y)` returns $\sqrt{x^2 + y^2}$ (useful for geometry!)

What about doing more complicated math in Python? The rule of thumb is simple: **just make the
computer do what you learned to do in math class.** 

This will always get you something that
is at least okay. This is because in many of the techniques in math class, you are taking
the limit as something goes to zero or to infinity. Since computers can't do limits, we have
to plug in small numbers instead. 

Think about integrals for a minute: you are supposed to
add up an infinite number of infinitely small things. This will take the computer an infinite
amount of time, and then you won't get your homework in before the deadline. 

So instead we add up a finite number of small things (see the wikipedia
page on “Riemann sum” if youve forgotten how this works), or I will illustrate in class.

Since this is not quite what the mathematics tells us to do, there will be a small error. That
error will obviously be bigger the further you are away from the mathematically-precise thing
to do (i.e. the larger your Riemann sum boxes are). If you compute $\int_0^{10}\, \sin x\, dx$ with five Riemann-sum boxes,
then you will have more error than if you use five thousand or even five million.

You'll notice that in math-land, where the Riemann sum boxes are infinitely skinny, it doesn't matter that they have flat tops and fail to reproduce the shape of a 
function that is curvy. However, when working numerically with finite-width boxes, we have to worry about such things. We will study this in the next two weeks.
