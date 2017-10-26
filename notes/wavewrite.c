#include <stdio.h>
#include<math.h>

int main()
{
  int nn,i,n;
  scanf("%d",&nn);
  
  char foo;
  nn = nn*2 + 36;
  printf("RIFF");
  for (i=0;i<4;i++)
    {
    foo = *((unsigned char *)(&nn)+i);
    printf("%c",foo);
    }
  nn -= 36;
  nn /= 2;
  printf("WAVE");
  printf("fmt %c%c%c%c%c%c%c%c",16,0,0,0,1,0,1,0);
  n=22050;
  for (i=0;i<4;i++)
    {
    foo = *((unsigned char *)(&n)+i);
    printf("%c",foo);
    }
  n=44100;
  for (i=0;i<4;i++)
    {
    foo = *((unsigned char *)(&n)+i);
    printf("%c",foo);
    }
  printf("%c%c%c%c",2,0,16,0);
  printf("data");
  n=nn*2;
  for (i=0;i<4;i++)
    {
    foo = *((unsigned char *)(&n)+i);
    printf("%c",foo);
    }
  double x;
  int j;
  for (i=0;i<nn;i++)
  {
    scanf("%lf",&x);
    n=x*32768;
    printf("%c%c",*((unsigned char *)(&n)),*((unsigned char *)(&n)+1));
  }
}
