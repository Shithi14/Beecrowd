#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float sa;
    float a[5]={4.00,4.50,5.00,2.00,1.50};
    sa=a[x-1]*y;
    printf("%.2f\n",sa);
    return 0;

}
