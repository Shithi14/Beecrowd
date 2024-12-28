#include<stdio.h>
int main ()
{
    float a,b,s;
    scanf("%f%f",&a,&b);
    s=((a*3.5)+(b*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n",s);
    return 0;
}