
#include<stdio.h>
int main ()
{
    float a,b,c,x1,x2,s;
    scanf("%f%f%f",&a,&b,&c);
    s=sqrt(b*b-4*a*c);
    if(a<=0  && s<=0 )
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        x1=(-b+s)/(2*a);
        x2=(-b-s)/(2*a);
        printf("R1 = %.5f\n",x1);
        printf("R2 = %.5f\n",x2);
    }
    return 0;
}
