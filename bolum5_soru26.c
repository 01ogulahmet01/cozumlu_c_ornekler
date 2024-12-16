#include<stdio.h>
int main()
{
    char x;
    printf("İngilizce bir küçük harf giriniz:\n");
    scanf("%c",&x);
    switch(x)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("Sesli harf");
        break;
        default:
        printf("Sesli harf değil");
        break;
    }
    return 0;
}