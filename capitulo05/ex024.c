/*
    Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o menor valor do conjunto.
    Considere que:
    ■ para encerrar a entrada de dados, deve ser digitado o valor zero;
    ■ para valores negativos, deve ser enviada uma mensagem;
    ■ os valores negativos ou iguais a zero não entrarão nos cálculos. 
*/

#include <stdio.h>

int main()
{
    int num, maiorNum = 1, menorNum = 1000;

    printf("Digite valores inteiros e positivos. Para encerrar digite o numero 0. \n");
    do
    {
        printf(" Digite um valor: ");
        scanf("%d", &num);

        if (num > 0)
        {
            if (num > maiorNum)
            {
                maiorNum = num;
            } else if (num < menorNum)
                {
                    menorNum = num;
                }
            
        } else if (num == 0)
            {
                printf("Voce encerrou a entrada de valores... \n");
            }
            else
            {
                printf("Voce digitou um valor invalido. Tente novamente! \n");
            }
        
    } while (num != 0);

    printf("\n Maior numero digitado: %d", maiorNum);
    printf("\n Menor numero digitado: %d", menorNum);

    return 0;
}