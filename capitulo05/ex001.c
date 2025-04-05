#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[4], B[4], C[4], D[4], E[4];
    int ordem[20];
    int cont, i, j, num;
    char proseguir;

    // LER OS VALORES
    for (cont = 0; cont < 4; cont++) {
        printf("Digite o %do. valor para o grupo A: ", cont + 1);
        scanf("%d", &A[cont]);
    }
    printf("\n");

    for (cont = 0; cont < 4; cont++) {
        printf("Digite o %do. valor para o grupo B: ", cont + 1);
        scanf("%d", &B[cont]);
    }
    printf("\n");

    for (cont = 0; cont < 4; cont++) {
        printf("Digite o %do. valor para o grupo C: ", cont + 1);
        scanf("%d", &C[cont]);
    }
    printf("\n");

    for (cont = 0; cont < 4; cont++) {
        printf("Digite o %do. valor para o grupo D: ", cont + 1);
        scanf("%d", &D[cont]);
    }
    printf("\n");

    for (cont = 0; cont < 4; cont++) {
        printf("Digite o %do. valor para o grupo E: ", cont + 1);
        scanf("%d", &E[cont]);
    }
    system("cls");

    // MOSTRAR NA ORDEM LIDA
    for (cont = 0; cont < 4; cont++) {
        printf("A[%d] = %d\n", cont, A[cont]);
    }
    printf("\n");

    for (cont = 0; cont < 4; cont++) {
        printf("B[%d] = %d\n", cont, B[cont]);
    }
    printf("\n");

    for (cont = 0; cont < 4; cont++) {
        printf("C[%d] = %d\n", cont, C[cont]);
    }
    printf("\n");

    for (cont = 0; cont < 4; cont++) {
        printf("D[%d] = %d\n", cont, D[cont]);
    }
    printf("\n");

    for (cont = 0; cont < 4; cont++) {
        printf("E[%d] = %d\n", cont, E[cont]);
    }

    for (cont = 0; cont < 4; cont++)
	{
        ordem[cont] = A[cont];
        ordem[cont + 4] = B[cont];
        ordem[cont + 8] = C[cont];
        ordem[cont + 12] = D[cont];
        ordem[cont + 16] = E[cont];
    }

    printf("\nPressione C para ordenar os numeros: ");
    scanf(" %c", &proseguir);
    system("cls");

    for (i = 0; i < 20; i++)
 	{
    for (j = i + 1; j < 20; j++)
	{
        if (ordem[i] > ordem[j])
		{
            num = ordem[i];
            ordem[i] = ordem[j];
            ordem[j] = num;
        }
    }
	}

    // MOSTRAR NA ORDEM
    printf("NUMEROS ORDENADOS:\n");
    for (cont = 0; cont < 20; cont++) {
        printf(" %d\n", ordem[cont]);
    }

    return 0;
}