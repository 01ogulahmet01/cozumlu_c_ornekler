#include<stdio.h>
#include<math.h>
int main()
{
    int dizi[20],n_kuvveti[20],i,N;
    printf("Br kuvvet giriniz:");
    scanf("%d",&N);
    for(i=0;i<20;i++)
    {
        dizi[i]=i+1;
        n_kuvveti[i]=pow(i+1,N);
        printf("dizi[%d]'nin %d. kuvveti=%d\n",i,N,n_kuvveti[i]);
    }
    return 0;
}