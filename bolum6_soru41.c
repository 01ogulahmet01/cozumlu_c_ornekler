#include<stdio.h>
int main()
{
    int i,j,satir,sayac=1;
    printf("Satır adedi girin:\n");
    scanf("%d",&satir);
    for(i=0;i<satir;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",sayac);
            sayac++;
        }
        printf("\n");
    }
    return 0;
}