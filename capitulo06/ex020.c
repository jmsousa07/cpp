/*
    Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os números positivos.
*/ 

#include <stdio.h>

int main()
{
    int i, vet[10];

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %do. valor do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Valores poitivos: \n");
    for (i = 0; i < 10; i++)
    {
        if (vet[i] > 0)
        {
            printf("%d \n", vet[i]);
        } 
    }
    
    return 0;
}