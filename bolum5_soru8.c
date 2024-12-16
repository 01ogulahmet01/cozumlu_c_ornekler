#include<stdio.h>
int main()
{
    int not;
    printf("Notunuzu giriniz:\n");
    scanf("%d",&not);
    if(not>=90 && not<=100)
    {
        printf("AA\n");
    }
    else if(not>=80 && not<90)
    {
        printf("BA\n");
    }
    else if(not>=70 && not<80)
    {
        printf("BB\n");
    }
    else if(not>=60 && not<70)
    {
        printf("CB\n");
    }
    else if(not>=50 && not<60)
    {
        printf("CC\n");
    }
    else if(not>=40 && not<50)
    {
        printf("DC\n");
    }
    else if(not>=30 && not<40)
    {
        printf("DD\n");
    }
    else if(not>=0 && not<30)
    {
        printf("F\n");
    }
    else
    {
        printf("Hatalı giriş yaptınız!!!!");
    }
    return 0;
}