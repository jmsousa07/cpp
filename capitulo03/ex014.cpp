#include <stdio.h>

int main()
{
	int nasc, atual, idade[3];
	printf("Em que ano voce nasceu (yyyy)? ");
	scanf("%d%*c", &nasc);
	printf("Em que ano estamos (yyyy)? ");
	scanf("%d%*c", &atual);
	idade[1] = (atual-nasc);
	printf("Sua idade em anos e %d", idade[1]);
	idade[2] = (idade[1]*12);
	printf("\nSua idade em meses e %d", idade[2]);
	idade[3] = (idade[1]*365);
	printf("\nSua idade em dias e %d", idade[3]);
	return 0;
}