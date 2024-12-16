#include<stdio.h>
int main()
{
    int maas,toplam=0,i=0,N;
    float ortalama;
    printf("Personel sayısını giriniz:\n");
    scanf("%d",&N);
    do
    {
        printf("%d. personel maaşı:",i+1);
        scanf("%d",&maas);
        toplam+=maas;
        i++;
    }
    while(i<N);
    ortalama=(float)toplam/N;
    printf("Personelin toplam maaşı:%d\n",toplam);
    printf("Personelin ortalama mmaşı:%.2f",ortalama);
    return 0;
}