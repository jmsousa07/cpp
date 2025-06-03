/*
    Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo índice,
    colocando o resultado em um terceiro vetor. Mostre o vetor resultante. 
*/ 

#include <stdio.h>

#define tam 10

int main()
{
    int A[tam], B[tam], C[tam], i;

    for (i = 0; i < tam; i++)
    {
        printf("Digite o %do. valor do vetor A: ", i+1);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < tam; i++)
    {
        printf("Digite o %do. valor do vetor B: ", i+1);
        scanf("%d", &B[i]);
        C[i] = A[i]*B[i];
    }

    for (i = 0; i < tam; i++)
    {
        printf("C[%d] = %d \n", i, C[i]);
    }    
    
    return 0; 
}