#include<stdio.h>
int main()
{
    int x;
    printf("Haftanın gününü sayı olarak giriniz\n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("Pazartesi");
    }
    else if(x==2)
    {
        printf("Salı");
    }
    else if(x==3)
    {
        printf("Çarşamba");
    }
    else if(x==4)
    {
        printf("Perşembe");
    }
    else if(x==5)
    {
        printf("Cuma");
    }
    else if(x==6)
    {
        printf("Cumartesi");
    }
    else if(x==7)
    {
        printf("Pazar");
    }
    else 
    {
        printf("Hatalı giriş yaptınız!!!");
    }
    return 0;
}