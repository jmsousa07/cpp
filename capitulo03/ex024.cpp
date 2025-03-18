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