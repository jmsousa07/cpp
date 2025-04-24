/*
    Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
    ■ os números múltiplos de 2;
    ■ os números múltiplos de 3;
    ■ os números múltiplos de 2 e de 3. 
*/  

#include <stdio.h>

int main()
{
    int num[7], i;

    for (i = 0; i < 7; i++)
    {
        printf("Digite o %do. numero inteiro: ", i+1);
        scanf("%d", &num[i]);
    }

    int numMultiplos2 = 0, numMultiplos3 = 0, numMultiplos6 = 0;

    printf("\n--- Multiplos de 2 ---\n");
    for (i = 0; i < 7; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("- %d;\n", num[i]);
        }
        numMultiplos2++;
    }

    if (numMultiplos2 == 0)
    {
        printf("\nVoce nao digitou nenhum multiplo de 2.\n");
    }

    printf("\n--- Multiplos de 3 ---\n");
    for (i = 0; i < 7; i++)
    {
        if (num[i] % 3 == 0)
        {
            printf("- %d;\n", num[i]);
        }
        numMultiplos3++;
    }

    if (numMultiplos3 == 0)
    {
        printf("\nVoce nao digitou nenhum multiplo de 3.\n");
    }

    printf("\n--- Multiplos de 2 e 3 ---\n");
    for (i = 0; i < 7; i++)
    {
        if (num[i] % 6 == 0)
        {
            printf("- %d;\n", num[i]);
        }
        numMultiplos6++;
    }

    if (numMultiplos6 == 0)
    {
        printf("\nVoce nao digitou nenhum multiplo de 2 e de 3.\n");
    }
    
    return 0;
}