/*
    Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro contendo os elementos dos dois vetores anteriores ordenados de maneira decrescente.
*/ 

#include <stdio.h>

#define const 10

int main()
{
    int vet1[const], vet2[const], vet3[20], i;

    for (i = 0; i < const; i++)
    {
        printf("Digite o %d valor do vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
    }

    for (i = 0; i < const; i++)
    {
        printf("Digite o %d valor do vetor 2: ", i+1);
        scanf("%d", &vet2[i]);
    }
    

    int cont = 10;
    for (i = 0; i < const; i++)
    {
        vet3[i] = vet1[i];
        vet3[cont] = vet2[i];
        cont++;
    }

    
    int aux;
     for (i = 0; i < 19; i++)
     {
        cont = 1;
        for (int j = 0; j < 19-i; j++)
        {
            if (vet3[j] < vet3[cont])
            {
                aux = vet3[j];
                vet3[j] = vet3[cont];
                vet3[cont] = aux;
            }
            cont++;
        }
    }

    printf("Vetor 3: \n");
    for (i = 0; i < const*2; i++)
    {
       printf(" - %d \n", vet3[i]);
    }
    
    return 0;
}