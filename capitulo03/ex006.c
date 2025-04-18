/*
	Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
	que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
	salário final. 
*/

#include <stdio.h>

#define v 1500

float sal, c;

int main()
{
	printf("Qual o valor total das suas vendas? ");
	scanf("%f%*c", &c);
	c = (c*0.04);
	sal = (c+v);
	printf("O valor recebido da comissao das suas vendas foi de R$%4.2f reais\n", c);
	printf("Seu salario total nesse mes foi de R$ %5.2f reais ", sal);
	return 0;
}