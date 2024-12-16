#include<stdio.h>
int main()
{
    int i,dizi[10],sayi;
    printf("10 tane pozitif tam sayı girin:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&dizi[i]);
    }
    printf("Dizinin içinde aradığınız sayıyı girin:\n");
    scanf("%d",&sayi);
    for(i=0;i<10;i++)
    {
        if(sayi==dizi[i])
        {
            break;
        }
    }
    printf("dizi[%d]=%d",i,dizi[i]);
    return 0;
}