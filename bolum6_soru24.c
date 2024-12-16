#include<stdio.h>
#include<stdlib.h>
int main()
{
    int oyuncu_sayisi,sayac=0,sayi;
    printf("Oyuncu sayısı gir:");
    scanf("%d",&oyuncu_sayisi);
    srand(time(0));
    while(1)
    {
        sayi=rand()%7;
        if(sayi!=0)
        {
            printf("%d. kişi=%d\n",sayac+1,sayi);
            sayac++;
        }
        if(sayac==oyuncu_sayisi)
        {
            exit(0);
        }
    }
    return 0;
}