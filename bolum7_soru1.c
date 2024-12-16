#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,N,j;
    printf("Pozitif bir sayı girin:");
    scanf("%d",&N);
    int dizi[N];
    for(i=0;i<N;i++)
    {
        dizi[i]=i+1;
    }
    for(j=0;j<N;j++)
    {
        printf("%d\n",dizi[j]);
    }
    return 0;
}