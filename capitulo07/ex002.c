/*
    Crie um programa que preencha uma matriz 2x4 com números inteiros, calcule e mostre:
    ■ a quantidade de elementos entre 12 e 20 em cada linha;
    ■ a média dos elementos pares da matriz. 
*/ 

#include <stdio.h>

#define lines 2
#define columns 4


int main()
{
    int matrix[2][4], auxLine1 = 0, auxLine2 = 0;
    int i, j, sum = 0, evenNumbers = 0;
    float avarage;

    printf("fill in a 2x4 matrix: \n");
    for (i = 0; i < lines; i++)
    {
        printf("Line %d: \n", i+1);
        for (j = 0; j < columns; j++)
        {
            printf("Column %d: ", j+1);
            scanf("%d", &matrix[i][j]); 

            if (matrix[i][j] % 2 == 0)
            {
                sum += matrix[i][j];
                evenNumbers++;
            }  
        }
        printf("\n");
    }
    avarage = sum / evenNumbers;

    for (i = 0; i < lines; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (i == 0)
            {
                if (matrix[i][j] > 12 && matrix[i][j] < 20)
                {
                    auxLine1++;
                }
            }
            else
            {
                if (matrix[i][j] > 12 && matrix[i][j] < 20)
                {
                    auxLine2++;
                }
            }
        }
    }
    

    printf("The number of elements between 12 and 20 in line 1: %d\n", auxLine1);
    printf("The number of elements between 12 and 20 in line 2: %d\n", auxLine2);
    printf("Avarage of even numbers: %.2f\n", avarage);

    return 0;
}