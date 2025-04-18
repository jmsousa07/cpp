/*
	Faça um programa que calcule e mostre a área de um trapézio.
	Sabe-se que: A = ((base maior + base menor) * altura)/2
*/

#include <stdio.h>

int B, b, h, area;

int main()
{
	printf("Qual a medida da base maior do trapezio? ");
	scanf("%d%*c", &B);
	printf("Qual a medida da base menor do trapezio? ");
	scanf("%d%*c", &b);
	printf("Qual a medida da altura do trapezio? ");
	scanf("%d%*c", &h);
	area = (((B+b)*h)/2);
	printf("A area desse trapezio e igual a %d", area);
}