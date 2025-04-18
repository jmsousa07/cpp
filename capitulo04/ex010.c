#include <stdio.h>

#define custo0 12000
#define custo1 25000

int main()
{
	float custof;
	printf("Digite o custo de fabrica: R$");
	scanf("%f", &custof);
	
	if (custof <= custo0)
	{
		custof = (custof * 1.05);
		printf("O preco ao consumidor = R$%.2f", custof);
	}
	else
		if (custof > custo0 && custof <= custo1)
		{
			custof = (custof * 1.10 * 1.15);
			printf("O preco ao consumidor = R$%.2f", custof);
		}
		else
		{
			custof = (custof * 1.15 * 1.20);
			printf("O preco ao consumidor = R$%.2f", custof);
		}
		
	return 0;
}