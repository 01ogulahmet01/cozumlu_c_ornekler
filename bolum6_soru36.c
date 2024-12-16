#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,binary,decimal=0;
    printf("Binary bir sayı girin:\n");
    scanf("%d",&binary);
    while(binary>0)
    {
        decimal+=(binary%10)*pow(2,i);
        binary=binary/10;
        i++;
    }
    printf("%d",decimal);
    return 0;
}