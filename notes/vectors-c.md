---
layout: default
category: Notes
navtitle: Vectors in C (Background)
permalink: notes/vectors-c-background.html
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
* The assignment operator = works like you 
