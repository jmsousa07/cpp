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