#include<stdio.h>
int main()
{
    int i,j,n,toplam=0;
    printf("n değeri girin:\n");
    scanf("%d",&n);
    int dizi[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d. satır %d. sütun:",i+1,j+1);
            scanf("%d",&dizi[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            toplam+=dizi[i][j];
        }
    }
    printf("\n\n");
    printf("Toplam=%d",toplam);
}