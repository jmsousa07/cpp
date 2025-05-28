/*
    Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
    Digite o nome do 1o aluno: Carlos
    Digite a nota do Carlos: 8
    Digite o nome do 2o aluno: Pedro
    Digite a nota do Pedro: 5
    Relatórios de notas
    Carlos 8.0
    Pedro 5.0
    ..
    ..
    ..
    Média da classe = ??
*/ 

#include <stdio.h>

int main()
{
    char nome[8][20];
    float nota[8];
    int i;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o nome do %do. aluno: ", (i+1));
        scanf("%s", &nome[i]);
        
        printf("Digite a nota do %do. aluno: ", (i+1));
        scanf("%f", &nota[i]);
    }

    printf("\n Relatorio de notas: \n");
    for (i = 0; i < 8; i++)
    {
        printf("%s: %.2f \n", nome[i], nota[i]);
    }
    
    return 0;
}