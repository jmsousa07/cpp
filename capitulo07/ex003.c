/*
    Elabore um programa que preencha uma matriz 6x3, calcule e mostre:
    ■ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
    ■ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.
*/ 

#include <stdio.h>

#define linhas 6
#define colunas 3

int main()
{
    int mat[6][3];
    int menor, maior = 0;
    int linhaMenor, colunaMenor, linhaMaior, colunaMaior;

    for (int i = 0; i < linhas; i++)
    {
        printf("Linhas %d \n", i+1);
        for (int j = 0; j < colunas; j++)
        {
            printf("Coluna %d: ", j+1);
            scanf("%d", &mat[i][j]);

            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
                linhaMaior = i+1;
                colunaMaior = j+1;
            }
            
            if (i == 0 && j == 0)
            {
                menor = mat[i][j];
                linhaMenor = i+1;
                colunaMenor = j+1;
            }
            else if (mat[i][j] < menor)
            {
                menor = mat[i][j];
                linhaMenor = i+1;
                colunaMenor = j+1;
            }
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf(" %d |", mat[i][j]);
        }
        printf("\n");
        printf(" -------------- \n");
    }

    printf("O maior valor digitado e %d e ele esta na linha %d, coluna %d. \n", maior, linhaMaior, colunaMaior);
    printf("O menor valor digitado e %d e ele esta na linha %d, coluna %d. \n", menor, linhaMenor, colunaMenor);

    return 0;
}