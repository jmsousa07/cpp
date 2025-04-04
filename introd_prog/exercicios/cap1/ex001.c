#include <stdio.h>

int num[4], soma;

int main()
{
    printf("Digite um numero: ");
    scanf("%d", &num[0]);
    printf("Digite outro numero: ");
    scanf("%d", &num[1]);
    printf("Digite mais um numero: ");
    scanf("%d", &num[2]);
    printf("Digite o ultimo numero: ");
    scanf("%d", &num[3]);

    soma = (num[0] + num[1] + num[2] + num[3]);
    printf("A soma desses numeros e igual a %d", soma);
    return 0;
}