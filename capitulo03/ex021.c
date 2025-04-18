/*
	. Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
    de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
    a) a hora trabalhada vale 1/8 do salário mínimo;
    b) a hora extra vale 1/4 do salário mínimo; 
    c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
    d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
    e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
*/

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