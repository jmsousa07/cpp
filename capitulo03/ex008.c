/*
	Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. 
*/

#include <stdio.h>

float peso[2];

int main()
{
	printf("Qual seu peso em Kilogramas? ");
	scanf("%f%*c", &peso[1]);
	peso[2] = (peso[1]*1000);
	printf("Seu peso em gramas e igual a %f", peso[2]);	
	return 0;
}
