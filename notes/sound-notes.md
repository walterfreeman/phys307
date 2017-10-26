---
category: Notes
layout: default
navtitle: Sound output 
permalink: notes/audio.html
use_math: true
---

<center><h1>Notes on sound output</h1></center>

In this assignment, you have the option of making audio output of the behavior of your simulation. I'm providing you a program to do this; it comes in two parts, which
you'll need to download and install if you're working on your own laptop. The instructions for this are at the end of the file.

### Generating the data

A computer sound file consists of a set of data for "sound pressure vs. time". So, you can take *any* data file you have and tell the computer it contains data for 
pressure vs. time and play it over your speakers. However, you'll need to convert it into a computer audio format first. I've written a program that will do that.

My program:

* automatically normalized the data, so you don't need to worry about that. If your data contains a very large "spike", it will attempt to do the intelligent thing
and clip it.
* removes "pops" at the beginning and end of your data, so you don't need to worry about that
* allows you to speed up or slow down your data, so it lies within the range of human hearing

It is most certainly not

* pretty.

The input format is simply two columns of numbers: time and (whatever else). The program assumes that the time values are evenly spaced in time.
So, for instance, if you wanted to convert the oscillations of your neutron stars into
sound, you could just write something like `printf ("%e %e\n",t,vx1);` in your code -- this is the same format that `plot` uses, so you can plot the same data.

### Data you can hear

The human hearing range is from 20 Hz to 20 kHz. However, laptop speakers have difficulty playing sounds below 125 Hz or so, and headphones will have difficulty below
40 or 50 Hz unless they are very high quality. (This is why people have subwoofers and such.) You should consider what the frequency (1/period) of your input signal is
and then use the "speed factor" option in `makeaudio` to ensure that you can hear your signal. 

### Using makeaudio

The command is `makeaudio (filename) (speed factor)`. *Filename* is the name of the file you want to create; this program creates sound files in the .wav format,
so if your filename doesn't end in .wav, that will be appended. The speed factor is how much to speed up or slow the signal down by; this can be used to frequency-shift
your input signal to match the range of human hearing.

The program expects some data on its standard input, much like `anim`, so you can use it with a command like:

```
makeaudio test.wav 3 < timedata.txt
```

or 

```
./my_simulation | makeaudio test.wav 3
```

which will take the data either from the input file `timedata.txt` or the output of your program `my_simulation`, 
speed it up by a factor of 3, and create the file `test.wav`.

You'll see some output like:

```
Read 100000 points so far = 3.333333 sec


Done reading.
123700 points covering 4.123333 sec, speed multiplier 3, samples 90919, 0.735000 samples per data point
Writing test.wav to disk, speedup 3
```

The output will tell you how long your sound file will be (in this case 4.12 seconds), what speedup result you gave, and then some details about the resampling
to a 22.050kHz audio file. (The thing you need to know: if the number of samples per data point is much bigger than 1, you will get bad quality. The program
will throw a warning at that point and tell you to print out your value more often.)


### Getting makeaudio

To get a copy of makeaudio, download the C program <a href="wavewrite.c">here</a> and the Perl frontend to it <a href="makeaudio">here</a>. Save those into your 
Physics 307 directory, and...

* Compile wavewrite: `gcc wavewrite.c -o wavewrite -O4`
* Make sure that makeaudio has execute permissions: `chmod +x makeaudio`
* Copy wavewrite and makeaudio to your system directory: `sudo cp wavewrite makeaudio /usr/local/bin`

That's it!

If you want a command-line tool to play sound files on Linux, get a copy of sox: `sudo apt install sox`. Then you can just say `play something.wav`.

If you have a Mac, Google says `afplay` works. Or you can click on it in Finder...

On a Windows box, you'll need to use winscp to copy it to your local machine and then doubleclick on it.
