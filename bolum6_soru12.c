#include<stdio.h>
int main()
{
    int N,i,ilk=0,ikinci=1,sonraki;
    printf("Bir sayı giriniz:");
    scanf("%d",&N);
    printf("0\n1\n");
    for(i=1;i<N;i++)
    {
        sonraki=ilk+ikinci;
        ilk=ikinci;
        ikinci=sonraki;
        printf("%d\n",sonraki);
    }
    return 0;
}