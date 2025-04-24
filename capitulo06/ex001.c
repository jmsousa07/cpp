/* 
    Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
    ■ todos os números pares;
    ■ a quantidade de números pares;
    ■ todos os números ímpares;
    ■ a quantidade de números ímpares. 
*/

#include <stdio.h>

int main()
{
    int num[6], i = 0, jPar = 0, jImpar = 0;
    int quantNumPar = 0, quantNumImp = 0;
    int numPar[6], numImpar[6];

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %do. valor inteiro: ", i);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0)
        {
            quantNumPar++;
            numPar[jPar] = num[i];
            jPar++;
        }
        else 
        {
            quantNumImp++;
            numImpar[jImpar] = num[i];
            jImpar++;
        }
    }

    if (quantNumImp == 0)
    {
        printf("\nVoce nao digitou nenhum numero IMPAR.\n");
        printf("Numeros PARES digitados: \n");

        for (i = 0; i < 6; i++)
        {
            printf("[%d] - %d\n", i, numPar[i]);
        }
    } else if (quantNumPar == 0)
        {
            printf("\nVoce nao digitou nenhum numero PAR.\n");
            printf("Numeros IMPARES digitados: \n");

            for (i = 0; i < 6; i++)
            {
                printf("[%d] - %d\n", i, numImpar[i]);
            }
        }
        else
        {
            printf("\nVoce digitou %d numeros PARES\n", quantNumPar);
             printf("Voce digitou %d numeros IMPARES\n", quantNumImp);

            printf("\nNumeros PARES digitados:\n");

            for (i = 0; i < quantNumPar; i++)
            {
                jPar = i;
                printf("%do. %d\n", i, numPar[jPar]);
            }
            

            printf("\nNumeros IMPARES digitados:\n");

            for (i = 0; i < quantNumImp; i++)
            {
                jImpar = i;
                printf("%do. %d\n", i, numImpar[jImpar]);
            }
        }
    
    return 0;
}