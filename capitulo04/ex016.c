/*
    Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
    receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

       PRECO ATUAL              | % DE DESCONTO
    Até R$ 30,00                |   Sem desconto
    Entre R$ 30,00 e R$ 100,00  |   10%
    Acima de R$ 100,00          |   15%
*/

#include <stdio.h>

float cod, preco, desconto;

int main()
{
    printf("Qual o codigo do produto? ");
    scanf("%f", &cod);
    printf("Qual o preco atual desse produto? R$");
    scanf("%f", &preco);
    
    if (preco <= 30)
        printf("Este produto nao tera desconto.\n");
    else
        if (preco > 30 && preco <= 100)
        {
            desconto = (preco * 0.10);
            preco = (preco - desconto);
            printf("Esse produto recebeu 10%% de desconto que equivale a R$%.2f\n", desconto);
            printf("Agora ele passara a custar R$%.2f\n", preco);
        }
        else
        {
           desconto = (preco * 0.15);
           preco = (preco - desconto);
           printf("Esse produto recebeu 15%% de desconto, que equivale a R$%.2f\n", desconto);
           printf("Agora ele passara a custar R$%.2f\n", preco);
        }

    return 0;
}