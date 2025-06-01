/*
    Faça um programa que receba o nome de cinco produtos e seus respectivos preços.
    Calcule e mostre:
    ■ a quantidade de produtos com preço inferior a R$ 50,00;
    ■ o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
    ■ a média dos preços dos produtos com preço superior a R$ 100,00. 
*/ 

#include <stdio.h>

int main()
{
    char nome[5], nomeProdutoEntre50_100;
    double preco[5];
    float mediaPrecoMaior100;
    int quantPrecoMenor50 = 0, somaPrecoMaior100 = 0, i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite a primeira letra do nome do produto: ");
        scanf(" %c", &nome[i]);

        printf("Digite o preco desse produto: ");
        scanf("%lf", &preco[i]);

        if (preco[i] < 50.00)
        {
            quantPrecoMenor50++;
        }
        else if (preco[i] > 100.00)
        {
            somaPrecoMaior100++;
        }
    }
    mediaPrecoMaior100 = somaPrecoMaior100 / 5.0;

    printf("\n Nome dos produtos com preco entre R$ 50.00 e R$ 100.00: ");
    for (i = 0; i < 5; i++)
    {
        if (preco[i] > 50.00 && preco[i] < 100.00)
        {
            nomeProdutoEntre50_100 = nome[i];
            printf("%c ", nomeProdutoEntre50_100);
        }
    }
    printf("\n Quantidade de produtos com preco menor que R$ 50.00: %d", quantPrecoMenor50);
    printf("\n Media de preco dos produtos com preco entre R$ 50.00 e R$ 100.00: R$ %.2f", mediaPrecoMaior100);

    return 0;
}