#include<stdio.h>
int main()
{
    float beslik,i;
    for(i=1.25;i<=5.01;i=i+0.01)
    {
        beslik=(i-1.25)*18.667+30;
        printf("%.2f=%.2f \n",i,beslik);
    }
    return 0;
}