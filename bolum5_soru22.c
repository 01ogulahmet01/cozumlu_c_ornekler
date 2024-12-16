#include<stdio.h>
int main()
{
    int x,y;
    printf("Notunuzu giriniz:\n");
    scanf("%d",&x);
    if(x>=85 && x<=100)
    {
        printf("Notunuz 5 üzerinden 5");
    }
    else if(x>=70 && x<85)
    {
        printf("Notunuz 5 üzerinden 4");
    }
    else if(x>=55 && x<70)
    {
        printf("Notunuz 5 üzerinden 3");
    }
    else if(x>=45 && x<55)
    {
        printf("Notunuz 5 üzerinden 2");
    }
    else if(x>=0 && x<45)
    {
        printf("Notunuz 5 üzerinden 1");
    }
    else
    {
        printf("Hatalı giriş yaptınız!!!!");
    }
    return 0;
}
