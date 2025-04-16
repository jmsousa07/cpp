#include<stdio.h>

int main()
{
    float hora, convMin, totMin, convSeg;
    int min;

    printf("Digite algum horario: ");
    scanf("%f", &hora);
    printf("Digite um valor em minutos: ");
    scanf("%d", &min);
    convMin = (hora * 60);
    totMin = (convMin + min);
    convSeg = (totMin * 60);
    printf("\nHora digitada convertida em minutos: %.1f\n", convMin);
    printf("Total de minutos: %.1f\n", totMin);
    printf("Total de minutos em segudos: %.1f\n", convSeg);
   
    return 0;
}