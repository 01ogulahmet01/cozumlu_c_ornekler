#include<stdio.h>
int main()
{
    int i,N,kare[N],dizi[N];
    printf("Pozitif bir sayı girin:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        dizi[i]=i+1;
        kare[i]=(i+1)*(i+1);
        printf("dizi[%d]'nin karesi=%d\n",i,kare[i]);
    }
    return 0;
}