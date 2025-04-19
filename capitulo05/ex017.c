/*
    Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado dia. 
    Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que estavam assistindo àquele canal.
    Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa não entrava na pesquisa. Faça um programa que:
    ■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo);
    ■ calcule e mostre a porcentagem de audiência de cada canal.
    
    Para encerrar a entrada de dados, digite o número do canal ZERO.
*/

#include <stdio.h>

int main()
{
    int cont, nCanal = 0, nPessoas;
    int somaC4 = 0, somaC5 = 0, somaC7 = 0, somaC12 = 0, somaPessoas = 0;
    float porcC4, porcC5, porcC7, porcC12;

    printf("-------------------------------------------------------------------------------\n");

    printf("Pesquisa em relacao aos espectadores dos canais 4, 5, 7, 12.\n");
    printf("obs: para terminar finalizar a contagem digite 0 em numero do canal.\n");

    do
    {
        cont = 1;
        printf("\nDigite o numero do canal assistido na %do. casa [4, 5, 7 ou 12]: ", cont);
        scanf("%d", &nCanal);

        printf("Digite o numero de pessoas assistindo ao canal %d nessa casa: ", nCanal);
        scanf("%d", &nPessoas);

        if (nCanal = 4)
        {
            somaC4 += nPessoas;
        }
        else 
        {
            if (nCanal = 5)
            {
                somaC5 += nPessoas;
            }
            else
            { 
                if (nCanal = 7)
                {
                    somaC7 += nPessoas;
                }
                else
                {
                    if (nCanal = 12)
                    {
                        somaC12 += nPessoas;
                    }
                    else
                    {
                        nCanal = 0;
                    }
                }
            }
        }

        somaPessoas += nPessoas;
        cont++;

    } while (nCanal != 0);

    porcC4 = (somaC4 / (somaPessoas * 100));
    porcC5 = (somaC5 / (somaPessoas * 100));
    porcC7 = (somaC7 / (somaPessoas * 100));
    porcC12 = (somaC12 / (somaPessoas * 100));

    printf("========================================================\n");
    printf("Porcentagem das pessoas que assistem o canal 4: %.1f%%\n", porcC4);
    printf("Porcentagem das pessoas que assistem o canal 5: %.1f%%\n", porcC5);
    printf("Porcentagem das pessoas que assistem o canal 7: %.1f%%\n", porcC7);
    printf("Porcentagem das pessoas que assistem o canal 12: %.1f%%\n", porcC12);
    printf("========================================================\n");
    
    printf("------------------------------------------------------------------------------\n");
}