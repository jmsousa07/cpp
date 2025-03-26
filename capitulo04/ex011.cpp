#include <stdio.h>

int main()
{
	float sal, aumento;
	printf("Qual seu salario atual? R$");
	scanf("%f", &sal);
	
	if (sal <= 300)
	{
		aumento = (sal * 0.15);
		sal = (sal + aumento);
		printf("Seu aumento foi de 15%% que equivale a R$%.2f\n", aumento);
		printf("Seu novo salario sera de R$%.2f\n", sal);
	}
	else
		if (sal > 300 && sal < 600)
		{
			aumento = (sal * 0.10);
			sal = (sal + aumento);
			printf("Seu aumento foi de 10%% que equivale a R$%.2f\n", aumento);
			printf("Seu novo salario sera de R$%.2f\n", sal);
	    }
	    else
	    	if (sal >= 600 && sal <= 900)
	    	{
				aumento = (sal * 0.05);
				sal = (sal + aumento);
				printf("Seu aumento foi de 5%% que equivale a R$%.2f\n", aumento);
				printf("Seu novo salario sera de R$%.2f\n", sal);
			}
			else
				printf("Voce nao recebeu aumento e seu salario continuara sendo de R$%.2f\n", sal);
			
	return 0;
}