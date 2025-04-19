/*
    Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais, conforme a tabela a seguir:

    TIPO |     DESCRIÇAO         | RENDIMENTO MENSAL
     1   |  Poupança             |    1,5%
     2   |  Poupança plus        |     2%
     3   |  Fundos de renda fixa |     4%

    Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule e mostre o rendimento mensal de acordo com o tipo do investimento.
    No final, o programa deverá mostrar o total investido e o total de juros pagos.
    A leitura terminará quando o código do cliente digitado for menor ou igual a 0.
*/

#include <stdio.h>

int main()
{
    int codigo, tipoInvestimento;
    float valorInvest, rendMensal, totalValorInvest = 0, totalJuros = 0;

    printf("====================== SISTEMA DE INVESTIMENTOS ====================== \n");
    printf(" Informacoes: Digite codigo do cliente, o tipo de investimento e o valor do investimento. \n");
    printf(" Obs: Para finalizar os investimentos digite um codigo de cliente menor ou igual a zero. \n");
    printf("======================================================================= \n");

    do
    {
        printf("Digite o codigo de cliente: ");
        scanf("%d", &codigo);

        if (codigo > 0)
        {
            printf("Digite o tipo de investimento \n");
            printf("1 - Poupanca \n");
            printf("2 - Poupanca Plus \n");
            printf("3 - Fundos de renda fixa \n");
            scanf("%d", &tipoInvestimento);

            printf("Digite o valor que voce quer investir: R$ ");
            scanf("%f", &valorInvest);

            if (tipoInvestimento == 1)
            {
                rendMensal = (valorInvest * 0.015);
                printf("Rendimento mensal: R$ %.2f \n", rendMensal);
            } else if (tipoInvestimento == 2)
                {
                    rendMensal = (valorInvest * 0.02);
                    printf("Rendimento mensal: R$ %.2f \n", rendMensal);
                }
                else
                {
                    rendMensal = (valorInvest * 0.04);
                    printf("Rendimento mensal: R$ %.2f \n", rendMensal);
                }
        
            totalValorInvest += valorInvest;
            totalJuros += rendMensal;
        }
        else
        {
            printf("Voce encerrou seus investimentos... \n");
        }
    } while (codigo > 0);

    printf("\n Total de investimentos: R$ %.2f", totalValorInvest);
    printf("\n Total de juros pagos: R$ %.3f", totalJuros);

    return 0;
}