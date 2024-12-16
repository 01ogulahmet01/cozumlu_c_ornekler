#include<stdio.h>
int main()
{
    int alt,üst,i,toplam=0;
    printf("Alt ve üst sınır giriniz:\n");
    scanf("%d\n%d",&alt,&üst);
    for(i=alt;i<=üst;i++)
    {
        if(i%2==0)
        {
            toplam+=i;
        }
    }
    printf("%d",toplam);
    return 0;
}