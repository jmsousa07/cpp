#include <stdio.h>

#define ano_fut 2050

int main()
{
    int ano_atual, ano_nasc, idade;
    printf("Em que ano estamos: ");
    scanf("%d", &ano_atual);
    printf("Em que ano voce nasceu? ");
    scanf("%d", &ano_nasc);

    idade = (ano_atual - ano_nasc);
    printf("\nSua idade e de %d anos\n", idade);
    idade = ((ano_fut - ano_atual) + idade);
    printf("Voce tera %d anos em 2050 ", idade);

    return 0;
}