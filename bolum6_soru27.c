#include<stdio.h>
int main()
{
    int i,j,carpım=0;
    for(i=1;i<11;i++)
    {
        for(j=1;j<11;j++)
        {
            carpım=i*j;
            printf("%d*%d=%d\n",i,j,carpım);
        }
    printf("\n");
    }
    return 0;
}