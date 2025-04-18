/*
	Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
	mostre o valor a receber.
	Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.

	        TABELA DAS GRATIFICACOES
	    SALÁRIO         |    GRATIFICAÇÃO
	Até R$ 350,00       |    R$ 100,00
	R$ 350,00 R$ 600,00 |    R$ 75,00
	R$ 600,00 R$ 900,00 |    R$ 50,00
	Acima de R$ 900,00  |    R$ 35,00
*/

#include <stdio.h>

#define imposto 0.93

int main()
{
	float sal_bruto, gratif, sal_liq;
	printf("Qual seu salario bruto? R$");
	scanf("%f", &sal_bruto);
	
	if (sal_bruto <= 300)
	{
		gratif = (100);
		sal_bruto = (sal_bruto + gratif);
		sal_liq = (sal_bruto * imposto);
		printf("Voce recebera o valor de R$%.2f", sal_liq);
	}
	else
		if (sal_bruto > 300 && sal_bruto < 600)
		{
			gratif = (75);
			sal_bruto = (sal_bruto + gratif);
			sal_liq = (sal_bruto * imposto);
			printf("Voce recebera o valor de R$%.2f", sal_liq);
		}
		else
			if (sal_bruto >= 600 && sal_bruto <= 900)
			{
				gratif = (50);
				sal_bruto = (sal_bruto + gratif);
				sal_liq = (sal_bruto * imposto);
				printf("Voce recebera o valor de R$%.2f", sal_liq);
			}
			else
			{
				gratif = (35);
				sal_bruto = (sal_bruto + gratif);
				sal_liq = (sal_bruto * imposto);
				printf("Voce recebera o valor de R$%.2f", sal_liq);
			}
			
	return 0;
}