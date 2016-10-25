#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double g=9.8,L=1;

double alpha(double theta)
{
  return -g/L*sin(theta);
}

double leapfrog(double &angle, double &omega, double dt)
{
  angle = angle + omega*dt/2;
  omega = omega + alpha(angle)*dt;
  angle = angle + omega*dt/2;   
}

int main(int argc, char **argv)
{
  double theta=1, omega=0, dt=1e-2;
  double t;
  int frame=0,frameskip=10;

  dt = atof(argv[1]);
  frameskip = atoi(argv[2]);
  theta = atof(argv[3]);

  for (t=0;t<1e6;t = t+dt)
  {
    leapfrog(theta,omega,dt);
    if (frame % frameskip == 0)
    {
      printf("l 0 0 %e %e\n",L*sin(theta),-L*cos(theta));
      printf("F\n");
    }
    frame++;
  }
}
