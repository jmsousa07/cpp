#include <stdio.h>
#include <string.h>

int main()
{
    float preco;
    int categoria;
    char situacao;

    printf(" Digite o preco do produto: ");
    scanf("%f", &preco);

    printf(" Digite a categoria do produto: \n");
    printf(" [1] - Limpeza \n");
    printf(" [2] - Alimentacao \n");
    printf(" [3] - Vestuario \n");
    scanf("%d", &categoria);
    
    printf(" Digite a situacao do produto: \n");
    printf(" [R] - Produtos que necessitam de refrigeracao \n");
    printf(" [N] - Produtos que nao necessitam de refrigeracao \n");
    scanf(" %c", &situacao);

    float percAumento, valorAumento;

    if (preco <= 25)
    {
        switch (categoria)
            {
            case 1:
                percAumento = 0.05;
                break;
            case 2:
                percAumento = 0.08;
                break;
            case 3:
                percAumento = 0.10;
                break;
            default:
                printf("Voce digitou uma categoria nao existente. Tente novamente.");
                break;
            }
    }
    else
    {
        switch (categoria)
            {
            case 1:
                percAumento = 0.12;
                break;
            case 2:
                percAumento = 0.15;
                break;
            case 3:
                percAumento = 0.18;
                break;
            default:
                printf("Voce digitou uma categoria nao existente. Tente novamente.");
                break;
            }
    }

    float percImposto, valorImposto;
    if (situacao == 'R' || situacao == 'r' || categoria == 2)
    {
        percImposto = 0.05;
    }
    else
    {
        percImposto = 0.08;
    }
    
    float novoPreco;
    char classif[10];

    valorAumento = (preco * percAumento);
    valorImposto = (preco * percImposto);
    novoPreco = (preco + valorAumento - valorImposto);
    if (novoPreco <= 50)
    {
        strcpy(classif, "Barato");
    }
    else if (novoPreco < 120)
    {
        strcpy(classif, "Normal");
    }
    else
    {
        strcpy(classif, "Caro");
    }

    printf(" Valor do aumento: R$ %.2f \n", valorAumento);
    printf(" Valor do imposto: R$ %.2f \n", valorImposto);
    printf(" Novo preco do produto: R$ %.2f \n", novoPreco);
    printf(" Classificacao: %s \n", classif);
    
    return 0;
}