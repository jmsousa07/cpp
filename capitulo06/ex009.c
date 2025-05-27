/*
    Faça um programa que preencha três vetores com dez posições cada um:
    o primeiro vetor, com os nomes de dez produtos;
    o segundo vetor, com os códigos dos dez produtos;
    o terceiro vetor, com os preços dos produtos.
    Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão aumento.
    Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a R$ 1.000,00.
    Sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e preço, o aumento será de 20%;
    para aqueles que satisfazem apenas a condição de código, o aumento será de 15%;
    para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%.
*/ 

#include <stdio.h>

#define count 10

int main()
{
    char nomeProduto[count][30];
    int i, codProduto[count], aux[count] = {0}; // inicializando o array com todos os elementos iguais a 0.
    float precoProduto[count], novoPrecoProduto[count];

    for (i = 0; i < count; i++)
    {
        printf("\nDigite o nome do %d produto: ", (i+1));
        scanf("%s", &nomeProduto[i]);

        printf("Digite o codigo do %d produto: ", (i+1));
        scanf("%d", &codProduto[i]);

        printf("Digite o preco do %d produto: ", (i+1));
        scanf("%f", &precoProduto[i]);

        if (precoProduto[i] > 1000 && codProduto[i] % 2 == 0)
        {
            novoPrecoProduto[i] += precoProduto[i]*1.2;
            aux[i] = i;
        } else if (codProduto[i] % 2 == 0)
        {
            novoPrecoProduto[i] += precoProduto[i]*1.15;
            aux[i] = i;
        } else if (precoProduto[i] > 1000)
        {
            novoPrecoProduto[i] += precoProduto[i]*1.1;
            aux[i] = i;
        }
    }
    
    for (i = 0; i < count; i++)
    {
        if (aux[i] != 0)
        {
            printf("\n Nome do produto: %s | Codigo do produto: %d | Preco do produto: %.2f | Novo preco do produto: %.2f \n", nomeProduto[i], codProduto[i], precoProduto[i], novoPrecoProduto[i]);
        }   
    }

    return 0;
}