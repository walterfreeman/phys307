---
layout: default
category: Notes
navtitle: Vectors in C 
permalink: notes/vectors-c.html
use_math: true
---

### Background

You are familiar with the data types `double`, `int`, and `float` already. These are fundamental variable types:
each one represents a single thing.

But C also supports user-defined data types called `struct`s. A `struct` (short for "structure") is a composite
data type that is made up of simpler data types. Consider the following code:

```
struct vector
{
  double x;
  double y;
  double z;
};

int main(void)
{
  vector v,r;
  v.x = 10;
  v.y = 20;
  v.z = 0;

  printf("The components of v are (%e, %e, %e)\n", v.x, v.y, v.z);
 
  r=v;

  printf("The components of r are (%e, %e, %e)\n", r.x, r.y, r.z);

}
```

Notice the following:

* We tell the computer what a `vector` is at the very top of the code, before `main()`
  * It's an object composed of three elements called `x`, `y`, and `z`, each of them `double`s
* We can then use `vector` like any other data type
* The "element of" operator is a dot: `v.x` means "the member `x` of `v`".
* The assignment operator = works like you expect.

### Operator overloading

However, right now all the computer knows is that a `vector` is a data type made up of three `double`s. We haven't told it how to add and subtract vectors, multiply them by scalars, or do any of the other things we'd like to do. This is not very interesting.

However, C++ has the ability to *overload* operators. That means that we can define new meanings for symbols like `+ - / *` that will be context-dependent: if we try to multiply a vector by a scalar it will do the right thing, but if we try to multiply a vector by a vector
it will do a dot product.

### Using the vector library

I've provided you a file called <a href="vector.h">vector.h</a> that contains all of the instructions you need to work with vectors, with the
all of the interesting operators overloaded. Download it and save it in the directory you put your code in. Then look at the code, and you'll see how it works! Ignore the 
`const` keywords; they are there to squeeze a bit more performance out of the code by telling C++ that certain variables will not change inside functions. You'll learn what the `&` in function headers means soon.

To use this, put `#include "vector.h"` (notice quote marks, rather than angle brackets) at the top of your code. Quote marks mean "Look for this file right here, in this directory"; angle brackets mean "This header file is one that's included with the standard
C libraries, look for it there".

Then you can declare and use vectors like any other variable type. A few features:

* You can refer to constant vectors directly by writing something like `ihat = vector(1,0,0)`
* To print a vector, you'll need to print the components separately: `printf("position = (%e, %e, %e)\n",pos.x, pos.y, pos.z);`
* All of the things you learned about vector algebra in your physics classes "should just work".
* You will need to compile your code with `g++` (the C++ compiler) rather than `gcc` if you use this.

Now, modify your orbits code to use vectors from `vector.h` for the position and velocity of the planet (and, if the Sun is not at the origin,
the Sun). This can make your code much simpler; I just wrote a simulation that solves the orbit problem in 18 lines of code, 1/3 of which are blank 
or contain only a squiggly-brace.

Then, once you're done, think about what you need to do for the case where both the Sun and the Earth move. Now you'll need two position variables
and two velocities (each of which is a vector), and will need to update both positions and velocities each time.

Work on coding this, and I'll see you all Tuesday!


