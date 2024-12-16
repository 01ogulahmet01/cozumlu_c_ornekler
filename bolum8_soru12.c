#include<stdio.h>
int binary(int sayi)
{
    int islem_sayisi,sonuc=0,i=1;
    do
    {
        islem_sayisi=sayi % 2;
        sayi=sayi/2;
        sonuc+=islem_sayisi*i;
        i=i*10;
    }while(sayi!=0);
    return sonuc;
}
int main()
{
    int a;
    printf("Decimal sayı girin:");
    scanf("%d",&a);
    printf("%d",binary(a));
    return 0;
}
