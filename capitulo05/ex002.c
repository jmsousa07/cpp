/*
    Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
	R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
	R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
	escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse preço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
	máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro.
*/

#include <stdio.h>
#include <stdlib.h>

#define sub 0.50
#define soma 26
#define despesas 200

int main()
{
	float v_ing = 5.00;
	float lucro = 400;
	int ing = 120;
	int cont;
	char v;
	
	for (cont = 1; cont <= 9; cont++)
	{
		printf("\nPreco do ingresso: %.2f", v_ing);
		printf("\nLucro esperado: %.2f", lucro);
		printf("\nTotal de ingressos vendidos para obter esse lucro: %d", ing);
		v_ing = (v_ing - sub);
		ing = (ing + soma);
		lucro = ((v_ing * ing) - despesas);
		printf("\n");
	}
	printf("\n");
	printf("\n");
	
	v_ing = (5);
	ing = (120);
	lucro = (400);
	
	for (cont = 1; cont <= 9; cont++)
	{
		printf("\nPreco do ingresso: %.2f    |", v_ing);
		printf("	Lucro esperado: %.2f\n", lucro);
		printf("------------------------------------------------------");
		v_ing = (v_ing - sub);
		ing = (ing + soma);
		lucro = ((v_ing * ing) - despesas);
	}
}