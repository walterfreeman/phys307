#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double g=9.8;
double L=1;

void advance_euler(double &theta, double &omega, double dt)
{
  double thetanew;
  double omeganew;
  thetanew = theta + omega*dt;
  omeganew = omega - g/L * sin(theta)*dt;
  theta=thetanew;
  omega=omeganew;
}

void advance_rk2(double &theta, double &omega, double dt)
{
  double thetahalf;
  double omegahalf;
  thetahalf = theta + omega*dt/2;
  omegahalf = omega - g/L * sin(theta)*dt/2;
  theta = theta + omegahalf*dt;
  omega = omega - g/L * sin(thetahalf)*dt;
}

void advance_euler_cromer_1(double &theta, double &omega, double dt)
{
  theta = theta + omega*dt;
  omega = omega - g/L * sin(theta)*dt;
}


void advance_euler_cromer_2(double &theta, double &omega, double dt)
{
  omega = omega - g/L * sin(theta)*dt;
  theta = theta + omega*dt;
}

void advance_leapfrog(double &theta, double &omega, double dt)
{
  advance_euler_cromer_1(theta,omega,dt/2);
  advance_euler_cromer_2(theta,omega,dt/2);
}



int main(int argc, char **argv)
{
  if (argc<4) 
  {
    printf("!Usage: <this> <timestep> <amplitude> <solver> <frameskip>, where 0=Euler, 1=RK2, 2,3=Euler-Cromer, 4=leapfrog\n");
    exit(0);
  }
  
  double dt=atof(argv[1]);
  double amp=atof(argv[2]);
  int solver=atoi(argv[3]);

  double omega,theta,thetainit;
  double omeganew,thetanew;
  double t;
  double g=9.8,L=1;
  double delta;
  double sap=2*M_PI*sqrt(L/g);
  long double E;
  int frame=0,frameskip=100;

  if (argc>=5)
  {
    frameskip=atoi(argv[4]);
  }

  theta=amp;
  omega=0;
  long double E0=0.5*L*L*omega*omega - cos(theta)*L*g;
  int flag=0;
  double period;
  for (t=0;1;t+=dt)
  {
    if (solver == 0)
      advance_euler(theta,omega,dt);
    else if (solver == 1)
      advance_rk2(theta,omega,dt);
    else if (solver == 2)
      advance_euler_cromer_1(theta,omega,dt);
    else if (solver == 3)
      advance_euler_cromer_2(theta,omega,dt);
    else if (solver == 4)
      advance_leapfrog(theta,omega,dt);

    
 
    frame++;
    if (frame % frameskip == 0)
    {
      E=0.5*L*L*omega*omega - cos(theta)*L*g;
      printf("T -0.3 0.5\n");
      printf("Change in energy: %+.3Le\n",E-E0);
      if (solver == 0)
        printf("T -0.3 0.4\nEuler solver, timestep %.2e\n",dt);
      else if (solver == 1)
        printf("T -0.3 0.4\nRK2 solver, timestep %.2e\n",dt);
      else if (solver == 2)
        printf("T -0.3 0.4\nEuler-Cromer \"backward\" solver, timestep %.2e\n",dt);
      else if (solver == 3)
        printf("T -0.3 0.4\nEuler-Cromer \"forward\" solver, timestep %.2e\n",dt);
      else if (solver == 4)
        printf("T -0.3 0.4\nLeapfrog solver, timestep %.2e\n",dt);

      if (flag)
      {
        printf("T -0.3 0.3\nAmplitude = %.3e, period = %.3e (shift %.3e)\n",amp,period,period-2*M_PI*sqrt(L/g));
      }
      printf("l 0 0 %e %e\n",sin(theta),-cos(theta));
      printf("c %e %e 0.05\n",sin(theta),-cos(theta));
      printf("F\n");
    }
//    printf("!t=%e omega=%e\n",t+dt,omega);  // put here to debug interpolation
    if (theta < 0 && flag==0)
    {
      flag=1;
      period = 4 * (t+dt-theta/omega);
      printf("!Period is %e\n",period);
    }
  }
}
