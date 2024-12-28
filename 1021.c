#include<stdio.h>
int main ()
{
    float N;
    scanf("%f",&N);
    printf("%f\n",N);
    printf("%f\n",N/100);
    N=N%100;
    printf("%f\n",N/50);
    N=N%50;
    printf("%f\n",N/20);
    N=N%20;
    printf("%f\n",N/10);
    N=N%10;
    printf("%f\n",N/5);
    N=N%5;
    printf("%f\n",N/2);
    N=N%2;
    printf("%f\n",N);

}
