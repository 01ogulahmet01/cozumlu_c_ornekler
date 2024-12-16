#include<stdio.h>
int main()
{
    int i;
    printf("KARAKTER DECİMAL OCTAL HEXADECİMAL");
    for(i=0;i<256;i++)
    {
        printf("%c %d %o %x\n",i,i,i,i);
    }
    return 0;
}