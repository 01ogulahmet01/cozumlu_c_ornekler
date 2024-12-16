#include<stdio.h>
int main()
{
    int x;
    printf("Bir ayı sayı olarak giriniz:");
    scanf("%d",&x);
    switch(x)
    {
        case 12:
        case 1:
        case 2:
        printf("%d. ay bir kış ayıdır",x);
        break;
        case 3:
        case 4:
        case 5:
        printf("%d. ay bir ilkbahar ayıdır",x);
        break;
        case 6:
        case 7:
        case 8:
        printf("%d. ay bir yaz ayıdır",x);
        break;
        case 9:
        case 10:
        case 11:
        printf("%d. ay bir sonbahar ayıdır,x");
        break;
        default:
        printf("Hatalı tuşlama yaptınız!!!");
        break;
    }
    return 0;
}