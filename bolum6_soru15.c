#include <stdio.h>
int main()
{
	int I, i, n, satir;
	char karakter;
	printf("Karakter : ");
	scanf(" %c", &karakter);
	printf("Satir sayisi :");
	scanf("%d", &satir);
	
	for (I = 1; I <= satir; I++)
	{
		for (n = satir; n >= I; n--)
		{
			printf(" ");
		}
		for (i = 1; i <= I; i++)
		{
			printf("%c ", karakter);
		}
		printf("\n");
  	}
	
	return 0;
}