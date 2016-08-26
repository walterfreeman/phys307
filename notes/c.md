---
layout: default
title: c-notes
category: Notes
navtitle: Intro to C
permalink: notes/c.html
use_math: true
---

<center><h1>A first introduction to C</h1></center>

C is the gold standard of programming languages. It’s quite old, and is used for a
bewildering array of things. Linux, Windows, most of your favorite computer games, code
running on 60,000-processor supercomputers, and even `gcc` itself are all written in C.
Here’s a very simple C program. (The line numbers aren’t part of the program.)

{% highlight C linenos %}
#include <stdio.h>

int main()
{
  printf("Hello, world!\n");
}
{% endhighlight %}


Line 1 instructs `gcc` that it should load the header file for the standard input/output
library. This will be the first line of all your programs, since you need this to write text to
the screen.

Line 2 is blank. It is a good habit to leave blank lines in your programs to separate different
ideas. Just like punctuation is used in English to make it easier to read, punctuation
like line-breaks and indentation should be used to make your code easier to read.

Line 3 indicates the beginning of a function called `main`. All programs must have a main
function; the program starts running at the beginning of this function. Soon you will write
programs that use other functions besides this one, but don’t worry about that now. Likewise,
don't worry about the keyword `int`; we'll learn what it's for later.

Lines 4 and 6 are a matched pair of curly braces, telling the compiler that everything
between them is part of `main`. Curly braces are used in C to indicate that a large (or small)
block of code should be considered as one unit: that it is all part of a function (as it is here),
that it is all to be repeated ten times, etc.

Line 5 invokes the `printf` function to write some text to the screen. The funny `\n` at
the end instructs the computer to go to a new line at the end of the text. 

C code consists of statements that are executed one at a time in order (like line 5), interspersed
with control commands that vary that order or indicate other things about the code
(like line 3). In general, all statements that actually do something, like perform a calculation,
create a variable, or display text, end with a semicolon; control commands do not.
Here’s a slightly more complicated program that introduces how to do math in C:

{% highlight C linenos %}
#include <stdio.h>

int main()

{
  int x,xsquared;
  printf("Enter a number:\n");
  scanf("%d",&x);
  xsquared = x*x;
  printf("The square of x is %d.\n",xsquared);
}
{% endhighlight %}

There are some new things here. Line 5 creates two variables of type `int`, which store integer values.
Their contents are garbage at the moment, whatever occupied that location in memory
most recently. This statement merely sets aside enough of the computer’s memory for our
variables. C variable names, like `xsquared` here, can be more than one letter long. You
should try to use variable names that give some indication of what the variable represents.
Variable names, like everything else in C, are case sensitive: `X` and `x` are totally different
things to the computer.

Line 6 prompts the user to enter a number, and then line 7 reads in a value from the
keyboard and stores it in the variable `x` using the function `scanf`. The `%d` in quotes tells the
computer to read in a single integer value (`%d` means ”an integer”), and the `&x` tells the
computer to store it in the variable `x`. For now, treat the ampersand as a magic character
that must be included when you are using `scanf`; we’ll learn what it means later.

Line 8 is an assignment statement. While this may look like an equation, it is not quite
the same thing. Rather than being a statement of fact that two things are equal, this means
”compute `x*x`, then set `xsquared` equal to its value”. `x*x = xsquared` is not valid, since
`x*x` is not a single variable that can be set equal to anything! On the other hand, `x = x+1`
is valid C; it simply means to increase the value of x by one.

Line 9 is our old friend `printf`. As in `scanf`, the `%d` is a placeholder for an integer value
to be printed, specified after the text in quotes.

There are other sorts of variables besides `int` that store other sorts of things. Variables
of type float store floating-point numbers (decimals), for instance. The ”percent code” used
with `scanf` and `printf` for float numbers is `%f`.

Here’s a gotcha: if you are dividing two integers, C will do integer division and drop the
remainder, even if the result is later set to a float. This code snippet, for instance, will print
”1” rather than ”1.5” like you might expect:

{% highlight C %}
#include <stdio.h>
int i=2, j=3;
float x;
x = j/i; // 3/2 is 1, not 1.5, if you’re doing integer division!
printf("x is %f\n", x);
{% endhighlight %}

Even numeric constants are treated as type int if they don’t have a decimal. Try this:

{% highlight C %}
#include <stdio.h>
printf("3/2 is %f.\n", 3/2); //integer division
printf("3.0/2.0 is %f.\n", 3.0/2.0); //floating-point division
{% endhighlight %}

The difference between floating-point division and integer division will matter in your
first homework assignment!

---

Here’s another program that introduces looping structures: commands that tell the computer
to repeat chunks of code. Clever use of these is the key to programming: the whole
point of using a computer is that it can do repetitive, tiresome mathematical tasks quickly.

The `for` statement tells the computer to repeat a block of code until something happens. It looks like this:

<pre>
for(what to do at the start ; under what conditions to keep going ; what to do after each repeat)
{
  [code to be repeated]
}
</pre>

See if you can guess what this program does before you run it:

{% highlight C linenos %}
#include <stdio.h>

int main()
{
  int x;
  for(x=0; x<=20; x = x+1)
  {
    printf("%d %d\n", x, x*x);
  }
}
{% endhighlight %}

Note that there is no semicolon after the for statement in line 6. This is because it is a
control statement itself, rather than an actual instruction to the computer to do something! 
A common mistake is to put a semicolon after the for statement; this will make the computer
repeat the semicolon over and over (i.e. do nothing) rather than what you wanted it to do.

This `for` statement means ”Before you do this, set `x` equal to 0. Then, repeat the
following block of code so long as `x` is less than or equal to 20, and after each repetition add
1 to `x`.” Note that it will run with `x` ranging from 0 to 19, not 1 to 20!

Here’s one more program that illustrates how to use the `if` statement to make the computer do one thing or another.

{% highlight C linenos %}
#include <stdio.h>

int main()
{
  int x;
  printf("Enter a number: \n");
  scanf("%d", &x);
  if (x < 0)
  {
    printf("The number is negative.\n");
  }
  if (x == 0) // note the == rather than =
  {
    printf("The number is zero.\n");
  }
  if (x > 0)
  {
    printf("The number is positive.n\");
  }
}
{% endhighlight %}

A couple of new things here. The biggest one is the `if` statement, of course. Note the
use of `==` rather than `=` to check for equality. Single-equals is the assignment operator that
changes the value of a variable; double-equals tests to see if two things are equal. Mixing
these up is a common mistake.

Also notice the text beginning with `//`. This is a comment: text that is completely
ignored by the compiler and does nothing, but is included just as a note to anyone reading
the code. Use comments liberally; it’s essential that you or someone else reading your code
can figure out what it does. At a minimum, any program you submit should have a comment
at the top telling who wrote it and what it does. 

