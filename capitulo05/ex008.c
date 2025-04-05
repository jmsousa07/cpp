#include <stdio.h>

#define Tpessoas 6

int main()
{
    int idade, cont, soma_id = 0;
    int cond[4];
    float peso, alt;
    char cor_olhos, cor_cabelo;

    cond[0] = 0;
    cond[1] = 0;
    cond[2] = 0;
    cond[3] = 0;

    for (cont = 0; cont < Tpessoas; cont++)
    {
        printf("Digite a idade da %do. pessoa: [Anos] ", cont+1);
        scanf("%d", &idade);

        printf("Digite a altura da %do. pessoa: [Metros] ", cont+1);
        scanf("%f", &alt);

        printf("Digite o peso da %do. pessoa: [Kilogramas] ", cont+1);
        scanf("%f", &peso);

        printf("Digite a cor dos olhos da %do. pessoa: \n", cont+1);
        printf("[A] - Azul\n");
        printf("[P] - Preto\n");
        printf("[V] - Verde\n");
        printf("[C] - Castanho\n");
        scanf(" %c", &cor_olhos);

        printf("Digite a cor do cabelo da %do. pessoa: \n", cont+1);
        printf("[P] - Preto\n");
        printf("[C] - Castanho\n");
        printf("[L] - Loiro\n");
        printf("[R] - Ruivo\n");
        scanf(" %c", &cor_cabelo);

        if (idade > 50 && peso < 60)
        {
            cond[0]++;
        }

        if (alt < 1.50)
        {
            soma_id += idade; 
            cond[1]++;
        }

        if (cor_olhos == 'A' || cor_olhos == 'a')
        {
            cond[2]++;
        }

        if ((cor_cabelo == 'R' || cor_cabelo == 'r') && !(cor_olhos == 'A' || cor_olhos == 'a'))
        {
            cond[3]++;
        } 

        printf("\n");
    }

    if (cond[1] > 0)
    {
        cond[1] = ((float) soma_id / cond[1]);
    }
    
    cond[2] = ((float) cond[2] / Tpessoas * 100);
    printf("========================================================================================\n");
    printf("Quantidade de pessoas com idade superior a 50 e peso inferior a 60: %d\n", cond[0]);
    printf("Media das idades das pessoas com menos de 1,50 metros de altura: %.2f\n", cond[1]);
    printf("Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2f%%\n", cond[2]);
    printf("Quantidade de pessoas ruivas que naos possuem olhos azuis: %d\n", cond[3]);
    printf("========================================================================================\n");

    return 0;
}