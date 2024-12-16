#include<stdio.h>
int main()
{
    float a,b;
    printf("İki tam sayı giriniz:\n");
    scanf("%d\n%d",&a,&b);
    if(b==0)
    {
        printf("Bölünen sayı 0 olamaz. Sonuç tanımsız olur!!!!");
    }
    else
    {
        printf("%.3f",a/b);
    }
}