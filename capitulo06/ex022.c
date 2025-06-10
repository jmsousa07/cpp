/*
    Faça um programa que leia um vetor A de dez posições.
    Em seguida, compacte o vetor, retirando os valores nulos e negativos.
    Armazene esse resultado no vetor B. Mostre o vetor B.
    (Lembre-se: o vetor B pode não ser completamente preenchido.)
*/ 

#include <stdio.h>

#define tam 10

int main()
{
    int A[tam], i, B[tam] = {0}, aux = 0;

    for (i = 0; i < tam; i++)
    {
        printf("Digite o %do. valor do vetor A: ", i+1);
        scanf("%d", &A[i]);

        if (A[i] > 0)
        {
            B[aux] = A[i];
            aux++;
        }
    }
    
    if (aux == 0)
    {
        printf("\n O vetor B esta vazio! (Todos os valores do vetor A eram nulos ou negativos) \n");
    }
    else {
        printf("\n Vetor B: \n");
        for (i = 0; i < aux; i++)
        {
            printf(" -> %d \n", B[i]);
        }
    }

    return 0;
}