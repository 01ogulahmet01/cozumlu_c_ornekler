#include<stdio.h>
int main()
{
    int i,dizi[100],key[100],N;
    printf("Gireceğiniz sayı adedini girin:\n");
    scanf("%d",&N);
    printf("Pozitif tamsayılar girin:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&dizi[i]);
    }
    for(i=0;i<N;i++)
    {
        key[i]=dizi[i];
    }
    dizi[N]=dizi[0];
    for(i=0;i<N;i++)
    {
        dizi[i]=dizi[i+1];
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",key[i]);
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",dizi[i]);
    }
    return 0;
}