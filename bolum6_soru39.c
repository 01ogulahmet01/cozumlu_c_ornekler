#include<stdio.h>
int main()
{
    int i,j;
    printf("\t");
    for(i=0;i<10;i++)
    {
        printf("%d\t",i+1);
    }
    printf("\n");
    printf("------------------------------------------------------------------------------------------");
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d |\t",i+1);
        for(j=0;j<10;j++)
        {
            printf("%d\t",(i+1)*(j+1));
        }
        printf("\n");
    }
    return 0;
}