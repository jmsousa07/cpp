/*
    Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme: ótimo — 3; bom — 2; regular — 1.
    Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
    ■ a média das idades das pessoas que responderam ótimo;
    ■ a quantidade de pessoas que responderam regular;
    ■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.
*/

#include <stdio.h>

#define Tpessoas 15

int main()
{
    int idade, cont, opn;
    int somaid =0, tpruim = 0, tpregular = 0, tpotimo = 0;
    float med_idade, porc_reg;

    for (cont = 0; cont < Tpessoas; cont++)
    {
        printf("Digite a idade do %do. espectador: ", cont+1);
        scanf("%d", &idade);

        printf("Digite a opniao do %do. espectador em relacao ao filme:\n", cont+1);
        printf("[1] - Ruim\n");
        printf("[2] - regular\n");
        printf("[3] - Otimo\n");
        scanf("%d", &opn);

        switch (opn)
        {
            case 1:
                tpruim++;
                break;
            case 2:
                tpregular++;
                break;
            case 3:
                tpotimo++;
                somaid += idade; 
                break;
            default:
                printf("Voce digitou uma opniao que nao e valida!\n");
                break;
        }

    }

    if (tpotimo > 0)
    {
        med_idade = (somaid / tpotimo);
    }
    else
    {
        med_idade = 0;
    }
    porc_reg = (tpregular / Tpessoas * 100);
    printf("\n============================================================================================\n");
    printf("Media da idades das pessoas que responderam otimo: %.1f\n", med_idade);
    printf("Quantidade de pessoas que achou o filme regular: %d\n", tpregular);
    printf("Porcentagem de pessoas que achou o filme regular entre todos os espectadores analisados %.2f%%\n", porc_reg);
    printf("============================================================================================\n");

    return 0;
}