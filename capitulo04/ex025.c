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