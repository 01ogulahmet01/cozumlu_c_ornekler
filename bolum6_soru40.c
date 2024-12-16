#include<stdio.h>
int main()
{
    int i,j,N;
    double toplam=0,faktoriyel;
    printf("N değeri girin:\n");
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        faktoriyel=1;
        for(j=1;j<=i;j++)
        {                   //N:3
            faktoriyel*=j;//f:1   f:2     f:6     
        }
        toplam+=1/faktoriyel;
    }
    printf("%f",toplam);
    return 0;
}