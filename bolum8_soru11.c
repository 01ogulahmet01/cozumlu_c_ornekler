#include<stdio.h>
int armstrong_bulma(int sayi)
{
    int toplam=0,yedek=sayi;
    while(sayi>0)
    {
        int basamak=sayi%10;   
        toplam+=basamak*basamak*basamak;
        sayi=sayi/10;
    }
    return toplam==yedek;
}
int main()
{
    int i;
    for(i=100;i<1000;i++)
    {
        if(armstrong_bulma(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}