#include<stdio.h>
#include<stdlib.h>
int main()
{
    int toplam=0,i;
    for(i=1;i<100;i++)
    {
        toplam=toplam+i;
        printf("%d. duraktaki yolcu sayısı:%d\n",i,toplam);
    }
    printf("Son duraktaki yolcu sayısı=%d",toplam);
    return 0;
}