#include <stdio.h>

int main()
{
    int num[6], i;
    int numPar[6], quantNumPar = 0;
    int numImpar[6], quantNumImpar = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %do. numero: ", i+1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0)
        {
            quantNumPar++;
            numPar[i] = num[i];
        }
        else
        {
            quantNumImpar++;
            numImpar[i] = num[i];
        }
        
    }

    if (quantNumPar == 0)
    {
        printf("Voce nao digitou nenhum numero par. ");
        printf("\nNumeros impares digitados: \n");
        for (i = 0; i < 6; i++)
        {
            printf(" - %d\n", numImpar[i]);
        }

    } else if (quantNumImpar == 0)
        {
            printf("Voce nao digitou nenhum numero impar. ");
            printf("Numeros pares digitados: \n");
            for (i = 0; i < 6; i++)
            {
                printf(" - %d\n", numPar[i]);
            } 

        } else
        {
            printf("Voce digitou %d numeros impares e %d numeros pares. \n", quantNumImpar, quantNumPar);
            printf("Numeros pares digitados: \n");
            for (i = 0; i < 6; i++)
            {
                if (numPar[i] > -10000 && numPar < 10000)
                {
                    printf(" - %d\n", numPar[i]);
                }
            }

            printf("Numeros impares digitados: \n");
            for (i = 0; i < 6; i++)
            {
                if (numImpar[i] > -10000 && numImpar < 10000)
                {
                    printf(" - %d\n", numImpar[i]);
                }
                
            }
        }

    return 0;
}