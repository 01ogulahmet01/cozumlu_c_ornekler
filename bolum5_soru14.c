#include<stdio.h>
int main()
{
    int yıl;
    printf("Yıl giriniz:\n");
    scanf("%d",&yıl);
    if(yıl%4==0)
    {
        printf("Artık yıl değil. Şubat ayı 29 çekiyor");
    }
    else
    {
        printf("Artık yıl. Şubat ayı 28 çekiyor");
    }
    return 0;
}