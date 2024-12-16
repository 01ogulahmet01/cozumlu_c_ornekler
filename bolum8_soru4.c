#include<stdio.h>
#include<math.h>
long us_alma(int a,int b)
{
    return pow(a,b);
}
int main()
{
    int taban,us;
    printf("Taban ve üssü sırayla girin:\n");
    scanf("%d %d",&taban,&us);
    printf("%d^%d = %d",taban,us,us_alma(taban,us));
    return 0; 
}