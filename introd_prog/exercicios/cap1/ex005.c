#include <stdio.h>

int main()
{
    float mpes, jarda, pol, milha;
    printf("Digite uma medida em pes: ");
    scanf("%f", &mpes);

    pol = (mpes * 12);
    jarda = (mpes / 3);
    milha = (jarda / 1760);

    printf("\nEssa medida em polegadas e %.1f\n", pol);
    printf("Essa medida em  jardas e %.2f\n", jarda);
    printf("Essa medida em milha e %.5f\n", milha);

    return 0;
}