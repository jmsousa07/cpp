/*
    Faça um programa que receba cinco números e mostre a saída a seguir:
    Digite o 1º número 5
    Digite o 2º número 3
    Digite o 3º número 2
    Digite o 4º número 0
    Digite o 5º número 2
    Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12
*/ 

#include <stdio.h>

int main()
{
    int vet[5], i, soma = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %do. valor: ", i+1);
        scanf("%d", &vet[i]);

        soma += vet[i];
    }

    printf("Os numeros digitados foram: ");
    for (i = 0; i < 5; i++)
    {
        if (i < 4)
        {
            printf("%d + ", vet[i]);
        }
        else
        {
            printf("%d = %d", vet[i], soma);
        }
    }
}