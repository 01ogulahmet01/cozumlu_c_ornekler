#include<stdio.h>
int main()
{
    int x,y;
    char islem;
    printf("İki sayıyı arada yapmak istediğiniz işlemin işaretini girerek giriniz:\n");
    scanf("%d\n%c\n%d",&x,&islem,&y);
    if(islem=='+')
    {
        printf("%d",x+y);
    }
    else if(islem=='-')
    {
        printf("%d",x-y);
    }
    else if(islem=='*')
    {
        printf("%d",x*y);
    }
    else if(islem=='/')
    {
        printf("%d",x/y);
    }
    else
    {
        printf("Hatalı işlem seçtiniz!!!");
    }
    return 0;
    
}