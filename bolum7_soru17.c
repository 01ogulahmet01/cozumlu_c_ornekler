#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("n sayısı girin:\n");
    scanf("%d",&n);
    int dizi1[n][n],dizi2[n][n],dizi3[n][n];
    printf("1. dizinin elemanlarını girin:\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("[%d,%d]=",i,j);
            scanf("%d",&dizi1[i][j]);
            printf("\n");
            dizi3[i][j]=0;
        }
    }
    printf("\n");
    printf("2. dizinin elemanlarını girin:\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d,%d=",i,j);
            scanf("%d",&dizi2[i][j]);
            printf("\n");
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                dizi3[i][j]+=dizi1[i][k]*dizi2[k][j];
            }
        }
    }
    printf("Girilen dizilerin çarpımı:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("[%d][%d]=[%d]\n",i,j,dizi3[i][j]);
        }
    }
    return 0;
}