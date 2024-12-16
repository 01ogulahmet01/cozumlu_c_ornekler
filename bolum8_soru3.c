#include<stdio.h>
long faktoriyel(int a)
{
    int i;
    long sonuc=1;
    for(i=1;i<=a;i++)
    {
        sonuc*=i;
    }
    return sonuc;
}
int main()
{
    int sayi,fakt;
    printf("sayı girin:");
    scanf("%d",&sayi);
    printf("%d! = %d",sayi,faktoriyel(sayi));
    return 0;
}