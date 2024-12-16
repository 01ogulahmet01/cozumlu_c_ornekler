#include<stdio.h>
int main()
{
    int tek_toplam=0,cift_toplam=0,N,i;
    printf("Bir sayı giriniz:\n");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        if(i%2==0)
        {
            cift_toplam+=i;
        }
        else
        {
            tek_toplam+=i;
        }
    }
    printf("Tek sayıların toplamı:%d\n",tek_toplam);
    printf("Çift sayıların toplamı:%d",cift_toplam);
    return 0;
}