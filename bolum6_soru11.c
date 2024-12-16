#include<stdio.h>
int main()
{
    int N,i,carpım;
    printf("Bir sayı giriniz:");
    scanf("%d",&N);
    for(i=1;i<=9;i++)
    {
        carpım=i*N;
        printf("%d*%d=%d\n",N,i,carpım);
    }
    return 0;
}