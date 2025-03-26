#include <stdio.h>

int main()
{
	float saldo, credito;
	printf("Qual foi seu saldo medio no ultimo ano? ");
	scanf("%f", &saldo);
	
	if (saldo <= 200)
	{
		credito = (saldo * 0.10);
		saldo = (saldo + credito);
		printf("Agora seu saldo e de R$%.2f e seu credito foi de R$%.2f", saldo, credito);
	}
	else
		if (saldo > 200 && saldo <= 300)
		{
			credito = (saldo * 0.20);
			saldo = (saldo + credito);
			printf("Agora seu saldo e de R$%.2f e seu credito foi de R$%.2f", saldo, credito);
		}
		else
			if (saldo > 300 && saldo <= 400)
			{
				credito = (saldo * 0.25);
				saldo = (saldo + credito);
				printf("Agora seu saldo e de R$%.2f e seu credito foi de R$%.2f", saldo, credito);
			}
			else
				if (saldo > 400)
				{
					credito = (saldo * 0.30);
					saldo = (saldo + credito);
					printf("Agora seu saldo e de R$%.2f e seu credito foi de R$%.2f", saldo, credito);
				}
	
	return 0;
}