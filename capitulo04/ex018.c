/*
    Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.
*/

#include <stdio.h>

int idade;

int main()
{
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade < 18)
        printf("Voce ja esta na faixa etaria da maioridade.\n");
    else
        printf("Voce ainda nao esta na faixa etaria da maioridade\n");
    
    return 0;
}