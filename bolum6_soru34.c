#include<stdio.h>
int main()
{
    int i,j,N;
    printf("Pozitif bir sayı girin:\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=N;j>i;j--)
        {
            printf(" ");
        }
        for(j=0;j<N;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}