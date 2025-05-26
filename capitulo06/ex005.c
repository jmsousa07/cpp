/*
    Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas de Lógica e Linguagem de Programação.
    Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.
    Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez alunos.
    Mostre o número das matrículas que aparecem nos dois vetores. 
*/ 

#include <stdio.h>

int main()
{
    int matriculaLogica[15], matriculaLP[10], i;

    printf("Alunos que cursam Logica... \n");

    for (i = 0; i < 15; i++)
    {
        printf("Digite o numero da matricula: ");
        scanf("%d", &matriculaLogica[i]);
    }

    printf("\nAlunos que cursam Linguagem de Programacao... \n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero da matricula: ");
        scanf("%d", &matriculaLP[i]);
    }

    int j;
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (matriculaLogica[i] == matriculaLP[j])
            {
                printf("O numero de matricula %d aparece em ambos os cursos. \n", matriculaLogica[i]);
                break;
            }   
        }
    }
    
    return 0;
}