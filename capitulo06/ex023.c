/*
    Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros.
    O programa deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
    elemento de A do penúltimo de B, acumulando o valor e assim por diante.
    Ao final, mostre o resultado de todas as subtrações realizadas.
*/ 

#include <stdio.h>

#define tam 5

int main()
{
    int  i, A[tam], B[tam] = {0}, sub = 0;

    for (i = 0; i < tam; i++)
    {
        printf("Digite o %do. valor do vetor A: ", i+1);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < tam; i++)
    {
        printf("Digite o %do. valor do vetor B: ", i+1);
        scanf("%d", &B[i]);
    }

    int aux = tam-1;
    for (i = 0; i < tam; i++)
    {
        printf(" A[%d] - B[%d] = %d\n", i, aux, (A[i] - B[aux]));
        sub += A[i] - B[aux];
        aux--;
    }

    printf("Resultado de todas as subtracoes: %d", sub);
    
    return 0;
}