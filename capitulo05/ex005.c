/*
    Faça um programa que mostre as tabuadas dos números de 1 a 10. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int result = 0, cont, i; 
	char press;
	
	for (cont = 1; cont <= 10; cont++)
	{
		for (i = 0; i <= 10; i++)
		{
			result = (cont * i);
			printf("%d x %d = %d\n", cont, i, result);
		}
		printf("\nPressione qualquer tecla para prosseguir...\n ");
		scanf("%c%*c", &press);
		system("cls");
	}
	
	return 0;
}