#include<stdio.h>
int main()
{
    int i,N;
    printf("N değeri girin:");
    scanf("%d",&N);
    int dizi[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d",&dizi[i]);
    }
    for(i=N;i>0;i--)
    {
        printf("%d\n",dizi[i]);
    }
    return 0;
}