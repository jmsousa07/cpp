#include <stdio.h>

#define Tpessoas 10

int main()
{
    int cont;
    int tpsim = 0, tpnao = 0, tmulhersim = 0, thnao = 0, thomem = 0;
    float porc_hnao;
    char sexo, opc;

    for (cont = 0; cont < Tpessoas; cont++)
    {
        printf("Digite o sexo do %do. entrevistado [M - masc. / F - femin.]: ", cont+1);
        scanf(" %c", &sexo);

        printf("Esse entrevistado gostou do produto? [S - sim / N - nao] ");
        scanf(" %c", &opc);

        if (sexo == 'F' || sexo == 'f')
        {
            switch (opc)
            {
                case 'S':
                    tpsim++;
                    tmulhersim++;
                    break;
                case 'N':
                    tpnao++;
                    break;
                default:
                    break;
            }
        }
        else 
        {
            switch (opc)
            {
                case 'S':
                case 's':
                    tpsim++;
                    thomem++;
                    break;
                case 'N':
                case 'n':
                    tpnao++;
                    thomem++;
                    thnao++;
                    break;
                default:
                    break;
            }
        }
        
    }

    if (thomem > 0)
    {
        porc_hnao = (((float)thnao / thomem) * 100);
    }
    else
        porc_hnao = 0;
    
    
    printf("\n================================================================================\n");
    printf("Total de pessoas que respondeu sim: %d\n", tpsim);
    printf("Total de pessoas que respondeu nao: %d\n", tpnao);
    printf("Total de mulheres que respondeu sim: %d\n", tmulhersim);
    printf("Porcentagem de homens que respoderam nao entre todos os homens analisados: %.2f%%\n", porc_hnao);
    printf("================================================================================\n");

    return 0;
}