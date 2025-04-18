#include <stdio.h>

int main()
{
	int num[3];
	printf("Digite um numero ");
	scanf("%d%*c", &num[1]);
	printf("Digite outro numero ");
	scanf("%d%*c", &num[2]);
	printf("Digite outro numero ");
	scanf("%d%*c", &num[3]);
	
	if (num[3] > num[2])
		printf("O maior numero digitado foi o %d", num[3]);
	else
		if (num[2] > num[1])
			printf("O maior numero digitado foi o %d", num[2]);
		else
			printf("O maior numero digitado foi o %d", num[1]);
	return 0;
}