/*
    Faça um programa que preencha uma matriz 3x5 com números inteiros, calcule e mostre a quantidade de elementos entre 15 e 20.
*/ 

#include <stdio.h>

int main()
{
    int vet[3][5], cont = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Linha %d: \n", i+1);
        for (int j = 0; j < 5; j++)
        {
            printf("Coluna %d: ", j+1);
            scanf("%d", &vet[i][j]);
            if (vet[i][j] > 15 && vet[i][j] < 20)
            {
                cont++;
            }
        }
        printf("\n");
    }

    printf("Quantidade de valores entre 15 e 20: %d", cont);
    
    return 0;
}