#include <stdio.h>

#define Tpessoas 8

int main()
{
	int cont;
	int idade[Tpessoas];
	int faixa[5] = {0};
	
	for (cont = 0; cont < Tpessoas; cont++)
    {
        printf("Idade da %do. pessoa: ", cont+1);
        scanf("%d", &idade[cont]);
        
        if (idade[cont] >= 0 && idade[cont] <= 15)
            faixa[0]++;
        else 
			if (idade[cont] >= 16 && idade[cont] <= 30)
            	faixa[1]++;
        	else
				if (idade[cont] >= 31 && idade[cont] <= 45)
            		faixa[2]++;
        	else 
				if (idade[cont] >= 46 && idade[cont] <= 60)
            		faixa[3]++;
        	else
            	faixa[4]++;
    }
	
	printf("\nQuantidade de pessoas de ate 15 anos de idade: %d", faixa[0]);
	printf("\nQuantidade de pessoas de 16 ate 30 anos de idade: %d", faixa[1]);
	printf("\nQuantidade de pessoas de 31 ate 45 anos de idade: %d", faixa[2]);
	printf("\nQuantidade de pessoas de 46 ate 60 anos de idade: %d", faixa[3]);
	printf("\nQuantidade de pessoas de 61 ou mais anos de idade: %d", faixa[4]);
	
	printf("\n\nA fracao correspondente a quantidade de pessoas da primeira faixa etaria em relacao ao total de pessoas e: %d/%d", faixa[0],Tpessoas);
	printf("\n\nA fracao correspondente a quantidade de pessoas da ultima faixa etaria em relacao ao total de pessoas e: %d/%d", faixa[4],Tpessoas);
	
	return 0;
}