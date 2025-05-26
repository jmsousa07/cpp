/*
    Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
    Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
    Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na loja.
    Calcule e mostre:
    ■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
    ■ o total das vendas de todos os vendedores;
    ■ o maior valor a receber e o nome de quem o receberá;
    ■ o menor valor a receber e o nome de quem o receberá.
*/ 

#include <stdio.h>

int main()
{
    int i, totVendasCadaVendedor[10], totalVendas = 0, auxMaior, auxMenor;
    float comissao[10], valorAReceber[10], maiorValor = 0, menorValor;
    char nomeVendedor[10][30];

    for (i = 0; i < 10; i++)
    {
        printf("Digite o total de vendas do %do. vendedor: ", (i+1));
        scanf("%d", &totVendasCadaVendedor[i]);

        printf("Digite o percentual de comissao do %do. vendedor: ", (i+1));
        scanf("%f", &comissao[i]);

        printf("Digite o nome do %do. vendedor: ", (i+1));
        scanf("%s", &nomeVendedor[i]);

        valorAReceber[i] = totVendasCadaVendedor[i] * (comissao[i]/100.0);
        totalVendas += totVendasCadaVendedor[i];

        if (valorAReceber[i] > maiorValor)
        {
            maiorValor = valorAReceber[i];
            auxMaior = i;
        }

        if (i == 0)
        {
            menorValor = valorAReceber[i];
            auxMenor = i;
        }
        else if (valorAReceber[i] < menorValor)
        {
            menorValor = valorAReceber[i];
            auxMenor = i;
        }    
    }

    for (i = 0; i < 10; i++)
    {
        printf("\n Nome do vendedor: %s  | Valor a receber: %.2f", nomeVendedor[i], valorAReceber[i]);
    }
    printf("\n Total de vendas de todos os vendedores: %d\n", totalVendas);
    printf(" Maior valor a receber: %.2f, esse valor pertence a %s\n", maiorValor, nomeVendedor[auxMaior]);
    printf(" Menor valor a receber: %.2f, esse valor pertence a %s\n", menorValor, nomeVendedor[auxMenor]);

    return 0;
}