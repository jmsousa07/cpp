/*
	. Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do
    terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus. 
*/

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