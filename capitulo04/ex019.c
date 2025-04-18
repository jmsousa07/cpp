/*
	Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):
	
    para homens: (72.7 * h) – 58.
    para mulheres: (62.1 * h) – 44.7.
*/

#include <stdio.h>

int main()
{
	float alt, peso;
	int idade, sexo;
	
	printf("IDADE: ");
	scanf("%d", &idade);
	printf("ALTURA: ");
	scanf("%f", &alt);
	printf("SEXO [1-Fem/2-Masc]: ");
	scanf("%d", &sexo);

	if (sexo == 1)
	{
		peso = ((62.1*alt) - 44.7);
		printf("Seu peso ideal = %.1f\n", peso);
	}	
	else
	{
		peso = ((72.7*alt) - 58);
		printf("Seu peso ideal = %.1f\n", peso);
	}
	
	return 0;	
}