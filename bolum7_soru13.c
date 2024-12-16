#include<stdio.h>
#include<time.h>
int main()
{
    int i,dizi[10],key[10]={5,8,3,9,1,0,6,2,7,4},dizi2[10];
    srand(time(0));
    for(i=0;i<10;i++)
    {
        dizi[i]=rand()%100;
        printf("dizi[%d]=%d\n",i,dizi[i]);
    }
    printf("Değişimden sonra\n");
    for(i=0;i<10;i++)
    {
        dizi2[i]=dizi[key[i]];
        printf("dizi[%d]=%d\n",i,dizi2[i]);
    }
    return 0;
}