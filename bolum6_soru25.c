#include<stdio.h>
int main()
{
    float i,toplam=0;
    int N;
    printf("Bir sayı girin:");
    scanf("%d",&N);
    for(i=0;i<=N;i=i+0.02)
    {
        toplam=toplam+i;
    }
    printf("Toplam=%.2f",toplam);
    return 0;
}