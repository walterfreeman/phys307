---
layout: default
category: Notes
navtitle: Intro to Python
permalink: notes/python.html
use_math: true
---

<center><h1>A first introduction to Python</h1></center>

### 1. Basics

Python is a newer programming language that is designed to be flexible and accessible.
It is much slower than C, but modern computers are so fast that this doesn't matter much
for many of the things that you will do. Python is good at manipulating text,
which is difficult in C; thus, Python is commonly used by scientists to do data analysis.

You can run Python code in two different ways:

* Type `python` at the command line, then type Python code directly into the terminal. The
  computer will execute each line as you input it. (This environment is called a "REPL", for
  "Read, Evaluate, Print Loop").

* Create a text file containing Python code. Conventionally, these files have names ending in `.py`, for instance
  `program.py`. You then run them by saying `python program.py` at the command line.

Here is a very simple but complete Python program that you can try:
{% highlight python linenos %}
print ("Hello, world!")
{% endhighlight %}

---

### 2. Math and variables

Here’s a slightly more complicated program that introduces how to do math in Python:

{% highlight python linenos %}
from numpy import *

a = float(input("Enter a number: "))
b = float(input("Enter another number: "))
c = sqrt(a**2 + b**2)

print ("The hypotenuse of a triangle with legs of length",a,"and",b,"is",c)
{% endhighlight %}

There are some new things here.

Line 1 imports functions from the `numpy` module. One of the great strengths of Python is the enormous
range of modules available for it that do different things. NumPy, short for *numerical Python*, is a set
of mathematics functions. We will need it in order to have access to the `sqrt` function which we'll use later.

Line 3 sets the variable `a` equal to a number that the user enters. The function `input()` reads some text from the keyboard.
So writing `a = input("Enter a number: ")` prompts the user to type something, and then stores whatever the user types
in the variable `a`.

So, what's this `float` business?

Variables and other objects in Python can have many different types. A variable like `a` can represent an integer, a decimal number 
(called `float`, for "floating-point", i.e. scientific notation), some text (called a "string"), a list of numbers or strings of text, or even more 
complicated things.

The `input()` function returns a string -- that is, text. Note that there is a difference between *the number 5.0* and *a string of text comprised of
the characters "5.0"*. Specifically, the computer knows how to do mathematics with numbers, but doesn't know how to do math with text -- even if that
text describes a number. So, in order to do math with the things we have read from the keyboard, we must
convert them into numbers. The `float()` function converts text into floating-point (i.e. decimal) numbers, which does exactly 
what we want here.

So line 3:

* Prompts the user to enter a number
* Converts whatever they type to a value of type *float*
* Stores that value in the variable `a`.

**Important**: The `=` operator in Python is called the *assignment* operator. It does not mean that one thing must forever be equal to another thing.
Instead, it does something much more mundane: it takes the value on the right-hand side of the `=` and stores it in the variable on the left-hand
side of the `=`. Thus, statements like `x = x + 1` are perfectly valid Python: this just means "make x bigger by 1".

Line 4 does the same thing for another number, storing it in `b`.

Line 5 does some mathematics. Notice that `**` is the exponentiation operator, so `a**2` means $a^2$, not `a^2`. Remember line 1, where we 
imported the `numpy` module? The `sqrt` function lives inside it, which we use now.

Finally, line 7 prints out the result. Notice that you can easily mix text and numbers in the `print()` function.

---

### 3. Loops: repeating things multiple times

Here’s another program that introduces looping structures: commands that tell the computer
to repeat chunks of code. **Clever use of these is the key to programming:** the whole
point of using a computer is that it can do repetitive, tiresome mathematical tasks quickly.

The `for` statement tells the computer to repeat a block of code multiple times. Python has a 
special type of object called an *iterable*, which you can think of as "an instruction for how
to repeat something".

For now, we need one iterable, which is the `range` function. It generates a range of numbers;
`range(5)` generates the set of numbers `(0, 1, 2, 3, 4)`.

See if you can guess what this program does before you run it:

{% highlight python linenos %}
for i in range(20):
    print (i,"squared is",i*i)
print ("All done!")
{% endhighlight %}

Then run this code, and see how it works!

Notice a few things:

* There is a colon after the `for` statement. Statements like `for`, `if`, and `while` are called *control statements*.
They tell the computer how to repeat, or whether to run, a block of code that follows them. In Python, they end with a colon.

* The block of code to be repeated is *indented*. Indentation in Python is used to describe blocks of code, and Python will
complain if you don't indent every line in a block of code by the same amount. Tabs and spaces are *not* the same: just because
two things look like they're indented the same amount, if one uses tabs and another uses spaces, Python will complain.

Here's another way to do the same thing:

{% highlight python linenos %}
i = 0
while (i < 20):
    print (i,"squared is",i*i)
    i = i + 1
print ("All done!")
{% endhighlight %}

---

### 4. Conditional statements

Here’s one more program that illustrates how to use the `if` statement to make the computer do one thing or another.

{% highlight python linenos %}
# use the int() function to change text to integer
a = int(input("Enter an integer: "))  

if (a > 0):
    print ("The number is positive")
if (a < 0):
    print ("The number is negative")
if (a == 0):
    print ("The number is zero")
{% endhighlight %}

A couple of new things here. The biggest one is the `if` statement, of course. Note the
use of `==` rather than `=` to check for equality. Single-equals is the assignment operator that
changes the value of a variable; double-equals tests to see if two things are equal. Mixing
these up is a common mistake.

Also notice the text beginning with `#`. This is a comment: text that is completely
ignored by the compiler and does nothing, but is included just as a note to anyone reading
the code. Use comments liberally; it’s essential that you or someone else reading your code
can figure out what it does. At a minimum, any program you submit should have a comment
at the top telling who wrote it and what it does. 

