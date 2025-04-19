/*
    Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado.
    Verifique a possibilidade de opção inválida e não se preocupe com as restrições como salário inválido.
    Menu de opções:
    1. Novo salário
    2. Férias
    3. Décimo terceiro
    4. Sair
    Digite a opção desejada.

    Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
            SALÁRIOS             |   PORCENTAGEM DE AUMENTO
        Até R$ 210,00            |        15%
        De R$ 210,00 a R$ 600,00 |        10%
        Acima de R$ 600,00       |         5%

    Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as férias equivalem a seu salário acrescido de um terço do salário.

    Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário multiplicado pelo número de meses de trabalho dividido por 12.

    Na opção 4: sair do programa.
*/

#include <stdio.h>

int main()
{
    int opc;

    while (opc != 4)
    {
        printf("\n Digite a opcao desejada: \n");
        printf(" 1. Novo salario \n");
        printf(" 2. Ferias \n");
        printf(" 3. Decimo terceiro \n");
        printf(" 4. Sair \n");
        scanf("%d", &opc);

        float sal, nSal;

        if (opc == 1)
        {
            printf("Digite o valor do seu salario: R$ ");
            scanf("%f", &sal);

            if (sal <= 210)
            {
                nSal = (sal + sal*0.15);
            } else if (sal <= 600)
                {
                    nSal = (sal + sal*0.10);
                }
                else
                {
                    nSal = (sal + sal*0.05);
                }
            printf("Seu novo salario sera de R$ %.2f\n", nSal);
            
        } else if (opc == 2)
            {
                float ferias;

                printf("Digite o valor do seu salario: R$ ");
                scanf("%f", &sal);

                ferias = (sal + sal / 3);
                printf("Suas ferias equivalem a %.0f\n", ferias);
                
            } else if (opc == 3)
                {
                    int mesesTrabalho;
                    float decTerceiro;

                    printf("Digite o valor do salario do funcionario: R$ ");
                    scanf("%f", &sal);

                    printf("Digite o numero de meses de trabalho do funcionario na empresa: (Maximo: 12) ");
                    scanf("%d", &mesesTrabalho);

                    decTerceiro = (sal * mesesTrabalho / 12);
                    printf("O valor do decimo terceiro desse funcionario e: R$ %.2f \n", decTerceiro);
                } else if (opc == 4)
                    {
                        printf("Voce encerrou o pregrama... \n");
                    }
                    else
                    {
                        printf("Voce digitou uma opcao invalida. Tente novamente! \n");
                    }
    }
    
    return 0;
}