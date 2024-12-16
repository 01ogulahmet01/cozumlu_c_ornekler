#include<stdio.h>
int topla(int a,int b)
{
    return a+b;
}
int main()
{
    int sayi1,sayi2;
    printf("İki sayı girin:");
    scanf("%d %d",&sayi1,&sayi2);
    printf("%d + %d = %d",sayi1,sayi2,topla(sayi1,sayi2));
    return 0;
}