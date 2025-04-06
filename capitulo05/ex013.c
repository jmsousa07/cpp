#include <stdio.h>

int main()
{
    int idade, cont, sp10 = 0, sp20 = 0, sp30 = 0, sp31 = 0;
    float peso, somapeso10 = 0, somapeso20 = 0, somapeso30 = 0, somapeso31 = 0;
    float med10, med20, med30, med31;

    for (cont = 0; cont < 15; cont++)
    {
        printf("Digite a idade da %do. pessoa: [Anos] ", cont+1);
        scanf("%d", &idade);

        printf("Digite o peso da %do. pessoa: [Kg] ", cont+1);
        scanf("%f", &peso);

        if (idade <= 10)
        {
            sp10++;
            somapeso10 += peso;
        } else if (idade > 10 && idade <= 20)
            {
                sp20++;
                somapeso20 += peso;
            } else if (idade > 20 && idade <= 30)
                {
                    sp30++;
                    somapeso30 += peso;
                } else
                {
                    sp31++;
                    somapeso31 += peso;
                }   
    }

    med10 = (somapeso10 / sp10);
    med20 = (somapeso20 / sp20);
    med30 = (somapeso30 / sp30);
    med31 = (somapeso31 / sp31);
    printf("\n================================================================\n");
    printf("Media dos pesos das pessoas com idade entre 1 e 10: %.1fKg \n", med10);
    printf("Media dos pesos das pessoas com idade entre 11 e 20: %.1fKg\n", med20);
    printf("Media dos pesos das pessoas com idade entre 21 e 30: %.1fKg\n", med30);
    printf("Media dos pesos das pessoas com idade superior a 30: %.1fKg\n", med31);
    printf("=================================================================\n=");

    return 0;
}