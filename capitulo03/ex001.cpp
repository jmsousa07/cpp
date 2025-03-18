#include <stdio.h>

int n1, n2; 

int main()
{
	printf("Digite um numero: ");
	scanf("%d%*c", &n1);
	printf("Digite outro numero: ");
	scanf("%d%*c", &n2);
	printf("O resultado da subtracao desses valores e igual a %d", n1-n2);
	return 0;
}