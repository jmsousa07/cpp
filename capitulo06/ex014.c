/*
    Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir.
    Relatório de notas:

                    ALUNO  | 1a PROVA | 2a PROVA | MÉDIA | SITUAÇÃO
                    Carlos |   8,0    |   9,0    | 8,5   | Aprovado
                    Pedro  |   4,0    |   5,0    | 4,5   | Reprovado 
                    
    ■ média da classe = ?
    ■ percentual de alunos aprovados = ?%
    ■ percentual de alunos de exame = ?%
    ■ percentual de alunos reprovados = ?% 
*/ 

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char nome[6][20];
    float n1[6], n2[6], media[6], somaMedia, mediaClasse;
    int i, somaAlunosAprovados = 0, somaAlunosReprovados = 0;
    float porcAprovados, porcReprovados;
    bool situacao[6];

    for (i = 0; i < 6; i++)
    {
        printf("nome do %do. aluno: ", (i+1));
        scanf("%s%*c", &nome[i]);

        printf("Digite a primeira nota desse aluno: ");
        scanf("%f", &n1[i]);

        printf("Digite a segunda nota desse aluno: ");
        scanf("%f", &n2[i]);

        media[i] = (n1[i] + n2[i]) / 2;
        somaMedia += media[i];
        if (media[i] < 7.0)
        {
            situacao[i] = false;
            somaAlunosReprovados++;
        }
        else 
        {
            situacao[i] = true;
            somaAlunosAprovados++;
        }
    }
    mediaClasse = somaMedia / 6; 
    porcAprovados = somaAlunosAprovados / 6.0;
    porcReprovados = somaAlunosReprovados / 6.0;

    printf("\n  ALUNO  |  1o. PROVA  |  2o. PROVA  |  MEDIA  |  SITUACAO  \n");
    for (i = 0; i < 6; i++)
    {
        if (situacao[i] == true)
        {
            printf(" %s  %.1f  %.1f  %.1f  Aprovado \n", nome[i], n1[i], n2[i], media[i]);
        }
        else
        {
            printf(" %s  %.1f  %.1f  %.1f  Reprovado \n", nome[i], n1[i], n2[i], media[i]);
        }
    }

    printf("\nMedia da classe: %.1f", mediaClasse);
    printf("\nPorcentagem de alunos aprovados %.1f%%", porcAprovados);
    printf("\nPorcentagem de alunos reprovados %.1f%%", porcReprovados);

    return 0;
}