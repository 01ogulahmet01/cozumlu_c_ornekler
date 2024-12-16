#include<stdio.h>
int main()
{
    int x;
    printf("Bir saat giriniz (PM):\n");
    scanf("%d",&x);
    if(x>=12 && x<18)
    {
        printf("Öğleden sonra ");
    }
    else if(x>=18 && x<24)
    {
        printf("Akşam");
    }
    else
    {
        printf("Hatalı giriş yaptınız!!!");
    }
    return 0;
}