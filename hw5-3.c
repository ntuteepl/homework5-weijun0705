
int main()
{float  a,b,c;
scanf("%f%f",&a,&b);
if(a<=60)
{
    c=(double)b*a;
}
else if(a>60&&a<=120)
{
c=(double)b*60+b*(a-60)*1.33;
}
else if (a>120)
{
  c=(double)b*60+b*60*1.33+b*(a-120)*1.66;
}

printf("%.1f",c);
}
