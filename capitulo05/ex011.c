/*
    Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados:
    preço final, quantidade de parcelas e valor da parcela. Considere o seguinte:
    ■ o preço final para compra à vista tem desconto de 20%;
    ■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
    ■ os percentuais de acréscimo encontram-se na tabela a seguir.
    
    QUANTIDADE DE PARCELAS | PERCENTUAL DE ACRESCIMO SOBRE O PREÇO FINAL
        6                  |          3%
        12                 |          6%
        18                 |          9%
        24                 |          12%
        30                 |          15%
        36                 |          18%
        42                 |          21%
        48                 |          24%
        54                 |          27%
        60                 |          30%
*/

#include <stdio.h>

int main()
{
    int cont = 0, qparcelas;
    float preco, avista, pParcela;

    printf("Digite o preco do carro: ");
    scanf("%f", &preco);
    avista = (preco * 0.80);

    printf("\nPreco a vista: %.2f", avista);
    printf("\nPARCELAS | PRECO FINAL | VALOR DA PARCELA\n");
    for (cont = 6; cont <= 60; cont += 6)
    {
        qparcelas = (cont);
        preco = (preco + (preco * cont / 2 / 100));
        pParcela = (preco / qparcelas);
        printf("  %dx     |  %.2f   |  %.2f \n", qparcelas, preco, pParcela);
    }
    
    return 0;
}