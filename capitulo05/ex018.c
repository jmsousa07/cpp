#include <stdio.h>

int main()
{
    int idade, quantPessoas = 0, maiorIdade = 0, menorIdade = 200, quantMulherSal200 = 0, idadeMenorSal;
    float sal, somaSal, mediaSal, menorSal = 1000000;
    char sexo, sexoMenorSal;

    printf("Digite os dados de quantas pessoas desejar, finalize a contagem digitando uma idade negativa. \n");

    do
    {
        printf("Digite o sexo da pessoa [M/F]: ");
        scanf(" %c", &sexo);
        printf("Digite o salario da pessoa [Reais]: ");
        scanf("%f", &sal);
        printf("Digite a idade da pessoa [Anos]: ");
        scanf("%d", &idade);
        
        if (idade > 0)
        {
            somaSal += sal;
            quantPessoas++;
        }
            
        if (sexo == 'F' && sal <= 200 && idade > 0)
        {
            quantMulherSal200++;
        }

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        if (sal < menorSal && idade > 0)
        {
            sexoMenorSal = sexo;
            idadeMenorSal = idade;
        }
        
        if (idade < menorIdade && idade > 0)
        {
            menorIdade = idade;
        }

        printf("\n");

    } while (idade >= 0);

    mediaSal = (somaSal / quantPessoas);
    
    printf("\n==============================================================\n");
    printf("RESUMO GERAL: \n");
    printf("Media dos salarios do grupo: R$ %.2f\n", mediaSal);
    printf("Maior idade do grupo: %d anos\n", maiorIdade);
    printf("Menor idade do grupo: %d anos\n", menorIdade);
    printf("Quantidade de mulheres com salario menor que R$ 200,00: %d\n", quantMulherSal200);
    printf("Idade e sexo da pessoa que possui menor salario: %d anos, %c \n", idadeMenorSal, sexoMenorSal);
    printf("==============================================================\n");


    return 0;
}