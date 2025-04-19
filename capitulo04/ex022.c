/*
    Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
    e mostre em qual grupo de risco essa pessoa se encaixa.

      TABELA       |                               PESO
      IDADE        |     Até 60       |   Entre 60 e 90 (inclusive)  |   Acima de 90
    Menores que 20 |       9          |               8              |       7
    De 20 a 50     |       6          |               5              |       4
    Maiores que 50 |       3          |               2              |       1
*/

#include <stdio.h>

int main() {
    int idade, grupo;
    float peso;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    printf("Digite o peso da pessoa (em kg): ");
    scanf("%f", &peso);

    if (idade < 20) {
        if (peso <= 60) {
            grupo = 9;
        } else if (peso <= 90) {
            grupo = 8;
        } else {
            grupo = 7;
        }
    } else if (idade <= 50) {
        if (peso <= 60) {
            grupo = 6;
        } else if (peso <= 90) {
            grupo = 5;
        } else {
            grupo = 4;
        }
    } else {
        if (peso <= 60) {
            grupo = 3;
        } else if (peso <= 90) {
            grupo = 2;
        } else {
            grupo = 1;
        }
    }

    printf("A pessoa se encaixa no grupo de risco %d.\n", grupo);

    return 0;
}