#include<stdio.h>
int main()
{
int sayi;
printf("Pozitif bir tam sayı giriniz:");
scanf("%d",&sayi);
if(sayi%2==0)
{
    printf("Çift sayı");
}
else if(sayi%2==1)
{
    printf("Tek sayi");
}
else 
{
    printf("Hatalı giriş yaptınız!!!!");
}
    return 0;
}