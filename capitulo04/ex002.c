/*
	Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
	na tabela a seguir:
	MÉDIA ARITMÉTICA    MENSAGEM
	0,0  - <3,0      | Reprovado
	3,0  - <7,0      | Exame
	7,0  - 10,0      | Aprovado
*/

#include <stdio.h>

int main()
{
	float n[2], media;
	printf("Qual foi sua primeira nota? ");
	scanf("%f%*c", &n[1]);
	printf("Qual foi sua segunda nota? ");
	scanf("%f%*c", &n[2]);
	
	media = ((n[1]+n[2]) /2);
	
	printf("Sua media foi de %4.2f", media);
	if (media >= 7)
		printf("\nVoce foi APROVADO! ");
	else
		if (media >= 3)
			printf("\nVoce esta apto para fazer o exame de recuperacao! ");
		else
			printf("\nVoce foi REPROVADO! ");
	return 0;
}