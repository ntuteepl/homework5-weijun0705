#include <stdio.h>
#include <stdlib.h>

int main()
{float  a,b,c,d;
scanf("%f%f",&a,&b);
c=(double)a*360/12+b*0.5-b*360/60;
if(c<0)
{
    d=(double)c+180;
}
else if(c>=0&&c<=180)
{
d=c;
}
else if (c>180)
{
  d=(double)360-c;
}

printf("%.3f",d);
}
