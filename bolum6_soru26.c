#include<stdio.h>
int main()
{
    char i;
    for(i=0;i<123;i++)
    {    
        if((i>64 && i<91)||(i>96 && i<123))
        {
            printf("%c=%d\n",i,i);
        }
    }
    return 0;
}