/*
	O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir.
	Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

	     CUSTO DE FABRICA             |    % DO DISTRIBUIDOR  |   % DOS IMPOSTOS
	Até R$ 12.000,00                  |           5           |       isento
	Entre R$ 12.000,00 e R$ 25.000,00 |          10           |         15
	Acima de R$ 25.000,00             |          15           |         20
*/

#include <stdio.h>

#define custo0 12000
#define custo1 25000

int main()
{
	float custof;
	printf("Digite o custo de fabrica: R$ ");
	scanf("%f", &custof);
	
	if (custof <= custo0)
	{
		custof = (custof * 1.05);
		printf("O preco ao consumidor = R$%.2f", custof);
	}
	else
		if (custof > custo0 && custof <= custo1)
		{
			custof = (custof * 1.10 * 1.15);
			printf("O preco ao consumidor = R$%.2f", custof);
		}
		else
		{
			custof = (custof * 1.15 * 1.20);
			printf("O preco ao consumidor = R$%.2f", custof);
		}
		
	return 0;
}