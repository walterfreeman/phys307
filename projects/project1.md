---
layout: page
category: Projects
navtitle: Project 1
title: Project 1
permalink: projects/project1.html
use_math: true
---
<center>

<b>Due Tuesday, 13 September, at 11 AM</b><br>


See <a href="../notes/math.html">the notes on math</a> and <a href="../notes/samples.html">the file of sample programs</a> for a few hints.
<br><br>

</center>

**Problem 1:** Write a program that computes definite integrals of any function you supply it by calculating a Riemann sum. Use this to calculate the integral

$$ \int_0^2\, e^{-x^2}\, dx. $$

Then calculate the integral

$$ \int_{-\infty}^\infty\, e^{-x^\infty}\, dx. $$

Be intelligent about how you do this. You want a reasonably accurate answer, but you dont want the computer to take forever doing it. Make sure you discuss how you handled the infinite interval. Do you come reasonably close to the analytic answer of $\sqrt \pi$?

It may be helpful for you to first graph this function if you’re not familiar with it. (You should be able to quickly graph different functions using the code you wrote last week.)

<br><br>

**Problem 2:** Write a program that reads in a variable $N$, and then prints out the number of prime numbers less than or equal to $N$. (You may also want to print out the prime numbers themselves to verify that your code is working.) You may do this in any straightforward
way that you can think of.

As a hint, you might consider using a variable `isprime` that is initially set to one, but is set to zero once you locate a factor for each number.

Another hint: You will need two `for` loops for this problem: one to loop over numbers whose primacy you are checking, and another to loop over possible divisors as you check them. Remember `%` is the modulus operator, and that you can write something like

{% highlight C %}
if (a % b == 0) // check whether the remainder of a/b is zero or not
{
  do something;
}
else
{
  do something else;
}
{% endhighlight %}

to check to see if one number evenly divides another. Note that you do not need the
`else` clause, if you don’t want to do anything in the event that `b` does not evenly divide
`a`.

 * a) For N = $10^6$, estimate (roughly, but tell me how you got the estimate) how many 
       arithmetic operations are required to do this with your code, and how long it will
       take. Go ahead and do it; was your estimate accurate? How long would it take
       for N = $10^9$? ? Is this a reasonable calculation?

 * b) Can you think of any small modifications to your program that will speed it
       up? Discuss these modifications and estimate how much each will speed up your
       calculation (estimates can be of the form “this will make it go twice as fast” or
“this will make it go drastically faster”). Then make these modifications.


