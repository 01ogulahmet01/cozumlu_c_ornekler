#include<stdio.h>
int buyuk_bulma(int a,int b)
{
    int buyuk;
    printf("Birinci sayıyı girin:");
    scanf("%d",&a);
    printf("İkinci sayıyı girin:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d > %d",a,b);
    }
    else
    {
        printf("%d > %d",b,a);
    }
    return 0;
}
int main()
{
    int a,b;
    buyuk_bulma(a,b);
    return 0;
}