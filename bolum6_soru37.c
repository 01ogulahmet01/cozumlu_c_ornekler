#include<stdio.h>
int main()
{
    int i,j,k,sayi,kupu;
    for(i=1;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            for(k=0;k<10;k++)
            {
                sayi=100*i+10*j+1*k;
                kupu=(i*i*i)+(j*j*j)+(k*k*k);
                if(sayi==kupu)
                {
                    printf("%d\n",sayi);
                }
            }
        }
    }
}