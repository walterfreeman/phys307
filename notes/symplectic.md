---
layout: default
category: Notes
navtitle: Symplectic solvers
title: Symplectic solvers 
permalink: notes/symplectic.html
use_math: true
---

## The problem

Often, when simulating oscillatory systems like pendulums, orbits, guitar strings, drumheads, and many others, we are primarily concerned with *stability*. A simulation that drifts away from the exact solution over many periods
is acceptable if it preserves the general character of what it's supposed to do.

We know that when using Euler and RK2 solvers, we accumulate an error proportional to $dt$ or $dt^2$ over a simulation time $t$. We've not discussed how these errors depend on $t$ itself. In general, this is highly dependent
on exactly what system you are solving, and can be complicated. 

As with all physical observables, the energy of the system will also have an error proportional to $dt$ or $dt^2$ for these solvers. Since energy is conserved, even if we can't write down the exact behavior of our system (for instance,
with our pendulum there is no analytic answer for $\theta(t)$), we know one property of the exact solution: the energy is a constant. (In this case, the energy is $\frac{1}{2}I\ddot\theta + gL \cos \theta$.) 

Here's the bad news: the violation of conservation of energy is often **exponential** in time. This means that *dividing the timestep by 10* (making the computer do ten times as much work!) will only produce a linear increase in 
how long the simulation will run before blowing up. This is very, very bad if we want to simulate an oscillatory or near-oscillatory system for any significant length of time.

## Symplectic solvers

The Euler and RK2 solvers you already learned about are general-purpose: they can be used to solve any system of differential equations, regardless of whether they have their ultimate origin in Newton's laws of motion or not. However, there
is a special class of solvers, called *symplectic solvers*, which can only be used on physical systems whose dynamical variables consist of positions and velocities. Symplectic solvers have the special property that they conserve energy
far better than their nominal order would reflect, and that in particular they are stable in oscillatory systems.

### The Euler-Cromer solver, which you may have coded by accident

Consider this seemingly-straightforward implementation of the Euler solver:

{% highlight C %}
Repeat:
  x = x + v * dt;
  v = v + a(x) * dt;
{% endhighlight %}

This doesn't actually implement Euler! Recall that the Euler prescription is to update both position and velocity based on the state at the *beginning* of the step, but here we've updated velocity based on the *already-updated* position! (To see how Euler
is actually done, see the end of this file.)

This is a different solver, called the *semi-implicit Euler method*, or the *Euler-Cromer* method. Like Euler, it is a first-order method. However, it is a *symplectic* integrator, so it conserves energy much better than we'd expect from a
first-order method (say, Euler).

### The "backwards" Euler-Cromer solver

We could also implement Euler-Cromer like this, using the old value of position to update velocity, and the new value to update position:

{% highlight C %}
Repeat:
  v = v + a(x) * dt;
  x = x + v * dt;
{% endhighlight %}

This is also a first-order symplectic solver.

### The Leapfrog solver

In each of these approaches, either the position or the velocity is "ahead" of the other. We might imagine an alternate approach that alternates the two Euler-Cromer methods:

{% highlight C %}
Repeat:
  x = x + v * dt/2;
  v = v + a(x) * dt/2;
  v = v + a(x) * dt/2;
  x = x + v * dt/2;
{% endhighlight %}

This method advances both position and velocity by `dt`, without privileging one over the other. I'll state, but not prove, that this is a *second-order symplectic* integrator, and is the one that we'll use for the rest of this class. 
This has the advantage of being pretty simple to code (no "half" variables) and of conserving energy better than RK2.

We could of course rewrite this:

{% highlight C %}
Repeat:
  x = x + v * dt/2;
  v = v + a(x) * dt;
  x = x + v * dt/2;
{% endhighlight %}

Since evaluating $a(x)$ is the time-intensive part of these calculations, this reduces the workload by half. One could also imagine doing the following:

{% highlight C %}
x = x + v * dt/2;
Repeat:
  v = v + a(x) * dt;
  x = x + v * dt;
{% endhighlight %}

This also gives second-order symplectic behavior, but has the disadvantage that you never have access to `v` and `x` at the same time. 


## Summary of integrators

### Euler: first order

{% highlight C %}
Repeat:
  xnew = x + v * dt;
  vnew = v + a(x) * dt;
  x = xnew;
  y = ynew; 
{% endhighlight %}

### RK2: second order

{% highlight C %}
Repeat:
  xhalf = x + v * dt/2;
  vhalf = v + a(x) * dt/2;
  x = x + vhalf * dt;
  v = v + a(xhalf) * dt;
{% endhighlight %}


### Euler-Cromer, position first: first order symplectic

{% highlight C %}
Repeat:
  x = x + v * dt;
  v = v + a(x) * dt;
{% endhighlight %}

### Euler-Cromer, velocity first: first order symplectic

{% highlight C %}
Repeat:
  v = v + a(x) * dt;
  x = x + v * dt;
{% endhighlight %}

### Leapfrog: second order symplectic

{% highlight C %}
Repeat:
  x = x + v * dt/2;
  v = v + a(x) * dt;
  x = x + v * dt/2;
{% endhighlight %}

**IMPORTANT NOTE:** For most physical systems there is more than one pair of dynamical variables. (For instance, $x$, $y$, $v_x$, $v_y$ for the orbit.) In the above descriptions, the `x` updates are a shorthand to update *all* position variables, and the 
`v` updates a shorthand to update *all* velocities.
