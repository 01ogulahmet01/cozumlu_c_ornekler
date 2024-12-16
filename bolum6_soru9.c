#include<stdio.h>
int main()
{
    int i,j,N,M,toplam=0;
    printf("N değeri giriniz:");
    scanf("%d",&N);
    printf("M değeri giriniz:");
    scanf("%d",&M);
    i=1;
    do
    {
        j=1;
        do
        {
            toplam=toplam+((i*i)+(2*i*j)+(j*j));
            j++;
        }
        while(j<=M);
        i++;
    }
    while(i<=N);
    printf("%d",toplam);
    return 0;
}