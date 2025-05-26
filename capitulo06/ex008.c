/*
    Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média final desses alunos.
    Calcule e mostre:
    ■ o nome do aluno com maior média (desconsiderar empates);
    ■ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.
*/ 

#include <stdio.h>

#define numAlunos 7

int main()
{
    char nomeAluno[numAlunos][30];
    float mediaAlunos[numAlunos], maiorMedia = 0, notaExameFinal; 
    int i, aux = 0;

    for (i = 0; i < numAlunos; i++)
    {
        printf("\n Aluno %d \n", (i+1));
        printf("Digite o nome do aluno: ");
        scanf(" %s", &nomeAluno[i]);

        printf("Digite a media do aluno: ");
        scanf("%f", &mediaAlunos[i]);

        if (mediaAlunos[i] > maiorMedia)
        {
            aux = i;
        }
        
        if (mediaAlunos[i] < 7)
        {
            notaExameFinal = 10 - mediaAlunos[i];
            printf("Nota necessaria no Exame Final para passar: %.2f\n", notaExameFinal);
        }
        
    }
    
    printf("Nome do aluno com  a maior media: %s", nomeAluno[aux]);

    return 0;
}