#include<stdio.h>
int main()
{
    int i,sayi,buyuk=0;
    printf("Pozitif tam sayılar girin:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&sayi);
        if(sayi>buyuk)
        {
            buyuk=sayi;
        }
    }
    printf("En büyük sayı:%d",buyuk);
    return 0;
}