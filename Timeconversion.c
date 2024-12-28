#include<stdio.h>
int main ()
{
    int n,h,m,s,d;
    scanf("%d",&n);
h=n/3600;
d=n%3600;
m=d/60;
s=n%60;
printf("%d:%d:%d\n",h,m,s);
return 0;

}