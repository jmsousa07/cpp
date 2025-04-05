#include <stdio.h>

#define Tpessoas 10

int main()
{
    int idade, cont, somai, alt190;
    float alt, peso;
    float cond[3];

    somai = 0;
    alt190 = 0;
    cond[0] = 0;
    cond[1] = 0;
    cond[2] = 0;

    for (cont = 0; cont < Tpessoas; cont++)
    {
        printf("Digite a idade da %do. pessoa: [Anos] ", cont+1);
        scanf("%d", &idade);

        printf("Digite a altura da %do. pessoa: [Metros] ", cont+1);
        scanf("%f", &alt);

        printf("Digite o peso da %do. pessoa: [Kilogramas] ", cont+1);
        scanf("%f", &peso);

        somai += idade;

        if (peso > 90 && alt < 1.50)
        {
            cond[1]++;
        }

        if (alt > 1.90)
        {
            alt190++;
        }

        if (idade > 10 && idade < 30)
        {
            cond[2]++;
        }

    }

    if (alt190 > 0)
    {
         cond[2] = (cond[2] / alt190 * 100);
    }

    cond[0] = (somai / Tpessoas);
    printf("-------------------------------------------------------------------------------------------");
    printf("Media das idades das dez pessoas: %.1f", cond[0]);
    printf("Quantidade de pessoas com peso maior que 90 e altura inferior a 1.50: %d", cond[1]);
    printf("Porcentagem de pessoas com idade entre 10 e 30 entre as pessoas com altura maior que 1.90: %.1f%%", cond[2]);
    printf("-------------------------------------------------------------------------------------------");

    return 0;
}