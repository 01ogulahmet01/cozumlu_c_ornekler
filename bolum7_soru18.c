#include<stdio.h>
int main(){
    int i,j,n,kontrol=0;
    printf("n değeri girin:\n");
    scanf("%d",&n);
    int dizi[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d. satır %d. sütun =",i+1,j+1);
            scanf("%d",dizi[i][j]);
            printf("\n");
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(dizi[i][j]!=dizi[j][i]){
                kontrol=1;
                break;
            }
        }
    }
    if(kontrol==1){
        printf("dizi simetrik bir dizi");
    }
    else{
        printf("dizi simetrik bir dizi değil");
    }
    return 0;
}