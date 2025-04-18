/*
	Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano.
	Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito.

	  SALARIO MEDIO       |    PERCENTUAL
	Acima de R$ 400,00    | 30% do saldo médio
	R$ 400,00 R$ 300,00   | 25% do saldo médio
	R$ 300,00 R$ 200,00   | 20% do saldo médio
	Até R$ 200,00         | 10% do saldo médio
*/

#include <stdio.h>

int main()
{
	float saldo, credito;
	printf("Qual foi seu saldo medio no ultimo ano? ");
	scanf("%f", &saldo);
	
	if (saldo <= 200)
	{
		credito = (saldo * 0.10);
		saldo = (saldo + credito);
		printf("Agora seu saldo e de R$%.2f e seu credito foi de R$%.2f", saldo, credito);
	}
	else
		if (saldo > 200 && saldo <= 300)
		{
			credito = (saldo * 0.20);
			saldo = (saldo + credito);
			printf("Agora seu saldo e de R$%.2f e seu credito foi de R$%.2f", saldo, credito);
		}
		else
			if (saldo > 300 && saldo <= 400)
			{
				credito = (saldo * 0.25);
				saldo = (saldo + credito);
				printf("Agora seu saldo e de R$%.2f e seu credito foi de R$%.2f", saldo, credito);
			}
			else
				if (saldo > 400)
				{
					credito = (saldo * 0.30);
					saldo = (saldo + credito);
					printf("Agora seu saldo e de R$%.2f e seu credito foi de R$%.2f", saldo, credito);
				}
	
	return 0;
}