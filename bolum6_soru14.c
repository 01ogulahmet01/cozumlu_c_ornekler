#include<stdio.h>
int main()
{
    int alt_sinir,ust_sinir,i=0,j,kontrol;
    printf("Alt ve üst sınırı girin:");
    scanf("%d\n%d",&alt_sinir,&ust_sinir);
    i=alt_sinir;
    while(i<=ust_sinir)
    {
        kontrol=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                kontrol=0;
            }
        }
        if(kontrol==1)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}