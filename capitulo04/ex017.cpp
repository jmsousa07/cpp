#include <stdio.h>

int senha;

int main()
{
    printf("Digite uma senha de exatamente quatro digitos: ");
    scanf("%d", &senha);
    
    if (senha > 9999 || senha < 1000)
        printf("ACESSO NEGADO! (senha invalida)\n");
    else
        printf("ACESSO AUTORIZADO!\n");
    

    return 0;
}