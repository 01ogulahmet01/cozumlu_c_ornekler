#include<stdio.h>
#include<math.h>
int main()
{
    int dizi[20],i,kare[20];
    for(i=1;i<=20;i++)
    {
        dizi[i]=i+1;
        kare[i]=pow(i+1,2);
    }
    for(i=1;i<=20;i++)
    {
        printf("kare[%d]=%d\n",i,kare[i]);
    }
    return 0;
}