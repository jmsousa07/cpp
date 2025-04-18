/*
	Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
    Exemplo:
    Digite um número: 5
    5 × 0 = 0
    5 × 1 = 5
    5 × 2 = 10
    ...
*/

#include<stdio.h>

int main()
{
    int num, result;

    printf("Digite o valor de um numero: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        result = (num * i);
        printf("%d x %d = %d\n", num, i, result);
    }
   
    return 0;
}