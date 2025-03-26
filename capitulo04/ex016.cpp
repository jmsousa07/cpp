#include <stdio.h>

float cod, preco, desconto;

int main()
{
    printf("Qual o codigo do produto? ");
    scanf("%f", &cod);
    printf("Qual o preco atual desse produto? R$");
    scanf("%f", &preco);
    
    if (preco <= 30)
        printf("Este produto nao tera desconto.\n");
    else
        if (preco > 30 && preco <= 100)
        {
            desconto = (preco * 0.10);
            preco = (preco - desconto);
            printf("Esse produto recebeu 10%% de desconto que equivale a R$%.2f\n", desconto);
            printf("Agora ele passara a custar R$%.2f\n", preco);
        }
        else
        {
           desconto = (preco * 0.15);
           preco = (preco - desconto);
           printf("Esse produto recebeu 15%% de desconto, que equivale a R$%.2f\n", desconto);
           printf("Agora ele passara a custar R$%.2f\n", preco);
        }

    return 0;
}