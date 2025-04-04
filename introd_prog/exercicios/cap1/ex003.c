#include <stdio.h>

int main()
{
    float nota[3], peso[3];
    float media_pond;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota[0]);
    printf("Agora digite o peso dessa nota: ");
    scanf("%f", &peso[0]);

    printf("\n");
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota[1]);
    printf("Digite o peso dessa nota: ");
    scanf("%f", &peso[1]);
    
    printf("\n");
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota[2]);
    printf("Digite o peso dessa nota: ");
    scanf("%f", &peso[2]);

    media_pond = (((nota[0] * peso[0]) + (nota[1] * peso[1]) + (nota[2] * peso[2])) / (peso[0] + peso[1] + peso[2]));
    printf("Sua media ponderada e igual a %.2f", media_pond);

    return 0;
}