#include<stdio.h>

int main()
{
    float sal, salMinimo, quantSalMinimo;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salMinimo);
    printf("Digite o valor do salario de um funcionario: ");
    scanf("%f", &sal);
    quantSalMinimo = (sal / salMinimo);
    printf("Esse funcionario recebe %.2f salarios minimos.", quantSalMinimo);
   
    return 0;
}