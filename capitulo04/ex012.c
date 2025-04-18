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