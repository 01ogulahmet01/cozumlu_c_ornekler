#include<stdio.h>
int main()
{
    int i,dizi[10],gecici,toplam=0;
    printf("10 tane pozitif sayı girin:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&dizi[i]);
        if(i!=0)
        {
            if(dizi[i]<dizi[i-1])
            {
                gecici=dizi[i];
                dizi[i]=dizi[i-1];
                dizi[i-1]=gecici;
            }
        }
    }
    toplam=dizi[0]+dizi[9];
    printf("Dizideki en büyük ve en küçük sayıların toplamı:%d",toplam);
    return 0;
}