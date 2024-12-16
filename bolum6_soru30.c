#include<stdio.h>
int main()
{
    char x;
    int i;
    for(i=0;i<123;i++)
    {
        if((i>64 && i<91)||(i>96 && i<123))
        {
            printf("%c\n",i);
        }
    }
    return 0;
}