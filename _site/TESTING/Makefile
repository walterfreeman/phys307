anim: anim.c vector.h makepng.c makepng.h
	g++ makepng.c anim.c -lGL -lGLU -lglut -lGLEW -lpng -lm -o anim -O4

anim-linux: anim.c
	g++ anim.c -lGL -lGLU -lglut -lGLEW  -lm -o anim 

anim-mac: anim-mac.c
	g++ anim-mac.c -framework GLUT -framework OpenGL -framework Cocoa -o anim -I/usr/local/include/

membrane: membrane.C
	g++ membrane.C -lm -O4 -o membrane

install:
	cp anim /usr/local/bin/
