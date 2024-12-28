#include<stdio.h>
int main ()
{
    int a,b,t,f;
    scanf("%d%d",&a,&b);
    if(a>b){
    t=a-b;
    f=24-t;
    printf("O JOGO DUROU %d HORA(S)\n",f);
}
else if (a==b)
{
    printf("O JOGO DUROU 24 HORA(S)\n");
}
else
{
    t=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",t);
}
return 0;


}

