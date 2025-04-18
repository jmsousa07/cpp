/*
	Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
    de diagonais desse polígono. Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do
    polígono. 
*/

#include<stdio.h>

int main()
{
    int numLados, numDiag;

    printf("digite o numero de lados do poligono: ");
    scanf("%d", &numLados);
    numDiag = (numLados * (numLados - 3) /2);
    printf("O numero de diagonais desse poligono e igual a: %d", numDiag);
   
    return 0;
}