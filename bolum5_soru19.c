#include<stdio.h>
int main()
{
    int saat,ücret;
    printf("Aylık toplam çalışma saatini ve saatlik çalişma ücretini giriniz:\n");
    scanf("%d\n%d",&saat,&ücret);
    if(saat*ücret<17002)
    {
        printf("Maaşınız= %d asgari ücretin altında",saat*ücret);
    }
    else
    {
        printf("Maaşınız= %d asgari ücretin üstünde",saat*ücret);
    }
    return 0;
}