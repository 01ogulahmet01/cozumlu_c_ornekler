#include<stdio.h>
int main()
{
    int vize,final,odevnotu;
    float ort,devamsızlık;
    printf("Vize, final,ödev notu ve devamsızlık giriniz:\n");
    scanf("%d\n%d\n%d\n%f",&vize,&final,&odevnotu,&devamsızlık);
    if(devamsızlık>5.5 || final<60)
    {
        if(devamsızlık>5.5)
        {
            printf("Devamsızlıktan kaldınız");
        }
        else if(final<60)
        {
            printf("Dersten kaldınız.....\nfinal notu 60'tan düşük");
        }
    }
    else
    {
            ort=vize*0.2+final*0.6+odevnotu*0.2;
            if(ort<60)
            {
                printf("Dersten kaldınız.....\nOrtalamanız:%f",ort);
            }
            else
            {
                printf("Dersi geçtiniz....\nOrtalamanız:%f",ort);
            }
    }
    return 0;
}