#include<stdio.h>
int main()
{
    int i,ilk,son;
    printf("Başlangıç yılını giriniz:");
    scanf("%d",&ilk);
    printf("Bitiş yılını giriniz:");
    scanf("%d",&son);
    for(i=ilk;i<=son;i++)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}