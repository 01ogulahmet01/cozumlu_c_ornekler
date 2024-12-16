#include<stdio.h>
int main()
{
    int islem,sayi1,sayi2;
    printf("İşlem seçiniz:\n");
    printf("***Menü***\n");
    printf("[1]Toplama\n");
    printf("[2]Çıkarma\n");
    printf("[3]Çarpma\n");
    printf("[4]Bölme\n");
    scanf("%d",&islem);
    switch(islem)
    {
        case 1:
        printf("İki tam sayı giriniz:\n");
        scanf("%d\n%d",&sayi1,&sayi2);
        printf("%d",sayi1+sayi2);
        break;
        case 2:
        printf("İki tam sayı giriniz:\n");
        scanf("%d\n%d",&sayi1,&sayi2);
        printf("%d",sayi1-sayi2);
        break;
        case 3:
        printf("İki tam sayı giriniz:\n");
        scanf("%d\n%d",&sayi1,&sayi2);
        printf("%d",sayi1*sayi2);
        break;
        case 4:
        printf("İki tam sayı giriniz:\n");
        scanf("%d\n%d",&sayi1,&sayi2);
        printf("%d",sayi1/sayi2);
        break;
        default:
        printf("Hatalı seçim yaptınız!!!");
    }
        

    return 0;
}