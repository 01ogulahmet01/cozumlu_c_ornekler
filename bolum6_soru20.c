#include<stdio.h>
int main()
{
    int i,kare=0,negatif,pozitif,sayac=0,ortalama;
        printf("Negatif bir tam sayı girin:");
        scanf("%d",&negatif);
        printf("Pozitif bir sayı girin:");
        scanf("%d",&pozitif);
    for(i=negatif;i<=pozitif;i++)
    {
        kare=kare+(i*i);
        sayac++;
    }
    ortalama=kare/sayac;
    printf("Kareleri toplamı:%d\n",kare);
    printf("Kareleri toplamının ortalaması:%d",ortalama);
}