/*
	Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.
*/

#include<stdio.h>

int main()
{
    int lado, A;

    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);
    A = (lado * lado);
    printf("Area = %d", A);

   
    return 0;
}