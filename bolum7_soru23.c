#include<stdio.h>
int main()
{
    int dizi[30],gecici[30],i,j,k,m,satir;
    printf("Kaç satır oluşturulacak:");
    scanf("%d",&satir);
    gecici[0]=1;
    dizi[0]=1;
    for(j=0;j<satir;j++)
    {
        printf(" ");
    }
    printf(" 1\n");
    for(i=1;i<satir;i++)
    {
        for(j=0;j<satir-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<i;k++)
        {
            dizi[k]=gecici[k-1]+gecici[k];
        }
        dizi[i]=1;
        for(m=0;m<=i;m++)
        {
            printf("%2d",dizi[m]);
            gecici[m]=dizi[m];
        }
        printf("\n");
    }
    return 0;
}