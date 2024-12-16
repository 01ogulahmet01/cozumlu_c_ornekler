#include<stdio.h>
int main()
{
    char x;
    printf("Büyük ya da küçük harf giriniz:\n");
    scanf("%c",&x);
    if(x>='A' && x <='Z')
    {
        printf("Büyük harf girdiniz");
    }
    else if(x>='a' && x<='z')
    {
        printf("Küçük harf girdiniz");
    }
    else
    {
        printf("Hatalı giriş yaptınız!!!");
    }
    return 0;
}