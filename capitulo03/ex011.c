/*
	Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2. 
*/

#include<stdio.h>

int main()
{
    int Dmaior, Dmenor, A;

    printf("Digite a medida da diagonal maior: ");
    scanf("%d", &Dmaior);
    printf("Digite a medida da diagonal menor: ");
    scanf("%d", &Dmenor);
    A = (Dmaior * Dmenor) / 2;
    printf("Area = %d", A);
   
    return 0;
}