<center>
<h2> Physics 307 Homework 2</h2><h3> Due Thursday, 21 September</h3></center>

This week, you will extend and modify your integration routine to study the numerical error in integration.

1. Modify your integration routine to call a function when evaluating the function to be integrated. This will make things easier in the long run.

2. Analytically compute the value of $$\int_{0}^{2} \sin x\, dx.$$ Then use your integration routine to compute it numerically, using a range of Riemann sum stepsizes from $10^{0}$ to $10^{-7}$. (It will probably be easiest if you automate this last process by using a ```for``` loop to cycle through the various values of your stepsize; don't forget to reset your accumulator after each integral.) Do this using the left-hand rule, if you have been doing something else. Then make a log-log plot of the error (magnitude of the difference between the analytic and numeric answers) vs. the stepsize.

Ensure that the interval (0,2) can be divided evenly into intervals of the stepsize you choose! (What happens if this isn't the case?)

3. Now, modify your integration routine to use the midpoint rule. Again make a log-log plot of the error as a function of the stepsize, using stepsizes from $10^{0}$ to $10^{-7}$.

 Plot these graphs for both the midpoint rule and the left-hand rule on the same axis. Do the graphs look like you expect? How do you explain their behavior for large stepsizes? For very small stepsizes? How do you interpret their slopes?

\item{Repeat the previous problem using the trapezoid rule. Does it behave as you expect it to?}

\item{Modify any or all of your programs to use {\tt double} variables rather than {\tt float}s. Does this have the effect you expect on the error?}

\item{Finally, use one of your second-order integrators to compute $$\int_0^2 \sqrt{x}\,dx.$$ Plot the error vs. the stepsize again. Why do you think this is behaving badly?
  Hint: Compare this to a similar plot for $$\int_1^2 \sqrt{x}\,dx.$$}

\item{Extra credit: Write an integrator that uses Simpson's rule. As we will discuss in class, the easiest way to do the Simpson's rule computation is to take 1/3 of the trapezoid
  rule result and add it to 2/3 of the midpoint rule result. Make the log-log error plot as before. Does it perform as you expect?}
  \end{enumerate} \end{document}