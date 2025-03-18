#include <stdio.h>

int n[4]; 

int main()
{
	printf("Digite um numero: ");
	scanf("%d%*c", &n[1]);
	printf("Digite outro numero: ");
	scanf("%d%*c", &n[2]);
	printf("Agora digite um terceiro numero: ");
	scanf("%d%*c", &n[3]);
	printf("O resultado da multiplicacao desses valores e igual a %d", n[1]*n[2]*n[3]);
	return 0;
}