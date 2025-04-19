/*
    Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores, o preço de compra e o preço de venda de cada ação e que calcule e mostre:
    ■ o lucro de cada ação comercializada;
    ■ a quantidade de ações com lucro superior a R$ 1.000,00;
    ■ a quantidade de ações com lucro inferior a R$ 200,00;
    ■ o lucro total da empresa.
    
    Finalize com o tipo de ação ‘F’.
*/

#include <stdio.h>

int main()
{
    char acao;
    int quantLucroSup1000 = 0, quantLucroInf200 = 0;
    float precoCompra, precoVenda, lucroAcao, lucroTotal = 0;

    do
    {
        printf("\n Escolha em que acao voce ira investir: \n");
        printf("[A] - Ouro \n");
        printf("[B] - Criptomoedas \n");
        printf("[C] - PTR4 \n");
        printf("[F] - Finalizar \n");
        scanf(" %c", &acao);

        if (acao == 'A')
        {
            printf("Preco de compra da acao do Ouro: ");
            scanf("%f", &precoCompra);
            printf("Preco de venda da acao do Ouro: ");
            scanf("%f", &precoVenda);

            lucroAcao = (precoVenda - precoCompra);
            printf("\n Lucro da acao: R$ %.2f \n", lucroAcao);

        } else if (acao == 'B')
            {
                printf("Preco de compra da acao: ");
                scanf("%f", &precoCompra);
                printf("Preco de venda da acao: ");
                scanf("%f", &precoVenda);

                lucroAcao = (precoVenda - precoCompra);
                printf("\n Lucro da acao: R$ %.2f \n", lucroAcao);
                lucroTotal += lucroAcao;

            } else if (acao == 'C')
                {
                    printf("Preco de compra da acao: ");
                    scanf("%f", &precoCompra);
                    printf("Preco de venda da acao: ");
                    scanf("%f", &precoVenda);

                    lucroAcao = (precoVenda - precoCompra);
                    printf("\n Lucro da acao: R$ %.2f \n", lucroAcao);
                    lucroTotal += lucroAcao;

                }
                else
                {
                    printf("Voce finalizou o programa! \n");
                }
        
        if (lucroAcao > 1000)
        {
            quantLucroSup1000++;
        } else if (lucroAcao < 200)
            {
                quantLucroInf200++;
            }

    } while (acao != 'F');

    printf("\n============================================================\n");
    printf("Qunatidade de acoes com lucro superior a R$ 1000.00: %d\n", quantLucroSup1000);
    printf("Qunatidade de acoes com lucro inferior a R$ 200.00: %d\n", quantLucroInf200);
    printf("Lucro total da empresa: %.2f\n", lucroTotal);
    printf("============================================================\n");

    return 0;    
}