#include<stdio.h>
long faktoriyel(int deger)
{
    int i,sonuc=1;
    for(i=0;i<deger;i++)
    {
        sonuc*=i+1;
    }
    return sonuc;
}
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d! = %d",i+1,faktoriyel(i+1));
        printf("\n");
    }
    return 0;
}