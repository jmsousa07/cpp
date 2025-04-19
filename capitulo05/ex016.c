/*
    Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas.
    Finalize digitando idade igual a zero.
*/

#include <stdio.h>

int main()
{
    int idade, somaIdade = 0, numPessoas = 0;
    float media;

    printf("Digite as idades de quantas pessoas desejar. Para finalizar a contagem de pessoas pressione 0");
    do
    {
        printf("\nDigite a idade: ");
        scanf("%d", &idade);
        somaIdade = (somaIdade + idade);
        numPessoas++;

    } while (idade != 0);

    media = ((float) somaIdade / numPessoas);
    printf("\nA media das idades digitadas = %.1f", media);
    return 0;
}