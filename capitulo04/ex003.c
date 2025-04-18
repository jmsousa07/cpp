#include <stdio.h>

int main()
{
	int num[2];
	printf("Digite um numero ");
	scanf("%d%*c", &num[1]);
	printf("Digite outro numero ");
	scanf("%d%*c", &num[2]);
	
	if (num[2] >= num[1])
		printf("O maior numero digitado foi o %d", num[2]);
	else
		printf("O maior numero digitado foi o %d", num[1]);
	return 0;
}