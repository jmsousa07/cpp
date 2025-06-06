/*
    Faça um programa que leia um vetor com quinze posições para números inteiros.
    Depois da leitura, divida todos os seus elementos pelo maior valor do vetor.
    Mostre o vetor após os cálculos.
*/ 

#include <stdio.h>

#define tam 15

int main()
{
    int  i, vet[tam], maior = 0;
    float vetResultante[tam];

    for (i = 0; i < tam; i++)
    {
        printf("Digite o %do. valor do vetor: ", i+1);
        scanf("%d", &vet[i]);

        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }

    printf("\n ---------------- \n Vetor resultante \n ---------------- \n");
    for (i = 0; i < tam; i++)
    {
        vetResultante[i] = vet[i] / (float)maior;
        printf("posicao %d: %.2f \n", i+1, vetResultante[i]);
    }

    return 0;
}