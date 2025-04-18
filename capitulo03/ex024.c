/*
	Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
	vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina.
	Sabe-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57.
	O programa deve fazer as conversões e mostrá-las. 
*/

#include <stdio.h>

#define convDOL 5.60
#define convEUR 0.90
#define convLIB 0.80 

int main()
{
	float real, dol, euro, libra, gasto;
	printf("Quantos reais para viajar voce possui? ");
	scanf("%f%*c", &real);
	dol = (real/convDOL);
	printf("Convertendo voce tem %7.2f dolares ", dol);
	printf("\nQuanto dolares voce gastou na viajem para os EUA? ");
	scanf("%f%*c", &gasto);
	dol = (dol-gasto);
	euro = (dol/convEUR);
	printf("Certo, entao, ja convertendo, voce tem %7.2f euros para viajar para a Europa", euro);
	printf("\nQuantos euros voce gastou nessa viajem? ");
	scanf("%f%*c", &gasto);
	euro = (euro-gasto);
	libra = (euro/convLIB);
	printf("\nEntao voce ainda tem %7.2f libras para voltar", libra);
	return 0;
}