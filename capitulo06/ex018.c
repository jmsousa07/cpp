/*
    Faça um programa que preencha um vetor com quinze números, determine e mostre:
    ■ o maior número e a posição por ele ocupada no vetor;
    ■ o menor número e a posição por ele ocupada no vetor. 
*/ 

#include <stdio.h>

#define const 15

int main()
{
    int vet[const], maiorNum = 0, menorNum, posMaior, posMenor;

    for (int i = 0; i < const; i++)
    {
        printf("Digite o %do. valor do vetor: ", i+1);
        scanf("%d", &vet[i]);

        if (vet[i] > maiorNum)
        {
            maiorNum = vet[i];
            posMaior = i;
        }

        if (i == 0)
        {
            menorNum = vet[i];
            posMenor = i;
        }
        else if (vet[i] < menorNum)
        {
            menorNum = vet[i];
            posMenor = i;
        }
        
    }

    printf("Maior numero do vetor: %d, esse numero ocupa a posicao %d do vetor.\n", vet[posMaior], posMaior);
    printf("Menor numero do vetor: %d, esse numero ocupa a posicao %d do vetor.\n", vet[posMenor], posMenor);

    return 0;
}