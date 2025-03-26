#include <stdio.h>

#define reaj1 1.35
#define reaj2 1.15

int main()
{
	float sal;
	printf("Qual seu salario atual? R$");
	scanf("%f", &sal);
	
	if (sal <= 300)
	{
		sal = (sal*reaj1);
		printf("Voce tem direito a 35/100 de ajuste, logo, passara a receber R$%5.2f", sal);
	}
	else
	{
		sal = (sal*reaj2);
		printf("Voce tem direito a 15/100 de ajuste, logo, passara a receber R$%.2f", sal);
	}
}