#include<stdio.h>
int mukemmel_sayi_bulma(int a)
{
    int i,toplam=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            toplam+=i;
        }
    }
    if(toplam==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int sonuc,sayi;
    printf("Bir sayı girin:");
    scanf("%d",&sayi);
    sonuc=mukemmel_sayi_bulma(sayi);
    if(sonuc==1)
    {
        printf("%d mükemmel bir sayıdır",sayi);
    }
    else
    {
        printf("%d mükemmel bir sayı değildir",sayi);
    }
    return 0;
}