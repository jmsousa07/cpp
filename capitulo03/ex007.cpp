#include <stdio.h>

float peso, maiorp, menorp;

int main()
{
	printf("Qual seu peso atual? ");
	scanf("%f%*c", &peso);
	maiorp = (peso*1.15);
	menorp = (peso*0.80);
	printf("Se voce aumentar 15/100 do seu peso atual voce ficara com %5.2f kg\n", maiorp);
	printf("Se voce diminuir seu peso em 20/100 voce ficara com %5.2f kg", menorp);
	return 0;
}
