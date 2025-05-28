/*
    Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
	o código e o valor de quinze transações, calcule e mostre:
	■ o valor total das compras à vista;
	■ o valor total das compras a prazo;
	■ o valor total das compras efetuadas;
	■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cont;
	float valor, avista = 0, aprazo = 0, prest, total;
	char codigo;
	
	for (cont = 0; cont < 15; cont++)
	{
		printf("Digite [V] para transacao a vista ou [P] para transacao a prazo: ");
		scanf("%d", &codigo);
		
		printf("Digite o valor da transacao: R$");
		scanf("%f", &valor);
		
		if (codigo == 'V' || codigo == 'v')
			avista = (avista + valor);
		else
			if (codigo == 'P' || codigo == 'p')
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