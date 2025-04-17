#include <stdio.h>

int main()
{
    float A, B, C;
    int I;

    printf("Digite o valor de I: ");
    scanf("%d", &I);

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &A);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    switch (I)
    {
        case 1:
            printf("ORDEM CRESCENTE: \n");
            if (A > B && B > C)
            {
                printf("%.1f\n", A);
                printf("%.1f\n", B);
                printf("%.1f\n", C);
            } else if (A > B && C > B)
                {
                    printf("%.1f\n", A);
                    printf("%.1f\n", C);
                    printf("%.1f\n", B);
                } else if (B > A && A > C)
                    {
                        printf("%.1f\n", B);
                        printf("%.1f\n", A);
                        printf("%.1f\n", C);
                    } else if (B > A && C > A)
                        {
                            printf("%.1f\n", B);
                            printf("%.1f\n", C);
                            printf("%.1f\n", A);
                        } else if (C > B && B > A)
                            {
                                printf("%.1f\n", C);
                                printf("%.1f\n", B);
                                printf("%.1f\n", A);
                            } else if (C > B && A > B)
                                {
                                    printf("%.1f\n", C);
                                    printf("%.1f\n", A);
                                    printf("%.1f\n", B);
                                }
            break;
        case 2:
            printf("ORDEM DECRESCENTE: \n");
                if (A < B && B < C)
                {
                    printf("%.1f\n", A);
                    printf("%.1f\n", B);
                    printf("%.1f\n", C);
                } else if (A < B && C < B)
                    {
                        printf("%.1f\n", A);
                        printf("%.1f\n", C);
                        printf("%.1f\n", B);
                    } else if (B < A && A < C)
                        {
                            printf("%.1f\n", B);
                            printf("%.1f\n", A);
                            printf("%.1f\n", C);
                        } else if (B < A && C < A)
                            {
                                printf("%.1f\n", B);
                                printf("%.1f\n", C);
                                printf("%.1f\n", A);
                            } else if (C < B && B < A)
                                {
                                    printf("%.1f\n", C);
                                    printf("%.1f\n", B);
                                    printf("%.1f\n", A);
                                } else if (C < B && A < B)
                                    {
                                        printf("%.1f\n", C);
                                        printf("%.1f\n", A);
                                        printf("%.1f\n", B);
                                    }

            break;
        case 3:
            printf("MAIOR NO MEIO: \n");
            if (A > B && B > C)
            {
                printf("%.1f\n", B);
                printf("%.1f\n", A);
                printf("%.1f\n", C);
            } else if (A > B && C > B)
                {
                    printf("%.1f\n", C);
                    printf("%.1f\n", A);
                    printf("%.1f\n", B);
                } else if (B > A && A > C)
                    {
                        printf("%.1f\n", A);
                        printf("%.1f\n", B);
                        printf("%.1f\n", C);
                    } else if (B > A && C > A)
                        {
                            printf("%.1f\n", C);
                            printf("%.1f\n", B);
                            printf("%.1f\n", A);
                        } else if (C > B && B > A)
                            {
                                printf("%.1f\n", B);
                                printf("%.1f\n", C);
                                printf("%.1f\n", A);
                            } else if (C > B && A > B)
                                {
                                    printf("%.1f\n", A);
                                    printf("%.1f\n", C);
                                    printf("%.1f\n", B);
                                }
            break;
        default:
            printf("Valor de I invalido!");
            break;
    }

    return 0;
}