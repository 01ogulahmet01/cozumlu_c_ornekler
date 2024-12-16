#include<stdio.h>
int main()
{
    int x,i=0,N,toplam=0,ortalama;
    printf("Kaç adet sayı girilecek?\n");
    scanf("%d",&N);
    for (i;i<N;i++)
    {
        printf("%d.sayıyı gir\n",i+1);
        scanf("%d",&x);
        toplam+=x;
    }
    ortalama=toplam/N;
    printf("Sayıların toplamı:%d\n",toplam);
    printf("Sayıların ortalaması:%d",ortalama);
    return 0;
}