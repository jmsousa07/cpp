/*
    Faça um programa que receba um número, calcule e mostre a tabuada desse número.
	Exemplo:
	Digite um número: 5
	5 × 0 = 0
	5 × 1 = 5
	5 × 2 = 10
	5 × 3 = 15
	...
*/

#include <stdio.h>

int main()
{
	int num, cont;
	int v = 0;
	
	printf("Voce quer a tabuada de qual numero? ");
	scanf("%d", &num);
	
	for (cont = 0; cont <= 10; cont++)
	{
		v = (num * cont);
		printf("%d x %d = %d\n", num, cont, v);
	}
	
	return 0;
}