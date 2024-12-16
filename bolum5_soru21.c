#include<stdio.h>
int main()
{
    char x;
    printf("Küçük harf giriniz:\n");
    scanf("%c",&x);
    if(x<'a' || x>'z')
    {
        printf("Hatalı giriş yaptınız!!!");
    }
    else 
    {
        printf("%c",x-32);
    }
    return 0;
}