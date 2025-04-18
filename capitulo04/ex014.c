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