#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=100;i<1000;i++)
    {
        if(i%3==0)
        {
            if((i/10)%10==8)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}