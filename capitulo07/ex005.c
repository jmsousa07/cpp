/*
    Elabore um programa que preencha uma matriz 12x4 com os valores das vendas de uma loja, em que cada linha representa um mês do ano e cada coluna representa uma semana do mês.
    O programa deverá calcular e mostrar:
    ■ o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
    ■ o total vendido em cada semana durante todo o ano;
    ■ o total vendido pela loja no ano. 
*/ 

#include <stdio.h>

#define meses 12
#define semanas 4

int main()
{
    float vendas[meses][semanas], somaVendasMes[meses] = {0}, somaVendasTotal = 0;
    int i, j;

    printf("Preencha com os valores de venda de sua loja. \n");
    for (i = 0; i < meses; i++)
    {
        printf(" -------\n Mes: %d \n -------\n", i+1);
        for (j = 0; j < semanas; j++)
        {
            printf("Digite o valor das vendas na %do. semana desse mes: ", j+1);
            scanf("%f", &vendas[i][j]);

            somaVendasMes[i] += vendas[i][j];
        }
        somaVendasTotal += somaVendasMes[i];
    }

    printf("\n");
    for (i = 0; i < meses; i++)
    {
        switch (i)
        {
        case 0:
            printf(" Mes: Janeiro \n");
            break;
        case 1:
            printf(" Mes: Fevereiro \n");
            break;
        case 2:
            printf(" Mes: Marco \n");
            break;
        case 3:
            printf(" Mes: Abril \n");
            break;
        case 4:
            printf(" Mes: Maio \n");
            break;
        case 5:
            printf(" Mes: Junho \n");
            break;
        case 6:
            printf(" Mes: Julho \n");
            break;
        case 7:
            printf(" Mes: Agosto \n");
            break;
        case 8:
            printf(" Mes: Setembro \n");
            break;
        case 9:
            printf(" Mes: Outubro \n");
            break;
        case 10:
            printf(" Mes: Novembro \n");
            break;
        case 11:
            printf(" Mes: Dezembro \n");
            break;
        default:
            printf(" ERRO! Mes inexistente. \n");
            break;
        }

        printf("Total vendido nesse mes: %.2f \n", somaVendasMes[i]);
        for (j = 0; j < semanas; j++)
        {
            printf("Valor das vendas na %do. semana desse mes: %.2f\n", j+1, vendas[i][j]);
        }
    }
    printf("\n Total de vendas no ano: %.2f \n", somaVendasTotal);
    

    return 0;
}