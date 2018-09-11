---
layout: page
title: Project 2
Category: top
permalink: projects/project2.html
use_math: true
---
<center>

<b>Due Thursday, 20 September, at 5 AM</b><br>

</center>

This week, you will extend and modify your integration routine to study the numerical error in integration. There are hints available <a href="project2hints.html">here</a>.

0. Post your favorite meme on the #suphysics channel on Slack. This is mandatory -- the point is to make sure that everyone knows how to use the Slack channel. Change your username there to your name, while you're at it.
We will not accept your homework assignment without a meme. :)

1. Modify your integration routine to call a function when evaluating the function to be integrated. This will make things easier in the long run.

2. Analytically compute the value of $$\int_{0}^{2} \sin x\, dx.$$ Then use your integration routine to compute it numerically, using a range of Riemann sum stepsizes from $10^{0}$ to $10^{-7}$. Do this using the left-hand rule, if you have been doing something else. Then make a log-log plot of the error (magnitude of the difference between the analytic and numeric answers) vs. the stepsize.

3. Now, modify your integration routine to use the midpoint rule. Again make a log-log plot of the error as a function of the stepsize, using stepsizes from $10^{0}$ to $10^{-7}$.<br><br> Plot these graphs for both the midpoint rule and the left-hand rule on the same axis. Do the graphs look like you expect? How do you explain their behavior for large stepsizes? For very small stepsizes? How do you interpret their slopes?

4. Repeat the previous problem using the trapezoid rule. Does it behave as you expect it to?

5. Modify any or all of your programs to use ```double``` variables rather than ```float```s. Does this have the effect you expect on the error?

6. Finally, use one of your second-order integrators to compute $$\int_0^2 \sqrt{x}\,dx.$$ Plot the error vs. the stepsize again. Why do you think this is behaving badly?
  Hint: Compare this to a similar plot for $$\int_1^2 \sqrt{x}\,dx.$$ **Graduate students:** Consider the proof that the trapezoid/midpoint rule is second order.
Is that proof still valid for $\int_0^2 \sqrt{x}\,dx$? Why or why not?

7. **Extra credit:** Write an integrator that uses Simpson's rule. As we will discuss in class, the easiest way to do the Simpson's rule computation is to take 1/3 of the trapezoid
  rule result and add it to 2/3 of the midpoint rule result. Make the log-log error plot as before. Does it perform as you expect?

8. **Extra credit:** By using a linear combination of the trapezoid rule and the midpoint rule, you can cancel out the leading order error terms
in the trapezoid rule and the midpoint rule to form Simpson's rule. Since this cancels out the second-order error, this makes Simpson's rule a third-order method... or 
does it? Actually, by a miracle of symmetry, the *third-order* errors cancel as well, so Simpson's rule is actually *fourth-order*. By a similar process to that in
the <a href="../notes/integration-notes.pdf">notes</a>, but carrying the Taylor series to one more order, prove that the third-order error term cancels as well.
