#include <stdio.h>

#define pi 3.14

int r;
float area, v, c;

int main()
{
	printf("Digite o valor do raio da esfera: ");
	scanf("%d%*c", &r);
	c = (2*pi*r);
	area = (pi*r*r);
	v = (3*pi*r*r*r/4);
	printf("O valor do comprimento dessa esfera e %4.1f", c);
	printf("\nO valor da area dessa esfera e %4.1f", area);
	printf("\nO valor do volume dessa esfera e %4.1f", v);
}
