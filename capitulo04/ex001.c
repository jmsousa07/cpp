/*
	Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
	mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/

#include <stdio.h>

int main()
{
	float nota[4], media;
	printf("Qual foi sua primeira nota ");
	scanf("%f%*c", &nota[1]);
	printf("Qual foi sua segunda nota ");
	scanf("%f%*c", &nota[2]);
	printf("Qual foi sua terceira nota ");
	scanf("%f%*c", &nota[3]);
	printf("Qual foi sua quarta nota ");
	scanf("%f%*c", &nota[4]);
	
	media = ((nota[1] + nota[2] + nota[3] + nota[4]) /4);
	
	printf("Sua media foi de %4.2f logo, voce esta: ", media);
	if (media >= 7)
		printf("APROVADO! ");
	else 
		printf("REPROVADO!");	
}