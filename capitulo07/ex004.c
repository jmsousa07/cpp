/*
    Faça um programa que receba:
    ■ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15x5;
    ■ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições.
    O programa deverá calcular e mostrar:
    ■ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado ou exame);
    ■ a média da classe.
*/

#include <stdio.h>
#include <string.h>

#define alunos 15
#define provas 5

int main(void)
{
    float notas[alunos][provas], media[alunos], somaMedia = 0;
    char nome[alunos][50];
    int i, j;

    
    for (i = 0; i < alunos; i++)
    {
        float somaProvas = 0;
        printf("\n ------- \n ALUNO %d \n ------- \n", i+1);
        printf("Nome: ");
        scanf("%s", nome[i]);

        for (j = 0; j < provas; j++)
        {
            printf("Digite a nota desse aluno na %do. prova: ", j+1);
            scanf("%f", &notas[i][j]);

            somaProvas += notas[i][j];
        }
        media[i] = somaProvas / 5.0;
        somaMedia += media[i];
    }

    float mediaClasse = somaMedia / 15.0;
    for (i = 0; i < alunos; i++)
    {
        printf("\n ------- \n ALUNO %d \n ------- \n", i+1);
        printf("Nome: %s\n", nome[i]);
        printf("Media das 5 provas: %.2f\n", media[i]);

        if (media[i] < 3.0)
        {
            printf("Situacao: Reprovado\n");
        } else if (media[i] < 7.0)
        {
            printf("Situacao: Exame final\n");
        } else
        {
            printf("Situacao: Aprovado\n");
        }
    }
    printf("\nMedia da classe: %.2f", mediaClasse);
    
}