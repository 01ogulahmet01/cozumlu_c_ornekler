#include<stdio.h>
int main()
{
    int sayi,i=1,binary=0,gecici;
    printf("Bir sayı giriniz:");
    scanf("%d",&sayi);
    while(sayi!=0)
    {
        gecici=sayi%2;
        sayi=sayi/2;
        binary=binary+(gecici*i);
        i*=10;
    }
    printf("%d",binary);
    return 0;
}