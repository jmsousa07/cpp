/*
    Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os números que foram digitados.
*/

#include <stdio.h>

int main()
{
    int cont, num, i;
    int Tprimos = 0, result, divisores;

    for (cont = 0; cont < 10; cont++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        divisores = 0;
        for (i = 1; i <= num; i++)
        {
            result = (num % i);
            if (result == 0)
            {
                divisores++;
            }
        }

        if (divisores == 2)
        {
            Tprimos++;
        }
    }

    printf("Total de numeros primos digitados: %d", Tprimos);
     
    return 0;
}