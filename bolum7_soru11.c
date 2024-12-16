#include<stdio.h>
int main()
{
    int i,N,gecici,j;
    printf("N değeri girin:\n");
    scanf("%d",&N);
    int dizi[N];
    printf("Küçükten büyüğe sıralıyacağınız sayıları girin:\n");
    for(i=0;i<N;i++)
    {
        scanf("\n%d",&dizi[i]);
    }
    for(i=0;i<N-1;i++)
        {
            for(j=0;j<N-i-1;j++)
                if(dizi[j]>dizi[j+1])
                {
                    gecici=dizi[j];
                    dizi[j]=dizi[j+1];
                    dizi[j+1]=gecici;
                }
        }
    for(i=0;i<N;i++)
    {
        printf("%d\n",dizi[i]);
    }
    return 0;
}