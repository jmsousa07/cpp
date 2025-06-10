/*
    Faça um programa que leia um vetor com quinze posições para números inteiros.
    Crie, a seguir, um vetor resultante que contenha todos os números primos do vetor digitado.
    Escreva o vetor resultante.
*/ 

#include <stdio.h>

#define tam 15

int main()
{
    int  i, A[tam], qtdPrimos = 0, auxPrimos[tam] = {0};

    for (i = 0; i < tam; i++)
    {
        int numDiv = 0;

        printf("Digite o %do. valor do vetor A: ", i+1);
        scanf("%d", &A[i]);

        for (int j = 1; j <= A[i]; j++)
        {
            if (A[i] % j == 0)
            {
                numDiv++;
            }
        }

        if (numDiv == 2)
        {
            auxPrimos[qtdPrimos] = i;
            qtdPrimos++;
        }
    }

    int B[qtdPrimos-1];
    for (i = 0; i < qtdPrimos; i++)
    {
        B[i] = A[auxPrimos[i]];
    }
    
    if (qtdPrimos == 0)
    {
        printf("\n O vetor resultante esta vazio! (nao foram encontrados numeros primos) \n");
    }
    else
    {
        printf("\n Vetor resultante: \n");
        for (i = 0; i < qtdPrimos; i++)
        {
            printf(" -> %d \n", B[i]);
        }
    }

    return 0;
}