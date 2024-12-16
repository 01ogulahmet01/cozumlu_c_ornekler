#include<stdio.h>
int main()
{
    int i=1,sayi;
    printf("Bir sayı girin:\n");
    scanf("%d",&sayi);
    while(sayi>0)
    {
        printf("%d*%d\n",(sayi%10),i);//sayi:156, 6*1   5*10        1*100
        sayi=sayi/10;                 //sayi:15,        sayi:1      sayi:1
        i*=10;                        //i:10            i:100       i:1000
    }
    return 0;
}