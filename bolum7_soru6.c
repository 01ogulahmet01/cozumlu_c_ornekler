#include<stdio.h>
int main()
{
    int i,j,dizi[10];
    printf("Pozitif değerler giriniz:\n");
    for(i=0;i>=0;i++)
    {
        scanf("%d",&dizi[i]);
        if(dizi[i]<0)
        {
            break;
        }
    }
    for(j=0;j<i;j++)
    {            
        printf("dizi[%d]=%d\n",j,dizi[j]);
    }
return 0;
}