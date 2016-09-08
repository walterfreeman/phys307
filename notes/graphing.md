---
category: Notes
layout: default
navtitle: Using graph 
title: graph-notes 
permalink: notes/graph.html
use_math: true
---

<center><h1>Notes on graph</h1></center>

Here's the documentation for `graph`, our simple plotting tool.

To print a graph to the screen, type at the Linux prompt

`graph <filename>`

where `<filename>` is a file containing pairs of numbers, each on a separate line, for instance

{% highlight C %}
1 1
2 4
3 9
4 16
{% endhighlight %}

If you type instead

`graph <file1> <file2> <file3>` ...

you'll get graphs of each file in a diferent color.

There are a few other commands you can use. 

* Writing `dots` on a line by itself will make `graph` display individual points rather than connecting points together
with lines.

* Writing `xlabel <text>` or `ylabel <text>` by themselves on a line will label the axes.

* Writing `xlog` or `ylog` will make the x- or y-axes logarithmic. This will be important next week!

To save your graph as a PDF, do

`graph <file1> <file2> ... -o <something.pdf>`. You can then transfer it to your computer with WinSCP.
