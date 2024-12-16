#include<stdio.h>
int main(){
    int i,dizi[10];
    printf("Adresler listeleniyor...");
    for(i=0;i<10;i++){
        printf("dizi[%d]=%x\n",i,&dizi[i]);
    }
    return 0;
}