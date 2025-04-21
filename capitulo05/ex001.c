/*
    Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

#define count 4

int main() {
    int A[4], B[4], C[4], D[4], E[4];
    int ordem[20];
    int i;
    char proseguir;

    // Ler os quatro valores do grupo A...
    for (i = 0; i < count; i++)
    {
        printf("Digite o %do. valor do grupo A: ", i+1);
        scanf("%d", &A[i]);
        ordem[i] = A[i];
    }

    // Ler os quatro valores do grupo B...
    for (i = 0; i < count; i++)
    {
        printf("Digite o %do. valor do grupo B: ", i+1);
        scanf("%d", &B[i]);
        ordem[i + 4] = B[i];
    }

    // Ler os quatro valores do grupo C...
    for (i = 0; i < count; i++)
    {
        printf("Digite o %do. valor do grupo C: ", i+1);
        scanf("%d", &C[i]);
        ordem[i + 8] = C[i];
    }

    // Ler os quatro valores do grupo D...
    for (i = 0; i < count; i++)
    {
        printf("Digite o %do. valor do grupo D: ", i+1);
        scanf("%d", &D[i]);
        ordem[i + 12] = D[i];
    }

    // Ler os quatro valores do grupo E...
    for (i = 0; i < count; i++)
    {
        printf("Digite o %do. valor do grupo E: ", i+1);
        scanf("%d", &E[i]);
        ordem[i + 16] = E[i];
    }

    printf("\nPressione qualquer caractere para prosseguir... ");
    scanf(" %c", &proseguir);
    system("cls");

    // MOSTRAR NA ORDEM LIDA!
    printf("\n=== Numeros na ordem lida ===\n");
    for (i = 0; i < 20; i++)
    {
        printf(" [%d] - %d\n", i+1, ordem[i]);
    }

    // ORGANIZAR!
    int j, auxiliar = 0;
    for (i = 0; i < 19; i++)
    {
        for (j = 0; j < 19 - i; j++)
        {
            if (ordem[j] > ordem[j + 1])
            {
                auxiliar = ordem[j];
                ordem[j] = ordem[j + 1];
                ordem[j + 1] = auxiliar;
            }
        }
    }

    printf("\nPressione qualquer caractere para prosseguir... ");
    scanf(" %c", &proseguir);
    system("cls");

    // MOSTRAR NA ORDEM CRESCENTE!
    printf("\n=== Numeros em ordem crescente ===\n");
    for (i = 0; i < 20; i++) {
        printf(" [%d] - %d\n", i + 1, ordem[i]);
    }

    printf("\nPressione qualquer caractere para prosseguir... ");
    scanf(" %c", &proseguir);
    system("cls");

    // MOSTRAR NA ORDEM DECRESCENTE!
    printf("\n=== Numeros em ordem decrescente ===\n");
    for (i = 19; i >= 0; i--) {
        printf(" [%d] - %d\n", 20 - i, ordem[i]);
    }
    
    return 0;
}