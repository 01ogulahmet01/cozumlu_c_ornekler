#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N,i;
    printf("Bir sayı giriniz:\n");
    scanf("%d",&N);
    i=N;
    while(i>=0)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}