#include<stdio.h>
int main()
{
    int ay;
    printf("Sayı olarak bir ay giriniz:\n");
    scanf("%d",&ay);
    switch(ay)
    {
        case 1:
        printf("Ocak ayı 31 çekiyor");
        break;
        case 2:
        printf("Şubat ayı artık yılllarda 28 diğer yıılarda 29 çeker");
        break;
        case 3:
        printf("Mart ayı 31 çekiyor");
        break;
        case 4:
        printf("Nisan ayı 30 çekiyor");
        break;
        case 5:
        printf("Mayıs ayı 31 çekiyor");
        break;
        case 6:
        printf("Haziran ayı 30 çekiyor");
        break;
        case 7:
        printf("Temmuz ayı 31 çekiyor");
        case 8:
        printf("Ağusatos ayı 31 çekiyor");
        break;
        case 9:
        printf("Eylül ayı 30 çekiyor");
        break;
        case 10:
        printf("Ekim ayı 31 çekiyor");
        break;
        case 11:
        printf("Kasım ayı 30 çekiyor");
        break;
        case 12:
        printf("Aralık ayı 31 çekiyor");
        break;
    }
    return 0;
}