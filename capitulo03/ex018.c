/*
	Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
    Fahrenheit. Sabe-se que F = 180*(C + 32)/100. 
*/

#include<stdio.h>
#include <math.h>

int main()
{
    float tempC, tempF;

    printf("Digite a temperatura em celcius: ");
    scanf("%f", &tempC);
    tempF= (tempC*9/5 + 32);
    printf("O valor dessa temperatura em farenheit e %f", tempF);
   
    return 0;
}