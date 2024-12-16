#include<stdio.h>
int main()
{
    int sayi1,sayi2,islem;
    printf("İşlem seçiniz......\n1.Toplama\n2.Çıkarma\n3.Çarpma\n4.Bölme\n");
    scanf("%d",&islem);
    if(islem==1)
    {
        printf("İki sayıyı giriniz:\n");
        scanf("%d\n%d",&sayi1,&sayi2);
        printf("%d",sayi1+sayi2);
    }
    else if(islem==2)
    {
        printf("İki sayı giriniz:\n");
        scanf("%d\n%d",&sayi1,&sayi2);
        printf("%d",sayi1-sayi2);
    }
    else if(islem==3)
    {
        printf("İki sayı giriniz:\n");
        scanf("%d\n%d",&sayi1,&sayi2);
        printf("%d",sayi1*sayi2);
    }
    else if(islem==4)
    {
        printf("İki sayı giriniz:\n");
        scanf("%d\n%d",&sayi1,&sayi2);
        printf("%d",sayi1/sayi2);
    }
    else
    {
        printf("Hatalı giriş yaptınız!!!");
    }
return 0;
}