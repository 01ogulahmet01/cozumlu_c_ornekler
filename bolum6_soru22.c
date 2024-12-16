#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=7;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",k);
        }
        if(k==0)
        {
            k=1;
        }
        else
        {
            k=0;
        }
        printf("\n");
    }
}