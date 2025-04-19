/*
    Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas daquelas com mais de 50 anos.
    Para encerrar a entrada de dados, digite idade menor ou igual a zero.
*/

#include <stdio.h>

int main()
{
    int idade, totPesoas = 0;
    float alt, somaAlt = 0, mediaAlt;

    printf("Digite a idade e a altura de quantas pessoas quiser. Para finalizar digite uma idade menor ou igual a zero\n");
    do
    {
        printf("Digite a idade da pessoa: [Ano] ");
        scanf("%d", &idade);
        printf("Digite a altura da pessoa: [Metro] ");
        scanf("%f", &alt);

        if (idade > 50)
        {
            somaAlt += alt;
            totPesoas++;
        }
        
    } while (idade > 0);

    mediaAlt = (somaAlt / totPesoas);
    printf("\nMedia das alturas das pessoas com mais de 50 anos de idade: %.2f\n", mediaAlt);
    
    return 0;
}