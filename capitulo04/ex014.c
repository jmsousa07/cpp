/*
	Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre o novo salário.
	
	  FAIXA SALARIAL           |  % DE AUMENTO
	Até R$ 300,00              |     50%
	R$ 300,00 - <= R$ 500,00   |     40%
	R$ 500,00 - <= R$ 700,00   |     30%
	R$ 700,00 - <= R$ 800,00   |     20%
	R$ 800,00 - <= R$ 1.000,00 |     10%
	Acima de R$ 1.000,00       |     5%
*/

#include <stdio.h>

int main()
{
	float sal;
	printf("Qual seu salario atual? R$");
	scanf("%f", &sal);
	
	if (sal <= 300)
	{
		sal = (sal * 1.50);
		printf("Seu novo salario sera de R$%.2f\n", sal);
	}
	else
		if (sal > 300 && sal <= 500)
		{
			sal = (sal * 1.40);
			printf("Seu novo salario sera de R$%.2f\n", sal);
		}
		else
			if (sal > 500 && sal <= 700)
			{
				sal = (sal * 1.30);
				printf("Seu novo salario sera de R$%.2f\n", sal);
			}
			else
				if (sal > 700 && sal <= 800)
				{
					sal = (sal * 1.20);
					printf("Seu novo salario sera de R$%.2f\n", sal);
				}
				else
					if (sal > 800 && sal <= 1000)
					{
						sal = (sal * 1.10);
						printf("Seu novo salario sera de R$%.2f\n", sal);
					}
					else
						{
							sal = (sal * 1.05);
							printf("Seu novo salario sera de R$%.2f\n", sal);
						}
						
	return 0;
}