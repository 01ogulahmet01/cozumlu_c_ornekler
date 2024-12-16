#include<stdio.h>
void tek_sıralama(int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int sayi;
    printf("Bir sayı girin:");
    scanf("%d",&sayi);
    tek_sıralama(sayi);
    return 0;
}