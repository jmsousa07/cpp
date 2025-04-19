/*
    Faça um programa que apresente o menu de opções a seguir:
    Menu de opções:
    1. Média aritmética
    2. Média ponderada
    3. Sair
    Digite a opção desejada.

    Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
    Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
    Na opção 3: sair do programa.

    Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.
*/

#include <stdio.h>

int main()
{
    int opc = 0;

    while (opc != 3)
    {
        float n1, n2, n3, media;

        printf("\n-------------------------------\n");
        printf(" MENU DE OPCOES: \n");
        printf(" 1. Media aritmetica \n");
        printf(" 2. Media ponderada \n");
        printf(" 3. Sair \n");
        printf("-------------------------------\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opc);
        
        if (opc == 1)
        {
            printf("Digite a primeira nota: ");
            scanf("%f", &n1);
            printf("Digite a segunda nota: ");
            scanf("%f", &n2);
            
            media = ((n1 + n2 ) / 2);
            printf("Media aritmetica = %.2f \n", media);
        } else if (opc == 2)
            {
                int p1, p2, p3;

                printf("Digite a primeira nota: ");
                scanf("%f", &n1);
                printf("Digite o peso dessa nota: ");
                scanf("%d", &p1);

                printf("Digite a segunda nota: ");
                scanf("%f", &n2);
                printf("Digite o peso dessa nota: ");
                scanf("%d", &p2);

                printf("Digite a terceira nota: ");
                scanf("%f", &n3);
                printf("Digite o peso dessa nota: ");
                scanf("%d", &p3);

                media = ((n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3));
                printf("Media ponderada = %.2f \n", media);
            } else if (opc == 3)
                {
                    printf("Voce finalizou o programa! \n");
                }
                else
                {
                    printf("Voce digitou uma opcao invalida! Tente novamente. \n");
                }
    }

    return 0;
}