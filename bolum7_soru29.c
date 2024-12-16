#include<stdio.h>
int main()
{
    int i,j,k,N;
    printf("N değeri girin:");
    scanf("%d",&N);
    for(i=N;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<N-i+2;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}