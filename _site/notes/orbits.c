#include <stdio.h>
#include <math.h>
#include "vector.h"

int main(void)
{
  double G = 4*M_PI*M_PI;
  double dt = 0.01;
  vector position(1,0,0), velocity(0,2*M_PI,0);

  while (true)
  {
    position = position + velocity * dt/2;
    velocity += -(G*position / pow(mag(position),3)*dt);
    position = position + velocity * dt/2;
    printf("C 1 1 0\nc3 0 0 0.1\nC 0.5 0.5 1\nct3 0 %e %e %e 0.05\nF\n",position.x, position.y, position.z);
  }
}   
