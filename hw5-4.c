#include <stdio.h>
#include <stdlib.h>

int main()
{float  a,b,c,d,e;
scanf("%f%f",&a,&b);
c=(double)a*360/12+b*0.5;
d=(double)b*360/60;
if(c>d)
{
   e=c-d ;
}
else if(c<d)
{
e=d-c;
}
else if (c=d)
{
  e=0;
}


if(e>180)
    e=e-180;

else
    e=e;
printf("%.3f",e);
}
