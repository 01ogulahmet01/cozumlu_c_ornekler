#include<stdio.h>
int main()
{
    char x;
    printf("Bir karakter giriniz\n");
    scanf("%c",&x);
    if(x>='0' && x<='9')
    {
        printf("Rakam");
    }
    else
    {
        printf("Rakam değil");
    }
}