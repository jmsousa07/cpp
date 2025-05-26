/*
    Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
    negativos e a soma dos números positivos desse vetor.
*/ 

#include <stdio.h>

int main()
{
    float num[10], somaPositivos = 0;
    int i, quantNeg = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero real: ");
        scanf("%f", &num[i]);

        if (num[i] < 0)
        {
            quantNeg++;
        }
        else {
            somaPositivos += num[i];
        }
        
    }

    printf("Quantidade de numeros negativos: %d\n", quantNeg);
    printf("Soma dos numeros positivos: %.1f\n", somaPositivos);

    return 0;
}