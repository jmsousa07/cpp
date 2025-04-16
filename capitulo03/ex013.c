#include<stdio.h>

int main()
{
    int num, result;

    printf("Digite o valor de um numero: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        result = (num * i);
        printf("%d x %d = %d\n", num, i, result);
    }
   
    return 0;
}