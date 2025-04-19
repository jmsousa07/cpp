/*
    Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
	■ a quantidade de pessoas com idade superior a 50 anos;
	■ a média das alturas das pessoas com idade entre 10 e 20 anos;
	■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cont = 1, idade, p60, id50 = 0, id10 = 0;
	float alt, peso, Salt = 0;
	float media;
	
	for (cont == 1; cont <= 5; cont++)
	{
		printf("-------------------\n");
		printf("%do. pessoa\n", cont);
		printf("Idade: ");
		scanf("%d", &idade);
		
		if (idade > 50)
			id50++;
		
		printf("Peso: [Kg] ");
		scanf("%f", &peso);
		
		if (peso < 60)
			p60++;
		
		printf("Altura: [Metros] ");
		scanf("%f", &alt);
		
		if(idade >= 10 && idade <= 20)
		{
			id10++; 
			Salt += alt;
		}
		
	}
	
	media = (Salt / id10);
	printf("\n==================================================================\n");
	printf("Quantidade de pessoas com mais de 50 anos: %d\n", id50);
	printf("Media das alturas das pessoas com idade entre 10 e 20: %.2f\n", media);
	printf("Quantidade de pessoas com peso menor do que 60kg: %d\n", p60);
	printf("==================================================================");
	
	return 0;
}