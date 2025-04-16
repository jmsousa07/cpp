#include<stdio.h>
#include <math.h>

int main()
{
    int cat1, cat2, hip;

    printf("Digite o valor de um cateto: ");
    scanf("%d", &cat1);
    printf("Digite o valor de outro cateto: ");
    scanf("%d", &cat2);
    hip = sqrt((cat1*cat1 + cat2*cat2));
    printf("A valor da hipotenusa e %d", hip);
   
    return 0;
}