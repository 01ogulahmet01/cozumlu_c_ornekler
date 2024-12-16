#include<stdio.h>
int main()
{
    int i=1,faktoriyel=1,sayi;
    printf("Bir sayı giriniz:");
    scanf("%d",&sayi);
    for(i;i<=sayi;i++)
    {
        faktoriyel*=i;
    }
    printf("%d! = %d",sayi,faktoriyel);
    return 0;
}