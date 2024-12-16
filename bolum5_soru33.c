#include<stdio.h>
int main()
{
    int x,y,z;
    printf("İki basamaklı bir sayı giriniz\n");
    scanf("%d",&x);
    y=x/10;
    z=x%10;
    if(y==1) printf("on");
    else if(y==2) printf("yirmi ");
    else if(y==3) printf("otuz ");
    else if(y==4) printf("kırk ");
    else if(y==5) printf("elli ");
    else if(y==6) printf("altmış ");
    else if(y==7) printf("yetmiş ");
    else if(y==8) printf("seksen ");
    else printf("doksan ");
    
    if(z==0) printf("");
    else if(z==1) printf("bir");
    else if(z==2) printf("iki");
    else if(z==3) printf("üç");
    else if(z==4) printf("dört");
    else if(z==5) printf("beş");
    else if(z==6) printf("altı");
    else if(z==7) printf("yedi");
    else if(z==8) printf("sekiz");
    else printf("dokuz");
    return 0;
}