#include <stdio.h>

int main()
{
	int idade;
	printf("IDADE: ");
	scanf("%d", &idade);
	
	if (idade < 5)
		printf("CATEGORIA: Pre-Infantil");
	else
		if (idade >=5 && idade <= 7)
			printf("CATEGORIA: Infantil");
		else
			if (idade >= 8 && idade <= 10)
				printf("CATEGORIA: Juvenil");
			else
				if (idade >= 11 && idade <=15)
					printf("CATEGORIA: Adolescente");
				else
					if(idade >= 16 && idade <= 30)
						printf("CATEGORIA: Adulto");
					else
						printf("CATEGORIA: Senior");
						
	return 0;
}