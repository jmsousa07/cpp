/*
    Faça um programa que receba o nome de oito clientes e armazene-os em um vetor.
    Em um segundo vetor, armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes.
    Sabe-se que, para cada dez locações, o cliente tem direito a uma locação grátis.
    Faça um programa que mostre o nome de todos os clientes, com a quantidade de locações grátis a que ele tem direito
*/ 

#include <stdio.h>

int main()
{
    char nomeCliente[8][20];
    int i, quantLoc[8], quantLocGratis[8];

    for (i = 0; i < 8; i++)
    {
        printf("Digite o nome do cliente: ");
        scanf("%s%*c", &nomeCliente[i]);

        printf("Digite a quantidade de DVD's locados em 2011 por esse cliente: ");
        scanf("%d", &quantLoc[i]);

        if (quantLoc[i] >= 10)
        {
            quantLocGratis[i] = quantLoc[i] / 10;
        }
        else
        {
            quantLocGratis[i] = 0;
        } 
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf(" Nome do cliente: %s | Quantidade de locacoes gratis a que ele tem direito: %d \n", nomeCliente[i], quantLocGratis[i]);
    }
    
    return 0;
}