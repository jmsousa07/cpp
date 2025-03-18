#include <stdio.h>

float n[2]; 

int main()
{
	printf("Digite um numero: ");
	scanf("%f%*c", &n[1]);
	printf("Digite outro numero: ");
	scanf("%f%*c", &n[2]);
	printf("O resultado da divisao desses valores e igual a %5.2f", n[1]/n[2]);
	return 0;
}