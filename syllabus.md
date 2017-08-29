---
layout: page
navtitle: Syllabus
category: top
title: Syllabus
permalink: syllabus.html
use_math: true
---

### Physics 307: Science and Computers I, aka Computational Physics


---

### At a glance:

- Tuesday and Thursday, 11:00-12:20, Physics Building 115
- Instructors:
    - **Walter Freeman**, lead instructor: <wafreema@syr.edu>, office Physics Building 215
    - **Sourav Bhabesh**, <ssbhabes@syr.edu>, graduate teaching assistant and grader
<!--    - **Patrick Miles**, <pmiles@syr.edu>, and **Aaron Hutchins**, <athutchi@syr.edu>, undergraduate learning assistants -->
- Course website: <http://walterfreeman.github.io/phys307/> (you are likely there already)
- Email address for questions: <suphysics307questions@gmail.com> (shared between instructors)
- Email address for homework submissions: <suphysics307@gmail.com> 
* Slack team for questions and conversation: suphysics.slack.com
- Course computer: phy-compphysclass.syr.edu

---

### Asking for help

Please contact any of us with questions that arise outside of class; you will often get a prompt response. You can email us at <suphysics307questions@gmail.com>
or you can ask in the Slack channel at suphysics.slack.com.

I encourage you to ask us to help
you debug your programs once you’ve made an effort to figure it out yourself; while learning to debug code
is important, I don’t want you to waste six hours trying to track down a missing minus sign or curly brace.
We are here to help you! As a general rule, if your program isn't compiling, email us after five to ten minutes of trying to figure out
what is wrong; if there is a bug of another sort, email us after fifteen to thirty minutes of trying to figure it out on your own. 

We will be covering a great deal of ground in this course, so if you don’t understand something or fall behind,
ask for help; that’s what I am for. Learning computational physics often involves a lot of personal coaching
and messy practice – it is more like learning to play the guitar than learning geography. (We will learn something about
guitars in our class, in fact!)

---

### Office hours

- Tuesdays, 4:30-6:30, and Fridays, 9:30-11:30, and others to be added
- I’m also often around – feel free to email me and set up an appointment at other times!
- I can also hold "virtual office hours". If I'm at home and you have a question, I'm very willing to help you by teleconference
using your favorite tool (Google Hangouts, Discord, Skype, etc.), so long as it runs on Linux.

---

### Course overview:

This course is an introduction to the art of using computers to aid in solving problems in physics and other
sciences. You will learn the basics of programming a computer to do computations and physical simulations,
as well as the equally important skill of interpreting the results that the computer gives. In this course we
will teach you to use the C programming language on a Linux system, but what you learn here will apply to
many other languages and architectures. In fact, any of you who know another serious programming language are
welcome to use it instead of C in my class; this list includes Fortran, Python, Java, Perl, and probably some others
that I haven't heard of. 

First we’ll study the basics required to get around a Linux environment and learn some simple C programming. 
Then we will learn how to use those skills to accomplish some
mathematical tasks, e.g. integrating functions. As part of our study of numerical integration, we will develop the tools
required to answer questions like "How well can I trust a numerical calculation?" and "On what things does the numerical result depend?"
We will then apply these skills to model various physical situations, picking up new programming and computational skills along the way. One of
the most important is knowing how to interpret results from the computer, and when to suspect that your
simulation isn’t accurately reproducing what you want it to reproduce. Along the way, you'll discover how readily you can use computers to uncover 
insight about physics that aren't widely known.

While we will study computer programming and the Linux environment, and these things are important
aspects of this course, these are only tools; /the emphasis in this course will always be on the computational
aspect/, even though you will spend a lot of time programming. However, the C-on-Linux environment we will be using is the gold standard for scientific computing. 
The tools you will learn in my class are the same tools used to program ten-thousand-processor 
supercomputers, and you can transfer these skills to other environments and languages (such as Python) if that's what you use in your research.

### Course philosophy:

This class is going to be a significant amount of work; I have high standards for what I want you to accomplish. However,
you have a team of people on your side to help you: myself, the TA, and your classmates. 
This class is emphatically not a class in which you attend lecture, learn things, go home and work by yourself,
and submit a fully-formed clean result. Computational physics, and especially the process of learning it, is
messy. You should ask questions – early and often. The teaching staff and I will all be happy to answer
your questions in class. Help session hours are a good time to work on your projects, when folks am around to answer
your questions.

Also, I want to make sure you all know that my door is always (figuratively) open to help you with whatever other issues arise this semester.
If you need help in another class or if you just have a question about physics in general, please
ask me. I am a teaching professor, so it is my full-time job to help students!

---

### Computing environment:

As you might expect, you will be using computers quite extensively in my class. There is a course computer
running Linux which you can access via `ssh` to phy-compphysclass.syr.edu. You are welcome to use the
machines in the classroom to do this at any time, or you may connect from your personal laptops (running
any OS; you will need a few pieces of free software if you are on Windows). 

You may also do all of your computing on your personal machines. You are welcome to bring your personal
laptops to class and use those in lieu of the machines provided. If you need any help getting things working
on your own machines, please ask. 

Macs will be usable without much hassle, since OSX is quite similar to Linux under the hood. If you have a
Windows machine, it is generally not that difficult to set up a dual-boot Linux environment or a virtual machine; I can help you
with this, and can provide you with the graphics software installed on the course system. You are welcome
to use any other C-on-Unix environment you have access to.

If you have a Mac or a Linux system, you will likely get smoother graphical performance if you run things
locally, especially if you live off campus, once we start making 2D and 3D animations.

In general, extensions won’t be given for problems with your own hardware (“my dog ate my laptop”), but
will of course be given for problems with SU’s equipment or network.

---

### Grading:

I am trying an experiment this year; you will be assigned grades in a radically different way than you are used to. 


How does this work?

Ultimately, the goal of grading is to give you a grade based on how many new skills you acquire during the semester. You're more familiar with a scheme that works like
this:

* Instructors assign homework and exams that are designed to test whether you've learned what we want you to learn 
* We give you a number grade on each of these
* At the end of the semester, we do some math and figure out a letter grade

This obscures the connection between the skills that you acquire and your letter grade, and means that there are lots of ways to "lose points" even if you do 
understand things. Instead, I am going to be using ``objectives-based grading'', which grades you based on the skills you demonstrate, rather than an average
of your performance on specific assignments. 

* You work on projects that are designed to both teach you things and give you an opportunity to demonstrate your abilities
* For each skill we want you to learn, we'll track your progress along a five-stage track (1 = beginning, 5 = truly exceptional)
  * Roughly speaking, the stages in the track are:
    * Foundational: things you should learn in the first 2-3 weeks of class that are required for the course
    * Developing: things you should learn by the halfway point in the class that are the fundamentals of the discipline
    * Proficient: the bread and butter of the course, things we expect most students to achieve
    * Advanced: high-level work; strong students will likely complete some (but not all) of these
    * Exceptional: truly exceptional mastery of a skill, on par with PhD projects; things which will make an impact beyond this class

* We evaluate your submitted work and determine which skills you've shown that you've mastered and to what level, and make a note of this
* If you don't demonstrate a particular skill at the first opportunity, you will usually have subsequent opportunities to do so
* Our gradebook for you is thus a record of your progress along each track
* At the end of the semester, your final exam is an opportunity to demonstrate up to three additional objectives of your choice
that you didn't pick up earlier, to further improve your standing. This exam will be either a written test or an oral presentation
(depending on what is practical); we'll figure out how this will work as the end of the term approaches.

The rubric can be found <a href="sbg.html">here</a>.

* Your final grade is based on the objectives you complete. The grading rubric has eight tracks each with five levels of mastery,
giving you a maximum of 40 objectives. Grades will be assigned as follows: 
  * 0-8: F
  * 9-13: D
  * 14-15: C-
  * 16-17: C
  * 18-19: C+
  * 20-21: B-
  * 22-23: B
  * 24-25: B+
  * 26-27: A-
  * 28-40: A


*Incompletes:* A grade of "incomplete" is a provisional grade given to any student who is unable to complete the coursework during the 
semester due to unavoidable personal problems. In general, a student is eligible for an incomplete if they are substantially unable to 
come to class or study for a period of two weeks or more, or one week in the last month of class, due to personal illness or injury, 
illness or injury in the family (including significant others), legal involvement, or international issues. Please contact me if you
feel that you might need to take an incomplete in my class, and we can discuss your options. 

---

#### Projects

The bulk of your opportunity to learn computational physics and to demonstrate what you've learned
 will come from the computational projects you will complete throughout
the semester. You will have time during class to begin your projects, but you will also work on them outside
of class as homework. When you finish, email all of the code (the .c files), your report, and any auxiliary files (graphs, etc.) to
suphysics307@gmail.com so we can grade it. Please make our lives easier by putting (for instance)
“HW2” and your name in the subject line.

The most important part of your project is your report. The format of these reports can be somewhat
informal; most students in the past have simply typed their report in the body of an email or a plain text
file. You may also use Markdown or a word processor to prepare your reports; the Markdown editor Remarkable is installed on the 
course computer. 
The informal format should not compromise the quality or rigor of your analysis, however. They should
be clearly written, as you will be graded on the clarity of your thoughts. Note that code submitted without
a report will not be graded, even if it works perfectly. **You should dedicate multiple hours to writing your report**;
I am going to insist on a higher standard of presentation than I did in previous years.

In these reports, you should discuss any difficulties you encountered in your computational project, the basic
approach you took, what results you got, and why you got them. Did anything strange happen? Why do
you think it happened? You should also answer any specific questions asked in the assignment. Other than
that, we are not looking for any particular things; we expect you to use your own judgment and write about
things that you consider notable. If in doubt, the following points are often worth addressing, since they get
to the heart of computational science:

* Why is my calculation/simulation designed in the way that it is?
* How well does my calculation/simulation approximate physics?
* How do I know this?
* Are there any circumstances where the simulation breaks down or encounters difficulty?

Your grade will be based on your report; if it appears that your code is working properly, we may not even
read the code, especially later in the semester when computational issues will be more important. If something
goes wrong, of course, we will look at your code to try to figure out what happened.

Projects will be accepted up to 48 hours late for half credit; extensions will be given in extenuating circumstances
and will be handled on a case-by-case basis. You are more likely to get an extension on your
homework if you have made substantial progress before the deadline. If you are falling behind, *please ask me for help in advance*.
I am very willing to work with students to help them catch up, and I don't want anyone's grade to suffer because they got overwhelmed
by coursework and were unable to meet deadlines. 

#### Final exam: 

The final exam will be an opportunity for you to demonstrate skills you've not demonstrated already. Depending on which objectives
you are trying to ``pick up'', this will either consist of a conversation with me or a written quiz. Alternatively, at the suggestion
of previous years' students, we may all just say "eh, screw it" and go to the Star Wars movie that will be coming out during finals week.
(Physics 307 has a tradition of Star Wars-themed finals.)


---

#### Students with disabilities:

If you believe that you need accommodations for a disability, please contact the Office of Disability Services
(ODS), http://disabilityservices.syr.edu, located in Room 309 of 804 University Avenue, or call (315) 443-
4498 for an appointment to discuss your needs and the process for requesting accommodations. ODS is
responsible for coordinating disability-related accommodations and will issue students with documented
disabilities Accommodation Authorization Letters, as appropriate. Since accommodations may require early
planning and generally are not provided retroactively, please contact ODS as soon as possible.

More informally, if there is anything I can do for you, please ask me. I am around to help you, whether that
is with a disability, disruption due to illness, personal issues, or anything else. I have an excellent
working relationship with ODS, and am willing to do anything in my capability to ensure that my class is accessible
and welcoming to all. 

---

#### Academic Integrity:

I encourage you to work on your projects in groups, and to receive help from and offer help to your peers. You
must write your own code. I encourage you to get assistance from your peers with your work, although substituting
someone else’s understanding for your own constitutes academic dishonesty. In the event that you receive
substantial help from another student in writing your code, please acknowledge their help in the code comments.
If you actually copy-and-paste code from another source, you must

* understand how it works and what every piece of it does
* tell me explicitly which code you copied and where you copied it from

Some of your later projects may be group projects. In this case, obviously, you will share code/data/etc. and write
your report jointly, but everyone in the group is responsible for understanding everything the group submits.


The complete Syracuse University code of academic integrity can be found at
http://supolicies.syr.edu/ethics/acad integrity.htm.

---

#### Religious observances:

*(The following is common to all SU classes)*

SU's religious observances notification and policy, found at <http://hendricks.syr.edu/spiritual-life/index.html>,
recognizes the diversity of faiths represented among the campus community and protects the rights of students,
faculty, and staff to observe religious holidays according to their tradition. Under the policy, students are provided
an opportunity to make up any examination, study, or work requirements that may be missed due to a religious
observance provided they notify their instructors before the end of the second week of classes.
An online notification process is available for students in My Slice / StudentServices /
Enrollment / MyReligiousObservances / Add a Notification.

*(The following is specific to this class)*

I believe SU's religious observance policy discriminates against nonreligious people. Thus,
events of equal solemnity to major religious observances, occurring on inflexible dates, will be given the same deference as religious observances.
This includes weddings and commitment ceremonies of immediate family members, funerals, caregiving duties for sick family members, other family emergencies
or singularly-important events, job interviews, and the like. Note that I treat exceptionally close friends and romantic partners as family members.

If you need to miss class for such a reason, please notify Dr. Freeman as far in advance as practical to discuss arrangements.


