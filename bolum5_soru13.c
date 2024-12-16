#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,delta;
    float x1,x2;
    printf("x^2, x ve sabit sayının kat sayısını giriniz:\n");
    scanf("%d%d%d",&a,&b,&c);
    delta=pow(b,2)-4*a*c;
    x1=(-b+sqrt(pow(b,2)-4*a*c))/2;
    x2=(-b-sqrt(pow(b,2)-4*a*c))/2;
    if(delta<0)
    {
        printf("Denkleminin reel kökü yoktur");
    }
    else if(delta==0)
    {
        printf("Denkleminin çakışık iki kökü vardır\n1. kök:%f\n 2. kök:%f",x1,x2);
    }
    else
    {
        printf("Denkleminin reel iki kökü vardır\n1. kök:%f\n 2. kök:%f",x1,x2);
    }
}