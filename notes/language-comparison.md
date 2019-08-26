---
layout: default
category: Notes
navtitle: Comparing Python and C
permalink: notes/language-comparison.html
use_math: true
---

<center><h1>C vs. Python</h1></center>

C/C++ is an old language; Python is a much newer one. Here are the differences that matter for our class:

## Compiled vs. interpreted

C is a *compiled language*. This means that you have to use `gcc` or `g++` to compile a C program into machine code before running it. 
So, to run a C program called `sample.c`, you would type `gcc sample.c -o sample` to create the machine code file `sample`, then type `./sample` to run it.

Python is an *interpreted language* that is translated as it runs into machine code. To run a Python program called `sample.py`, you would type `python sample.py`.

Compiled languages are **much faster** than interpreted ones. In general, C code will run about 50 times faster than Python code; if you use NumPy 
for tasks that it is good at, then Python might be "only" five times slower than C. Modern computers are very fast, and you can use Python for
everything in my class ... but, if you ever find yourself running simulations where performance matters, you'll likely be using C or a language like it.

## Explicit vs. implicit typing

In C, *every* variable must be created before using it, and its type declared explicitly. To create a floating-point variable called `x` and an integer called `i`,
you would say `float x; int i`. Likewise, when you create your own functions, you'll have to explicitly say what type of variables are inputs and outputs to the function.

In Python, variables are assigned types implicitly. You can say `x = sqrt(5)`, and Python will decide for you that `x` should be a floating-point value. This 
can sometimes cause headaches, but makes Python code shorter since you don't have explicit declarations of variables. (Conversely it can make C code clearer.)

## Syntax differences

In C, commands that make the computer do something (declare variables, print something, do math) always end with a semicolon. Lines do not end in semicolons in Python.

In C, blocks of code are indicated by enclosing them in curly braces. In Python, blocks of code are indicated by indentation. (This can sometimes cause annoyances,
since tabs and spaces can't be interchanged.)

C does not care at *all* about whitespace: linebreaks, indents, blank space, and so on. The computer will do the same thing; you should choose your use of
whitespace to make your code easy to read. Python cares very much: one statement per line, and indentation matters for setting off blocks of code.

Here's a snippet of C code showing a simple loop and if/else statement:

{% highlight C linenos %}
for (i=0; i<N; i++)
{
  if (i % 2 == 0)
  {
    printf ("%d is even\n",i);
  }
  else
  {
    printf ("%d is odd\n",i);
  }
}
{% endhighlight %}

Here's the same thing in Python:

{% highlight python linenos %}
for i in range(N):
  if (i % 2 == 0):
    print (i,"is even")
  else:
    print (i,"is odd")
}
{% endhighlight %}
