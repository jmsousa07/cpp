/*
	Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
	que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
	salário final.
*/

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