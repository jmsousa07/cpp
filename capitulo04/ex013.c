/*
	Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.

	TABELA 1 — PERCENTUAL DE AUMENTO
	PREÇO                      |    %
	Até R$ 50,00               |    5
	Entre R$ 50,00 e R$ 100,00 |   10
	Acima de R$ 100,00         |   15

	TABELA 2 — CLASSIFICAÇOES
	  NOVO PREÇO                            | CLASSIFICAÇAO
	Até R$ 80,00                            |    Barato
	Entre R$ 80,00 e R$ 120,00 (inclusive)  |    Normal
	Entre R$ 120,00 e R$ 200,00 (inclusive) |    Caro
	Maior que R$ 200,00                     |    Muito caro
	
*/

#include <stdio.h>

int main()
{
	float preco, npreco, aumento;
	char classif[15];
	printf("Qual o preco do produto atualmente? R$");
	scanf("%f", &preco);
	
	if (preco <= 50)
	{
		aumento = (preco * 0.05);
		npreco = (preco + aumento);
		printf("O novo preco desse produto sera de R$%.2f\n", npreco);	
	}
	else
		if (preco > 50 && preco <= 100)
		{
			aumento = (preco * 0.10);
			npreco = (preco + aumento);
			printf("O novo preco desse produto sera de R$%.2f\n", npreco);
		}
		else
			if (preco > 100)
			{
				aumento = (preco * 0.15);
				npreco = (preco + aumento);
				printf("O novo preco desse produto sera de R$%.2f\n", npreco);	
			}
				
	if (npreco <= 80)
	{
		printf("Esse produto esta classificado como: BARATO!\n");
	}
	else
		if (npreco > 80 && npreco <= 120)
		{
			printf("Esse produto esta classificado como: NORMAL!\n");
		}
		else
			if (npreco > 120 && npreco <= 200)
			{
				printf("Esse produto esta classificado como: CARO!\n");
			}
			else
				if (npreco > 200)
				{
					printf("Esse produto esta classificado como: MUITO CARO!\n");
				}
				
	return 0;
}