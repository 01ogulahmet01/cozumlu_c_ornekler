#include<stdio.h>
int main(){
    int i,dizi[10],toplam=0;
    for(i=0;i<10;i++){
        printf("%d. sayıyı girin:\n",i+1);
        scanf("%d",(dizi+i));
        toplam=toplam+*(dizi+i);
    }
    printf("toplam=%d",toplam);
    return 0;
}