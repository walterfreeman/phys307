---
layout: page
category: Projects
navtitle: Project 2
permalink: projects/project2-old.html
use_math: true
---
<center>

<b>Due Thursday, 21 September, at 11 AM</b><br>

</center>

<br>

---

<br>

Because of my computer problems, for now we'll work off of the PDF assignment given last year.

You can find it at <a href="http://suphysics307.wikispaces.com/file/view/hw2.pdf/559276953/hw2.pdf">the old course website</a>.


Some hints:

* Remember that writing `xlog` and `ylog` before a `graph` file will give you logarithmic axes.
* When computing the error, remember to take the absolute value with `fabs()`.
* If you want to run many different stepsizes at once, consider enclosing your program in a `for` loop that changes the stepsize, where you multiply the stepsize by some small value each pass.
* For higher precision in very small values, use `%e` rather than `%f` in `printf` when printing the error.
* Remember the "last bin rounding problem" in doing your integral. This matters for second-order methods but not first-order ones (why?)
* The most important part of your report is a discussion of math and physics ("why did you get the results you did?"), NOT code. You will likely spend more time on analysis than on code in this assignment; start early!



