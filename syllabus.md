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

- Tuesdays and Thursdays, 5:00-6:20, Physics Building 115
- Instructors:
    - **Walter Freeman**, lead instructor: <wafreema@syr.edu>, office Physics Building 215
    - **Nicholas Didio**, <nadidio@syr.edu>, graduate teaching assistant and grader
    - **Kathleen Monje**, <kcmonje@syr.edu>, and **Evan Lewis**, <eflewis@syr.edu>, undergraduate learning assistants 
- Course website: <http://walterfreeman.github.io/phys307/> (you are likely there already)
- Email address for questions: <suphysics307questions@gmail.com> (shared between instructors)
- Email address for homework submissions: <suphysics307@gmail.com> 
* Slack team for questions and conversation: <a href="https://suphysics.slack.com">suphysics.slack.com</a>
- Course computer: phy-compphysclass.syr.edu

---

### Asking for help

Please contact any of us with questions that arise outside of class; you will often get a prompt response. You can email us at <suphysics307questions@gmail.com>,
or stop by my office at Physics Building 215.

I encourage you to ask us to help
you debug your programs once you’ve made an effort to figure it out yourself; while learning to debug code
is important, I don’t want you to waste six hours trying to track down a missing minus sign or curly brace.
We are here to help you! As a general rule, if your program isn't compiling, email us after five to ten minutes of trying to figure out
what is wrong; if there is a bug of another sort, email us after fifteen to thirty minutes of trying to figure it out on your own. To encourage
you to ask for help, there's a participation component for the class -- and asking questions out of class will earn you points as well as helping
you learn things!

We will be covering a great deal of ground in this course, so if you don’t understand something or fall behind,
ask for help; that’s what I am for. Learning computational physics often involves a lot of personal coaching
and messy practice – it is more like learning to play the guitar than learning geography. (We will learn something about
guitars in our class, in fact!)

---

### Office hours

- Wednesdays and Fridays, 9:30-11:30, and others to be added
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
laptops to class and use those in lieu of the machines provided; this is probably the better solution if you
have a Mac or a laptop you want to install Linux on. If you need any help getting things working
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

Most of your grade will come from the projects that you will spend most of your time doing. We will also have a few in-class quizzes.

You will receive a participation grade based on both in-class and out-of-class participation. "Out-of-class participation", you say? Remember that
since this is a project-based class, I expect you to spend lots of time outside class working on your projects. You will likely have questions; ask
them to me, to your TA's, or to the teaching staff by either posting to the Slack channel or <a href="mailto:suphysics307questions@gmail.com">emailing us</a>.

Your score will be computed as follows:

* **Projects**: 70%
* **Participation**: 10%
* **Quizzes**: 10%
* **Final exam**: 10%

The final exam for this class may be unconventional; I am considering a "conversation exam" where students come to my office, singly or in pairs,
during the finals week and present their work to us. We'll figure that out as the semester progresses. We might also decide to just cancel the final,
in which event those points will be distributed evenly among the other categories.

*Incompletes:* A grade of "incomplete" is a provisional grade given to any student who is unable to complete the coursework during the 
semester due to unavoidable personal problems. In general, a student is eligible for an incomplete if they are substantially unable to 
come to class or study for a period of two weeks or more, or one week in the last month of class, due to personal illness or injury, 
illness or injury in the family (including significant others), legal involvement, or international issues. Please contact me if you
feel that you might need to take an incomplete in my class, and we can discuss your options. 

---

### Projects

The bulk of your opportunity to learn computational physics and to demonstrate what you've learned
 will come from the computational projects you will complete throughout
the semester. You will have time during class to begin your projects, but you will also work on them outside.
We will then apply these skills to model various physical situations, picking up new programming and computational skills along the way. One of
the most important is knowing how to interpret results from the computer, and when to suspect that your
simulation isn’t accurately reproducing what you want it to reproduce. Along the way, you'll discover how readily you can use computers to uncover 
insights about physics that aren't widely known.

While we will study computer programming and the Linux environment, and these things are important
aspects of this course, these are only tools; /the emphasis in this course will always be on the computational
aspect/, even though you will spend a lot of time programming. However, the C-on-Linux environment we will be using is the gold standard for scientific computing. 
The tools you will learn in my class are the same tools used to program ten-thousand-processor 
supercomputers, and you can transfer these skills to other environments and languages (such as Python) if that's what you use in your research.

If you are comfortable with any other programming languages (Python, Fortran, Java, Rust, Perl...) you may use those for my class as well. All of the 
graphics tools we will be using don't care what language generated the data.

---
### Students with disabilities:

If you believe that you need accommodations for a disability, please contact the <a href="http://disabilityservices.syr.edu">Office of Disability Services (ODS)</a>, located in Room 309 of 804 University Avenue, or call (315) 443- 4498 for an appointment to discuss your needs and the process for requesting accommodations. ODS is responsible for coordinating disability-related accommodations and will issue students with documented disabilities Accommodation Authorization Letters, as appropriate. Since accommodations may require early planning and generally are not provided retroactively, please contact ODS as soon as possible.

More informally, if there is anything I can do for you, please ask me. I am around to help you, whether that is with a disability, disruption due to illness, personal issues, or anything else. I have an excellent working relationship with ODS, and am willing to do anything in my capability to ensure that my class is accessible and welcoming to all.

---
### Academic Integrity:
I encourage you to work on your projects in groups, and to receive help from and offer help to your peers. You must write your own code, with the exception of "pair programming" exercises in which you will collaborate with another student to get started on
projects. I encourage you to get assistance from your peers with your work, although substituting someone else’s understanding for your own constitutes academic dishonesty. In the event that you receive substantial help from another student in writing your code, please acknowledge their help in the code comments. If you actually copy-and-paste code from another source, you must

* understand how it works and what every piece of it does
* tell me explicitly which code you copied and where you copied it from

Some of your later projects may be group projects. In this case, obviously, you will share code/data/etc. and write your report jointly, but everyone in the group is responsible for understanding everything the group submits.

The complete Syracuse University code of academic integrity can be found <a href="http://class.syr.edu/academic-integrity/policy/">online</a>, and its requirements are incorporated by reference.

---
### Religious observances:
*(The following is common to all SU classes)*

SU’s <a href="http://hendricks.syr.edu/spiritual-life/index.html">religious observances notification and policy</a> recognizes the diversity of faiths represented among the campus community and protects the rights of students, faculty, and staff to observe religious holidays according to their tradition. Under the policy, students are provided an opportunity to make up any examination, study, or work requirements that may be missed due to a religious observance provided they notify their instructors before the end of the second week of classes. An online notification process is available for students in My Slice / StudentServices / Enrollment / MyReligiousObservances / Add a Notification.

*(The following is specific to this class)*

I believe SU’s religious observance policy discriminates against nonreligious people by privileging religious observances over secular events of equal importance. Thus, events of equal solemnity to major religious observances, occurring on inflexible dates, will be given the same deference as religious observances. This includes weddings and commitment ceremonies of immediate family members, funerals, caregiving duties for sick family members, other family emergencies or singularly-important events, job interviews, and the like. Note that I treat exceptionally close friends and romantic partners as family members.

If you need to miss class for such a reason, please notify Dr. Freeman as far in advance as practical to discuss arrangements.
