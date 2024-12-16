#include<stdio.h>
int main()
{
    int taban,üs,i,sonuc=1;
    printf("Taban ve üs giriniz:");
    scanf("%d\n%d",&taban,&üs);
    for(i=0;i<üs;i++)
    {
        sonuc*=taban;
    }
    printf("%d",sonuc);
    return 0;
}