#include<stdio.h>
int main ()
{
    char str[50];
    double a,b,s;

    scanf("%s%lf%lf",str,&a,&b);
    s=a+(b*0.15);
    printf("TOTAL = R$ %.2lf\n",s);
    return 0;
}