#include <stdio.h>

int main()
{
	float num[2], result;
	int resp;
	printf("Digite um numero ");
	scanf("%f%*c", &num[1]);
	printf("Digite outro numero ");
	scanf("%f%*c", &num[2]);
	
	printf("-------------------------");
	printf("\n[1] Media aritmetica dos numeros ");
	printf("\n[2] Diferenca do maior pelo menor");
	printf("\n[3] Produto entre os numeros ");
	printf("\n[4] Divisao do maior pelo menor");
	printf("\n-------------------------\n");
	scanf("%d%*c", &resp);
	
	switch (resp)
	{
		case 1:
			result = ((num[1]+num[2]) /2);
			printf("A media entre esses numeros e igual a %5.2f", result);
			break;
		case 2:
			if (num[1] > num[2])
				result = (num[1]-num[2]);
			else
				result = (num[2]-num[1]);
			printf("A diferenca entre esses numeros e %5.1f", result);
			break;
		case 3:
			result = (num[1]*num[2]);
			printf("O produto entre esses numeros e igual a %5.2f", result);
			break;
		case 4:
			if (num[1] >= num[2])
				result = (num[1]/num[2]);
			else
				result = (num[2]/num[1]);
			printf("A divisao entre esses numeros e igual a %5.1f", result);
			break;
		default: printf("ERRO! ");
	}
	return 0;
}