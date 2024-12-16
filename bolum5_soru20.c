#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Kenar uzunlukları giriniz:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a==b && a==c)
    {
        printf("Eşkenar üçgen");
    }
    else if(a==b || a==c || b==c)
    {
        printf("İkizkenar üçgen");
    }
    else
    {
        printf("Çeşitkenar üçgen");
    }
    return 0;
}