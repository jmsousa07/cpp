/*
	Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
	programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
	ele não tenha direito ao aumento.
*/

#include <stdio.h>

#define reaj 1.30

int main()
{
	int sal;
	printf("Qual seu salario atual? ");
	scanf("%d", &sal);
	
	if (sal <= 500)
	{
		sal = (sal*reaj);
		printf("Agora seu salario vai passar a ser de %d", sal);
	}
	else
		printf("Voce nao tem direito ao reajuste salarial! ");
	
	return 0;
}