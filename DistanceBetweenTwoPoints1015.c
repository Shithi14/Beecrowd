#include<stdio.h>
#include<math.h>

int main ()
{
    double x1,y1,x2,y2,a,b;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
double dis=sqrt(a+b);
printf("%.4lf\n",dis);
return 0;
}