#include<stdio.h>
int main()
{
    int sayi,sayi2,tersi=0,i,basamak;
    printf("Bir sayı girin:\n");
    scanf("%d",&sayi);
    sayi2=sayi;
    for(i=0;sayi2>0;i++)
    {
        basamak=sayi2%10;
        sayi2/=10;
        tersi=tersi*10+basamak;
    }
    if(tersi==sayi)
    {
        printf("Palindrom sayı");
    }
    else
    {
        printf("Palindrom sayı değil");
    }
    return 0;
}