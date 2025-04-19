/*
    Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos números primos.
*/

#include <stdio.h>

int main()
{
    int i, somai, somap;
    int v[10];

    somap = 0;
    somai = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %do. valor: ", i+1);
        scanf("%d", &v[i]);

        if (v[i] % 2 == 0)
        {
            somap += v[i];
        }
        else
        {
            somai += v[i];
        } 
        
    }

    printf("\nSoma dos numeros pares = %d\n", somap);
    printf("Soma dos numeros impares = %d\n", somai);

    return 0;
}