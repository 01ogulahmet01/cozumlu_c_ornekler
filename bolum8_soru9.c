#include<stdio.h>
int tek_cift_bulma(int a)
{
    if(a<0)
    {
        return 0;
    }
    else if(a==0)
    {
        return 1;
    }
    else
    {
        if(a%2==0)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
}
int main()
{
    int sayi,sonuc=0;
    printf("Pozitif bir sayı girin:");
    scanf("%d",&sayi);
    sonuc=tek_cift_bulma(sayi);
    if(sonuc==0)
    {
        printf("Negatif bir sayı girdiniz!!!");
    }
    else if(sonuc==1)
    {
        printf("Sıfır rakamını giridiniz!!!");
    }
    else if(sonuc==2)
    {
        printf("Çift sayı");
    }
    else
    {
        printf("Tek sayı");
    }
    return 0;
}