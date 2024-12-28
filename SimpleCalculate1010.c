#include<stdio.h>
int main ()
{
    int a,b,c,d;
    float m,n,total;
    scanf("%d %d %f",&a,&b,&m);
    scanf("%d %d %f",&c,&d,&n);
    total=(b*m)+(d*n);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}