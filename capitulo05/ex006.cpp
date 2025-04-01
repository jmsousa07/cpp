#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cont, codigo;
	float valor, avista = 0, aprazo = 0, prest, total;
	char resp;
	
	for (cont = 0; cont < 15; cont++)
	{
		printf("Digite o codigo da  %do. transacao: ", cont+1);
		scanf("%d", &codigo);
		
		printf("Digite o valor da transacao: R$");
		scanf("%f", &valor);
		
		printf("Digite [V] para transacao a vista ou [P] para transacao a prazo: ");
		scanf(" %c", &resp);
		
		if (resp == 'V' || resp == 'v')
			avista = (avista + valor);
		else
			if (resp == 'P' || resp == 'p')
				aprazo = (aprazo + valor);
			else
				printf("ERRO! Opcao invalida. Use V/v ou P/p.\n");
	}
	
	system("cls");
	total = (avista + aprazo);
	prest = (aprazo / 3);
	printf("\nRESUMO DAS TRANSAÇÕES:\n");
    printf("--------------------------------\n");
	printf("\nValor das compras a vista: R$%.2f", avista);
	printf("\nValor das compras a prazo: R$%.2f", aprazo);
	printf("\nValor total das compras: R$%.2f", total);
	printf("\nValor da primeira prestacao das compras a prazo: R$%.2f", prest);
	
	return 0;
}