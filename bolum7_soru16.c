#include<stdio.h>
int main(){
    int i,j,n;
    printf("n sayısı girin:\n");
    scanf("%d",&n);
    int dizi[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d. satır %d. sütun=",i+1,j+1);
            scanf("%d",&dizi[i][j]);
        }
    }
    printf("\n\nGirilen matrisin transpozesi\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d. satır %d. sütun=%d\n",i+1,j+1,dizi[i][j]);
        }
    }
    return 0;
}