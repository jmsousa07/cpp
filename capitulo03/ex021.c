#include<stdio.h>

int main()
{
    int horasTrab, horasExtras;
    float salMinimo, salBruto, salAReceber, valorHoraExtra;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horasTrab);

    printf("Digite vaor do salario minimo: ");
    scanf("%f", &salMinimo);

    salBruto = (salMinimo * horasTrab / 8);

    printf("Digite o numero de horas extras trabalhadas: ");
    scanf("%d", &horasExtras);

    valorHoraExtra = (salMinimo * horasExtras / 4);
    salAReceber = (salBruto + valorHoraExtra);
    printf("Salario a receber: %.2f", salAReceber);
   
    return 0;
}