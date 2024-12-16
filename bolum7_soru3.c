#include<stdio.h>
int main()
{
    int tek[100],cift[100],i,N;
    printf("Pozitif bir sayı girin\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        if((i+1)%2==0)
        {
            cift[i]=i+1;
        }
        else
        {
            tek[i]=i+1;
        }
    }
    printf("---------------\n");
    printf("TEK SAYI DİZİSİ\n");
    printf("---------------\n");
    for(i=0;i<N;i=i+2)
    {
        printf("tek[%d]=%d\n",i,tek[i]);
    }
    printf("----------------\n");
    printf("ÇİFT SAYI DİZİSİ\n");
    printf("----------------\n");
    for(i=1;i<N;i=i+2)
    {
        printf("cift[%d]=%d\n",i,cift[i]);
    }
    return 0;
}