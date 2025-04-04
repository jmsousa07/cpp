#include <stdio.h>

int main()
{
    float nota[3], media;
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota[0]);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota[1]);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota[2]);
    
    media = ((nota[0] + nota[1] + nota[2]) / 3);
    printf("Sua media foi de %.2f", media);

    return 0;
}