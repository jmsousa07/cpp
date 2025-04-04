#include <stdio.h>

int main()
{
    float sal, nsal, vaum;
    int aumento;

    printf("Digite o seu salario atual: ");
    scanf("%f", &sal);

    printf("Agora digite qual sera a porcentagem de aumento: ");
    scanf("%d", &aumento);

    nsal = (sal + (sal * aumento / 100));
    vaum = (sal * aumento / 100);
    printf("Seu aumento corresponde a %.2f\n", vaum);
    printf("Seu novo salario sera de %.2f", nsal);

    return 0;
}