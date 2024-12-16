#include<stdio.h>
#include<math.h>
int main()
{
    int i,N;
    printf("N sayısını girin:\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("%.2f\n",sqrt(i+2));
    }
    return 0;
}