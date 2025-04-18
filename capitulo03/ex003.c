/*
	Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
	Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
	com validações.
*/

#include <stdio.h>

float n[2]; 

int main()
{
	printf("Digite um numero: ");
	scanf("%f%*c", &n[1]);
	printf("Digite outro numero: ");
	scanf("%f%*c", &n[2]);
	printf("O resultado da divisao desses valores e igual a %5.2f", n[1]/n[2]);
	return 0;
}