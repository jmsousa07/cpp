/*
    Faça um programa que preencha uma matriz 20x10 com números inteiros, e some cada uma das colunas, armazenando o resultado da soma em um vetor.
    A seguir, o programa deverá multiplicar cada elemento da matriz pela soma da coluna e mostrar a matriz resultante.
*/ 

#include <stdio.h>

#define linhas 20
#define colunas 10

int main()
{
    int mat[linhas][colunas], matResultante[linhas][colunas];
    int somaColunas[colunas] = {0};
    int i, j;

    for (i = 0; i < colunas; i++)
    {
        printf("Coluna %d: \n", i+1);
        for (j = 0; j < linhas; j++)
        {
            printf("Linha %d: ", j+1);
            scanf("%d", &mat[i][j]);
            somaColunas[i] += mat[i][j];
        }
    }
    
    
    printf("\n ----------------- \n Matriz resultante \n ----------------- \n  ");
    for (i = 0; i < colunas; i++)
    {
        for (j = 0; j < linhas; j++)
        {
            matResultante[i][j] = mat[i][j] * somaColunas[i];
            printf("%d | ", matResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}