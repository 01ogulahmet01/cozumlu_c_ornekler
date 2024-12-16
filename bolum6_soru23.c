#include<stdio.h>
int main()
{
    long int sifre=123456,i,girilen,kontrol=0;
    printf("Şifrenizi girin:");
    for(i=0;i<3;i++)
    {
        scanf("%li",&girilen);
        if(sifre==girilen)
        {
            printf("Doğru şifreyi girdiniz\n");
            break;
        }
        else
        {
            printf("Hatalı tuşlama yaptınız\n");
            kontrol++;
        }
    }
    if(kontrol==3)
    {
        printf("şifrenizi 3 defa yanlış girdiniz\n");
    }
    return 0;
}