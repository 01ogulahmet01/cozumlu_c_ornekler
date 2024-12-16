#include<stdio.h>
void sayi_alma()
{
    int sayi;
    while(1)
    {
        printf("Pozitif sayı girin:");
        scanf("%d",&sayi);
        if(sayi<0)
        {
            printf("Negatif sayı girdiniz...");
            break;
        }
    }
}
int main()
{
    sayi_alma();
    return 0;
}