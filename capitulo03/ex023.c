#include<stdio.h>

int main()
{
    float ang1, ang2, ang3;

    printf("Digite o valor de um dos angulos do triangulo: ");
    scanf("%f", &ang1);
    printf("Digite o valor do outro angulo do triangulo: ");
    scanf("%f", &ang2);
    ang3 = (180 - ang1 - ang2);
    printf("O valor do terceiro angulo e %.1f", ang3);
   
    return 0;
}