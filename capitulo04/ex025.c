/*
    Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
    extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
    H = número de horas extras – (2/3 * (número de horas falta))

    H (MINUTOS)        |  PREMIO (R$)
    >= 2.400           |   500,00
    >= 1.800 - < 2.400 |   400,00
    >= 1.200 - < 1.800 |   300,00
    >= 600 - < 1.200   |   200,00
    < 600              |   100,00
*/

#include <stdio.h>

int main()
{
    int H, horasExtras, horasFaltas;

    printf("Digite quantas horas extras voce trabalhou: ");
    scanf("%d", &horasExtras);
    printf("Digite quantas horas voce faltou ao trabalho: ");
    scanf("%d", &horasFaltas);

    horasExtras = horasExtras * 60;
    horasFaltas = horasFaltas * 60;
    H = (horasExtras - (2 * horasFaltas / 3));
    if (H > 0)
    {
        if (H < 600)
        {
            printf("Voce recebera um premio de R$ 100.00 reais \n");
        } else if (H <= 1200)
            {
                printf("Voce recebera um premio de R$ 200.00 reais \n");
            } else if (H < 1800)
                {
                    printf("Voce recebera um premio de R$ 300.00 reais \n");
                } else if (H < 2400)
                    {
                        printf("Voce recebera um premio de R$ 400.00 reais \n");
                    }
                    else
                    {
                        printf("Voce recebera um premio de R$ 500.00 reais \n");
                    }
    }
    else
    {
        printf("Voce digitou algo errado! Tente novamente. \n");
    }
    
    return 0;
}