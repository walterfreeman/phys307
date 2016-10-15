#include <stdio.h>
#include <math.h>

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

int main(void)
{
  double theta=1, omega=0, dt=1e-2;
  double t;

  for (t=0;t<1e6;t = t+dt)
  {
    leapfrog(theta,omega,dt);
    printf("l 0 0 %e %e\n",L*sin(theta),-L*cos(theta));
    printf("F\n");
  }
}
