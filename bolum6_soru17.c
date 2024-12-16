#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sayi,basamak,kare,toplam=0,i=0;
    printf("Bir sayı girin:");
    scanf("%d",&sayi);
    while(sayi>0)
    {
        basamak=sayi%10;
        kare=basamak*basamak;
        sayi=sayi/10;
        toplam+=kare;
        i++;
    }
    printf("%d",toplam);
    return 0;
}