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