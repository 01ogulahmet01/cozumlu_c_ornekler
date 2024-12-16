#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("n değeri girin:\n");
    scanf("%d",&n);
    printf("m değeri girin:\n");
    scanf("%d",&m);
    int dizi[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d. satır %d. sütunu girin:\n",i+1,j+1);
            scanf("%d",&dizi[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d. satır %d. sütun:%d\n",i+1,j+1,dizi[i][j]);
        }
    }
}