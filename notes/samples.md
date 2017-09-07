---
layout: default
category: Notes
navtitle: Sample Codes
permalink: notes/samples.html
use_math: true
---


# Sample programs for some tasks

This code is meant to give you some inspiration for writing your homework. It’s not stuff you can lift
and use in your assignments, and copying things directly out of this file is dangerous if you don’t understand
how they work. (Of course, any code you copy from another source must be cited.) But reading and
understanding how this code works will help you out quite a lot.

---

## Checking to see if a number is odd or even

To see if a number is divisible by something else, use the ```%``` operator
to check the remainder when that number is divided by your divisor.

**Note:** The modulus operator does strange things with negative numbers,
and doesn't work with floats. This is one of my few annoyances with the C
language.

{% highlight C linenos %}
// We want to see if the number n is even or odd

if (n % 2 == 0) // examine the remainder when n is divided by 2
{
  printf("%d is even\n",n);
}
else
{
  printf("%d is odd.\n",n);
}
{% endhighlight %}

## Checking to see if a number is a perfect square – the dumb way

There are far more efficient ways to do this, but this illustrates a couple of programming concepts.

{% highlight C linenos %}

// We want to see if the number n is a perfect square
int i; // i is usually used as a generic "counter" variable
int is_square=0; // We’ll set this to 1 if the number 
                 // is a perfect square

for (i=0;i<n;i++) // This could be made a lot faster, of course
{
  if (i*i == n)
    is_square = 1; // Don’t need the squiggly braces if you only have 
}                  // one statement after the "if"

if (is_square == 1)
  printf("%d is a perfect square.\n",n);
else
  printf("%d isn’t a perfect square.\n",n);

{% endhighlight %}

The key here is the use of a flag variable, in this case `is_square`: a variable that is equal to 1 
if something has (or hasn’t)
happened, and is zero otherwise. Here we set `is_square` to 0, and set it to 1 once we discover that the
number is a perfect square.

Note that this is terrible programming for a lot of reasons. We could use `break;` to exit the loop once
we’ve found that it’s square; `break` is a command that immediately breaks you out of a `for` loop. 
The point of showing this is that you will need a similar procedure
to check numbers for prime-ness.

---

## Printing a multiplication table
This illustrates the use of one for loop within another.

{% highlight C linenos %}
int i,j;
for (i=1;i<=12;i++) // because it’s ALWAYS twelve...
{
  for (j=1;j<=12;j++) // What would "j<=i" do?
  {
    printf("%3d ",i*j); // "%3d" means "An integer, but
  }                     // leave space for three digits"
  printf("\n"); // skip a line after each row
}
{% endhighlight %}

---

## Euler's childhood assignment: adding the numbers from 1 to 100

{% highlight C linenos %}
int sum=0;    // note that we must set sum to zero 
              // before we add things to it! 
int i;

for (i=1; i<=100; i++)   // note that "i++" is shorthand for "i=i+1"
  sum=sum+i;

printf("The sum of numbers from 1 to 100 is %d\n",sum);
{% endhighlight %}

---

## Tracking the motion of a falling body

Here, if we already know the analytic answer $x=\frac{1}{2}at^2$, we can just evaluate it. But what if we don’t know how to derive that?

Suppose something is falling from an initial height h, and we want to use time intervals of size dt. These
variables are assumed to already be defined.

{% highlight C linenos %}
double y=h,t=0,v=0;
for(t=0; ;t += dt) // This loop will go forever! 
{                  
  y += v *dt;    // in time dt, the body falls a distance v*dt, if dt is
                 // small enough that v is essentially constant
  v -= 9.8 * dt; // in time dt, the velocity decreases by g*dt
  printf("%f\t%f\n",t,y);
  if (y < 0)
    break; // if we’ve hit the ground, break out of the loop

}
{% endhighlight %}
