#include<stdio.h>
int main()
{
    int i,j,N;
    printf("N değeri girin:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}