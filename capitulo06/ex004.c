/*
    Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos iguais a 30, mostrando as posições em que apareceram.
*/ 

#include <stdio.h>

int main()
{
    int vet[15], i;

    for (i = 0; i < 15; i++)
    {
        printf("Digite o valor da %do. posicao do vetor: ", (i+1));
        scanf("%d", &vet[i]); 
    }

    for (i = 0; i < 15; i++)
    {
        if (vet[i] == 30)
        {
            printf("O valor da %do. posicao do vetor e 30.\n", (i+1));
        }
    }
    
    return 0;
}