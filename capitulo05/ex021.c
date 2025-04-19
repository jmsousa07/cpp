/*
    Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.
    Os códigos utilizados são:

    1, 2, 3, 4  | Votos para os respectivos candidatos
        5       | Voto nulo
        6       | Voto em branco

    Faça um programa que calcule e mostre:
    ■ o total de votos para cada candidato;
    ■ o total de votos nulos;
    ■ o total de votos em branco;
    ■ a porcentagem de votos nulos sobre o total de votos;
    ■ a porcentagem de votos em branco sobre o total de votos.

    Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá mostrar uma mensagem.
*/

#include <stdio.h>

int main()
{
    int voto, totVotos = 0;
    int voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, votoNulo = 0, votoBranco = 0;
    float nuloDoTotal, brancoDoTotal;

    printf("Digite quantos votos quiser. \n");
    do
    {
        printf("[1] - Lula\n");
        printf("[2] - Bolsonaro\n");
        printf("[3] - Dilma\n");
        printf("[4] - Fernando H. C.\n");
        printf("[5] - Nulo\n");
        printf("[6] - Branco\n");
        printf("[0] - Encerrar contagem\n");
        scanf("%d", &voto);

        if (voto == 1)
        {
            voto1++;
        } else if (voto == 2)
            {
                voto2++;
            } else if (voto == 3)
                {
                    voto3++;
                } else if (voto == 4)
                    {
                        voto4++;
                    } else if (voto == 5)
                        {
                            votoNulo++;
                        } else if (voto == 6)
                            {
                                votoBranco++;
                            }

        if (voto != 0)
        {
            totVotos++;
        }
        
    } while (voto != 0);

    nuloDoTotal = ((float)votoNulo / totVotos * 100);
    brancoDoTotal = ((float)votoBranco / totVotos * 100);
    printf("\n===============================================================\n");
    printf("Total de votos no Lula: %d\n", voto1);
    printf("Total de votos no Bolsonaro: %d\n", voto2);
    printf("Total de votos na Dilma: %d\n", voto3);
    printf("Total de votos no FHC: %d\n", voto4);
    printf("Total de votos nulos: %d\n", votoNulo);
    printf("Total de votos em branco: %d\n", votoBranco);
    printf("Porcentagem de votos nulos sobre o total de votos: %.1f%%\n", nuloDoTotal);
    printf("Porcentagem de votos em branco sobre o toatal de votos: %.1f%%\n", brancoDoTotal);
    printf("===============================================================\n");
    
    return 0;
}