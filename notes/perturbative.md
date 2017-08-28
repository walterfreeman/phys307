---
layout: default
category: Notes
navtitle: Perturbation theory 
permalink: notes/perturbative.html
use_math: true
---

### These notes are still being written and will be finished by Thursday.

This is the most broadly-applicable set of notes in this entire class.

The behavior of most phenomena in nature are *perturbative.* What does that mean? It means that their behavior, speaking very broadly, can be expressed in terms of a power series, where the expansion variable in the power series has something to do with an amplitude, an interaction strength, and so on.

In many cases, we are in the regime where that amplitude or interaction strength is small. For instance, consider a spring. You learned in your introductory physics class that it obeys Hooke's law, $F=-k\Delta x$. However, you know intuitively that this can't be strictly true; eventually, as the force
gets larger and larger, the spring will start behaving in non-Hooke's-law ways, since as $F \rightarrow \infty$, you know the spring must snap and the force goes to zero. In general, we can write

$$F_{\rm spring} = k \Delta x + k_2 (\Delta x)^2 + k_3 (\Delta x)^3 + ...$$

where I have absorbed the $n!$ components of the Taylor series into the definitions of the $k's$. 

This lets us divide the behavior of the spring into, roughly, three regions:

* $\Delta x$ very small: spring behaves as given by Hooke's law. No deviations are measurable. The subsequent terms in the Taylor series are not large enough to matter. Let's call this the *ideal regime*.
* $\Delta x$ somewhat larger: Higher-order terms become important. Deviations from Hooke's law are measurable, but the spring's behavior is still well approximated by the first few terms in the power series. This is the *pertubative regime*, and what this set of notes is about.
* $\Delta x$ large: The spring behaves in drastically non-Hookian ways. Perhaps it snaps, or the metal is grossly deformed. This is the *nonperturbative regime*.


Many, many, *many* things in nature behave this way, and the ability to classify phenomena in this way will help you immensely in your career as a scientist, engineer, or otherwise.

The key idea here is that in the *perturbative region*, one can classify the relevant effects as subsequent terms in the Taylor series, and think about their structure. This is important, because it gives us a handle on the behavior of things even in the nonideal region. For instance, in your swinging-pendulum
problem, you will discover that even when the period of a pendulum is measurably different from the ideal value $T_0 = 2\pi\sqrt\frac{L}{g}$, its value is *predictable*. 

Often, we can use the Taylor series to calculate this behavior, at least to a very good approximation. This is how almost everything in quantum mechanics gets done.


