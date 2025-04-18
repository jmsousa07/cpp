/*
	João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
	multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de
	João. 
*/

#include <stdio.h>

float c[2], cf;
float sal, resto;

int main()
{
	printf("Qual o valor do seu salario? ");
	scanf("%f%*c", &sal);
	printf("Qual o valor inicial da primeira conta? ");
	scanf("%f%*c", &c[1]);
	printf("Qual o valor inicial da segunda conta? ");
	scanf("%f%*c", &c[2]);
	cf = (c[1]*1.02 + c[2]*1.02);
	resto = (sal - cf);
	printf("\nDepois que voce pagar as contas com juros restara R$%6.2f reais", resto);
	return 0;
}
