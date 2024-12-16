#include<stdio.h>
int main()
{
    int i,j,N,fark=0;
    printf("N sayısı girin:");
    scanf("%d",&N);
    int dizi[N];
    for(i=0;i<N;i++)
    {
        printf("%d. sayı:\n",i+1);
        scanf("%d",&dizi[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(dizi[i]-dizi[j]>=fark)
            {
                fark=dizi[i]-dizi[j];
            }
        }
    }
    printf("%d",fark);
    return 0;
}