#include <stdio.h>

float p, np;

int main()
{
	printf("Digite o preco do produto: ");
	scanf("%f%*c", &p);
	np = (p*0.9);
	printf("Com desconto esse produto custa %5.2f", np);
	return 0;
}