#include<stdio.h>
int main()
{
    int i,j,dizi[12][30];
    float toplam=0;
    printf("YAĞIŞ MİKTARLARINI GİRİN:\n");
    for(i=0;i<12;i++)
    {
        for(j=0;j<30;j++)
        {
            printf("%d. ay %d. gün:",i+1,j+1);
            scanf("%d",&dizi[i][j]);
            toplam+=dizi[i][j];
        }
    }
    printf("Toplam yağış miktarı:%d",toplam);
    printf("Günlük ortalama yağış miktarı:%f",toplam/365);
    return 0;
}