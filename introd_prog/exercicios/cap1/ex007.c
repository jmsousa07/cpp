#include <stdio.h>

int main()
{
    int psaco, qgato;
    printf("Digite o peso de saco de racao [em Kilogramas]: ");
    scanf("%d", &psaco);
    printf("Digite a quantidade de racao que cada gato recebe por dia [em Gramas]: ");
    scanf("%d", &qgato);
    psaco = (psaco*100 - 5*2*qgato);
    printf("Quantidade de comida que restara no saco apos 5 dias sera de %d gramas", psaco);

    return 0;
}