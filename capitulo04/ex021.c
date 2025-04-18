/*
    Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
    A procedência obedece à tabela a seguir.

    CODIGO DE ORIGEM |  PROCEDENCIA
        1            |    Sul
        2            |    Norte
        3            |    Leste
        4            |    Oeste
        5 ou 6       |    Nordeste
        7 ou 8 ou 9  |    Sudeste
        10 a 20      |    Centro-oeste
        21 a 30      |    Nordeste
*/

#include <stdio.h>

int main()
{
    float preco;
    int codigo;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    if (codigo == 1)
    {
        printf("\nPROCEDENCIA: Sul\n");
    } else if (codigo == 2)
        {
            printf("\nPROCEDENCIA: Norte\n");
        } else if (codigo == 3)
            {
                printf("\nPROCEDENCIA: Leste\n");
            } else if (codigo == 4)
                {
                    printf("\nPROCEDENCIA: Oeste\n");
                } else if (codigo == 5 || codigo == 6)
                    {
                        printf("\nPROCEDENCIA: Nordeste\n");
                    } else if (codigo <= 9)
                        {
                            printf("\nPROCEDENCIA: Sudeste\n");
                        } else if (codigo <=20)
                            {
                                printf("\nPROCEDENCIA: Centro-oeste\n");
                            } else if (codigo <= 30)
                                {
                                    printf("\nPROCEDENCIA: Nordeste\n");
                                } else 
                                    {
                                        printf("\nO codigo que voce digitou e invalido! \n");
                                    }

    return 0;
}