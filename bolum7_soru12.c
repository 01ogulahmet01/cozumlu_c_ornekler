#include<stdio.h>
#include<time.h>
int main()
{
    int i,N;
    printf("Kaç adet sayı üretilecek:\n");
    scanf("%d",&N);
    int dizi[N];
    srand(time(0));
    for(i=0;i<N;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    for(i=0;i<N;i++)
    {
        if(dizi[i]%2==0)
        {
            dizi[i]=0;
        }
        printf("dizi[%d]=%d\n",i,dizi[i]);
    }
    return 0;
}