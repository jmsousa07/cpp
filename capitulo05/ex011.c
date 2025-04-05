#include <stdio.h>

int main()
{
    int cont = 0, qparcelas;
    float ;
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