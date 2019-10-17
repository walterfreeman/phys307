---
layout: default
category: Notes
navtitle: Vectors in Python 
permalink: notes/vectors-python.html
use_math: true
---

### Background

NumPy comes with a very powerful data type that can be used to do linear algebra called an *array*. This is a single variable that contains multiple numbers. 

They are different from a *list*, which is also a single variable that contains multiple numbers. The differences are:

Lists:

* Lists are a feature of standard Python, not NumPy
* They are intended to collect, sort, and count things, not to do math with them
* Doing math with lists will almost never do what you want
* They are almost never going to be useful to us in this class

Arrays:

* Arrays are a feature of NumPy
* They are designed to do math with
* You can often do a whole set of calculations on an array in one line, in a way that is much faster than writing a `for` loop
* They can be one-dimensional (a three-component Cartesian vector), two-dimensional (a whole collection of Cartesian vectors; a matrix), or even more

For now, we'll only be using this for Cartesian vectors -- arrays that have one dimension that is three elements long. Some of the workings of NumPy for arrays of more than one dimension can get hairy (but very powerful).

The best way to learn how to use vectors in NumPy is to fiddle with things yourself and see what they do. You can use the Python REPL to do this; just type `python` or `python3` at the command line.


Here are some things to try:

* Define a vector: `A = array([1,2,3])`. Note the funny use of brackets and parentheses. 
* Refer to particular components of a vector: `print (A[0])`. Note that `A[0]` is the *first* element; our three-component vector has indices 0, 1, and 2.
* You can change them individually: `A[0] = 4`
* Define another vector: `B = array([4,5,6])`
* Try typing `A*B` into the REPL and see what happens. Notice that this is *not* the dot product that you were expecting!
* In vector math you can't add a vector to a scalar, but Python will let you do it! Try `A+1` and see what happens.
* Try `dot(A,B)` and `cross(A,B)` and see if they do what you want
* Writing `sqrt(A[0]**2 + A[1]**2 + A[2]**2)` to find the length of a vector is going to get very old! Instead, there is a function for it. Try `linalg.norm(A)`. 
* All the combinations you would think will work should. Try `linalg.norm(A-B)`.

Once you've finished this, modify your orbits code to use NumPy vectors for the position and velocity of the planet (and, if the Sun is not at the origin,
the Sun). This can make your code much simpler; I just wrote a simulation that solves the orbit problem in 10 lines of code!

Then, once you're done, think about what you need to do for the case where both the Sun and the Earth move. Now you'll need two position variables
and two velocities (each of which is a three-component vector), and will need to update both positions and velocities each time.

Work on coding this, and I'll see you all Tuesday!
