#include<stdio.h>
#include<stdlib.h>
float dort_islem(float a,float b,char c)
{
    if(c=='+')
    {
        return a+b;
    }
    else if(c=='-')
    {
        return a-b;
    }
    else if(c=='*')
    {
        return a*b;
    }
    else if(c=='/')
    {
        return a/b;
    }
    else
    {
        printf("Yanlış giriş yaptınız...");
    }
}
int main()
{
    float sayi1,sayi2;
    char islem;
    printf("İki sayıyı sırayla girin:");
    scanf("%f %f",&sayi1,&sayi2);
    printf("Hangi işlem yapılacak");
    scanf(" %c",&islem);
    printf("\nİşlemin sonucu=%.2f",dort_islem(sayi1,sayi2,islem));
    return 0;
}
