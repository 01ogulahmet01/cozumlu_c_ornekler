#include<stdio.h>
int main()
{
    int yas;
    printf("Yaş giriniz\n");
    scanf("%d",&yas);
    if(yas>=2 && yas<=14)
    {
        printf("15 yaş altı");
    }
    else if(yas>=15 && yas<=17)
    {
        printf("Yıldız");
    }
    else if(yas>=18 && yas<=19)
    {
        printf("Gençler");
    }
    else if(yas>=20 && yas<=22)
    {
        printf("23 yaş altı");
    }
    else if(yas>=23 && yas<=35)
    {
        printf("Büyükler");
    }
    else 
    {
        printf("Hatalı giriş yaptınız!!!!");
    }
    return 0;
}