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