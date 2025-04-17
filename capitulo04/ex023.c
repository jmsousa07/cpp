#include <stdio.h>

int main()
{
    int codigo, quant;
    float precoUnit, precoTotal, desconto, valorDesconto;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada do produto: ");
    scanf("%d", &quant);

    if (codigo > 0)
    {
        if (codigo <= 10)
        {
            precoUnit = 10;
        } else if (codigo <= 20)
            {
                precoUnit = 15;
            } else if (codigo <= 30)
                {
                    precoUnit = 20;
                }
                else
                {
                    precoUnit = 30;
                }

        precoTotal = precoUnit * quant;        
        if (precoTotal <= 250)
        {
            desconto = 0.05;
        } else if (precoTotal <= 500)
            {
                desconto = 0.10;
            } 
            else 
            {
                desconto = 0.15;
            }
        
        valorDesconto = precoTotal * desconto;
        printf("O preco da unidade desse produto e %.2f\n", precoUnit);
        printf("O preco total da nota e %.2f\n", precoTotal);
        printf("O valor de desconto e %.2f\n", valorDesconto);
        printf("O preco total apos o desconto e de %.2f\n", precoTotal-valorDesconto);
    } 
    else
    {
        printf("Codigo do produto invalido! Tente novamente.");
    }
    

    return 0;
}