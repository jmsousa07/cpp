/*
    Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco números inteiros, calcule e mostre dois vetores resultantes.
    O primeiro vetor resultante será composto pela soma de cada número par do primeiro vetor somado a todos os números do segundo vetor.
    O segundo vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor
    tem no segundo vetor.
*/ 

#include <stdio.h>

int main()
{
    int vet[10], vet2[5];
    int resultanteSoma[10] = {0}, resultanteDivisores[10] = {0};
    int i, j, auxPar = 0, auxImpar = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %do. numero do vetor 1: ", (i+1));
        scanf("%d", &vet[i]); 
    }

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %do. numero do vetor 2: ", (i+1));
        scanf("%d", &vet2[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 1)
        {
            for (j = 0; j < 5; j++)
            {
                if (vet2[j] != 0 && vet[i] % vet2[j] == 0)
                {
                    resultanteDivisores[auxImpar]++;
                } 
            }
            auxImpar++;
        }
        else
        {
            resultanteSoma[auxPar] = vet[i];
            for (j = 0; j < 5; j++)
            {
                resultanteSoma[auxPar] +=  vet2[j];
            }
            auxPar++;
        }
    }

    for (i = 0; i < auxPar; i++)
    {
        printf("\n %do. valor do primeiro vetor resultante: %d", (i+1), resultanteSoma[i]);
    }
    
    printf("\n");

    for (i = 0; i < auxImpar; i++)
    {
        printf("\n %do. valor do segundo vetor resultante: %d", (i+1), resultanteDivisores[i]);
    }
   
    return 0;
}