#include<stdio.h>
int main()
{
    int N,i;
    printf("N pozitif tam sayısı girin:\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%7==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}