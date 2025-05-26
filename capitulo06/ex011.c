/*
    Faça um programa que receba dez números inteiros e armazene-os em um vetor.
    Calcule e mostre dois vetores resultantes:
    o primeiro com os números pares e o segundo, com os números ímpares. 
*/ 

#include <stdio.h>

int main()
{
    int i, auxPar = 0, auxImp = 0;
    int num[10], par[10], impar[10];

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0)
        {
            par[auxPar] = num[i];
            auxPar++;
        }
        else {
            impar[auxImp] = num[i];
            auxImp++;
        }
        
    }

    printf("\n Numeros Pares: \n");
    for (i = 0; i < auxPar; i++)
    {
        printf(" - %d \n", par[i]);
    }
    
    printf("\n Numeros Impares: \n");
    for (i = 0; i < auxImp; i++)
    {
        printf(" - %d \n", impar[i]);
    }

    return 0;
}