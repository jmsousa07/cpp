/*
    Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
    programa deve mostrar uma mensagem de permissão de acesso ou não.
*/

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