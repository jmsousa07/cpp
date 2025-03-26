#include <stdio.h>

#define rend_poup 1.03
#define rend_fund 1.04

int main()
{
	int tipo_invest;
	float quant;
	printf("----------------------------------\n");
	printf("Qual o tipo de investimento voce quer?\n");
	printf("[1] POUPANCA\n");
	printf("[2] FUNDOS DE RENDA FIXA\n");
	printf("----------------------------------\n");
	scanf("%d", &tipo_invest);
	printf("\nQual o valor que voce quer investir? R$");
	scanf("%f", &quant);
	
	switch (tipo_invest)
	{
		case 1:
			quant = (quant * rend_poup);
			printf("A quantia atual do seu investimento esta igual a R$%.2f\n", quant);
			break;
		case 2:
			quant = (quant * rend_fund);
			printf("A quantia atual do seu investimento esta igual a R$%.2f\n", quant);
			break;
	}
	
	return 0;
}