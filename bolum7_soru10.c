#include<stdio.h>
int main()
{
    int i,j,dizi[10],kontrol=1;
    printf("10 tane pozitif sayı girin:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&dizi[i]);
    }
    printf("------------\n");
    printf("Asal Sayılar\n");
    printf("------------\n");
    for(i=0;i<10;i++)
    {
        if(dizi[i]==1)
        {
            continue;
        }
        kontrol=1;
        for(j=2;j<dizi[i];j++)
        {
            if(dizi[i]%j==0)
            {
                kontrol=0;
            }
        }
        if(kontrol==1)
        {
            printf("%d\n",dizi[i]);
        }
    }
    return 0;
}