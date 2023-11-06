#include <stdio.h>
#include <stdlib.h>

int main()
{
   float c,f;
   scanf("%f",&c);
   if(c<=800)
    {
        f=(double)c*0.9;
    }
   else if (c>800&&c<=1500)
    {
     f=(double)c*0.9*0.9;
    }
    else if(c>1500)
    {
        f=(double)c*0.9*0.79;
}

printf("%.1f",f);
}

