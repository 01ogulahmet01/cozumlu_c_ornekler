#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j,N;
    printf("N değeri girin:");
    scanf("%d",&N);
    srand(time(0));
    int dizi[N];
    for(i=0;i<N;i++)
    {
        dizi[i]=rand() % 100;
        printf("%d ",dizi[i]);
    }
    printf("\ntekrar eden sayılar: \n");
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(dizi[i]==dizi[j])
            {
                printf("%d ",dizi[i]);
            }
        }
    }
    return 0;
}