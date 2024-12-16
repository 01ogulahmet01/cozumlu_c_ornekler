#include<stdio.h>
int main()
{
    int x,sonuc;
    printf("Bir sayı giriniz:\n");
    scanf("%d",&x);
    sonuc= x % 2;
    switch(sonuc)
    {
        case 0:
        printf("%d bir çift sayıdır",x);
        break;
        case 1:
        printf("%d bir tek sayıdır",x);
    }
    return 0;
}