#include<stdio.h>
int main()
{
    int x;
    printf("Sıcaklık değeri giriniz:\n");
    scanf("%d",&x);
    if(x<0)
    {
        printf("Madde katı halde");
    }
    else if(x==0)
    {
        printf("Madde hem katı hem sıvı halde");
    }
    else if(x>0 && x<100)
    {
        printf("Madde sıvı halde");
    }
    else if(x==100)
    {
        printf("Madde hem sıvı hemde gaz halde");
    }
    else
    {
        printf("Madde gaz halde");
    }
    return 0;
}