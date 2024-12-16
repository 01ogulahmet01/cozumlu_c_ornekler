#include<stdio.h>
int main()
{
    int sayi1,sayi2,sayi3;
    printf("3 farklı sayı giriniz:\n");
    scanf("%d\n%d\n%d",&sayi1,&sayi2,&sayi3);
    if(sayi1>sayi2 && sayi1>sayi3)
    {
        printf("En büyük sayı:%d",sayi1);
    }
    else if(sayi2>sayi1 && sayi2>sayi3)
    {
        printf("En büyük sayı:%d",sayi2);
    }
    else
    {
        printf("En büyük sayı:%d",sayi3);
    }
    return 0;
}