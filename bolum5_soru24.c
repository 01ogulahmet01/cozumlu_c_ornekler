#include<stdio.h>
int main()
{
    char harf;
    printf("Harf notunuzu büyük harf olarak giriniz:\n");
    scanf("%c",&harf);
    switch(harf)
    {
        case 'A':
        printf("Notunuz 90-100 aralığında");
        break;
        case 'B':
        printf("Notunuz 80-89 aralığında");
        break;
        case 'C':
        printf("Notunuz 70-79 aralığında");
        break;
        case 'D':
        printf("Notunuz 60-69 aralığında");
        break;
        case 'F':
        printf("Notunuz 0-59 aralığında");
        break;
    }
    return 0;

}