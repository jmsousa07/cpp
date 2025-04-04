#include <stdio.h>

int main()
{
    float alt_dg, alcance;
    float qdegrau;
    printf("Qual a altura de cada degrau da escada? [em Metros] ");
    scanf("%f", &alt_dg);
    printf("Qual a altura que voce deseja alcancar subindo essa escada? [em Metros] ");
    scanf("%f", &alcance);
    qdegrau = (alcance / alt_dg);
    printf("Voce tera que subir %.1f degraus para alcancar a altura desejada!", qdegrau);

    return 0;
}