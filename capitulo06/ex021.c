/*
    Faça um programa que leia um vetor com dez posições para números inteiros.
    Crie um segundo vetor, substituindo os valores nulos por 1.
    Mostre os dois vetores.
*/

#include <stdio.h>

#define tam 10

int main()
{
    int vet1[tam], vet2[tam], i;

    for (i = 0; i < tam; i++)
    {
        printf("Digite o %do. valor do vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
    }
    
    for (i = 0; i < tam; i++)
    {
        if (vet1[i] == 0) {
            vet2[i] = 1;
        }
        else {
            vet2[i] = vet1[i];
        }
    }
    
    printf(" Vetor 1: \n");
    for (i = 0; i < tam; i++)
    {
        printf(" - %d \n", vet1[i]);
    }

    printf(" Vetor 2: \n");
    for (i = 0; i < tam; i++)
    {
        printf(" - %d \n", vet2[i]);
    }

    return 0;
}