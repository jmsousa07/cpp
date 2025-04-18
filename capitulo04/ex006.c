#include <stdio.h>
#include <math.h>

int main()
{
	int num[2], resp;
	double result[2];
	printf("Digite um numero: ");
	scanf("%d", &num[0]);
	printf("Digite outro numero: ");
	scanf("%d", &num[1]);
	
	printf("[1] Primeiro numero elevado ao segundo\n");
	printf("[2] Raiz quadrada de ambos os numeros\n");
	printf("[3] Raiz cubica de ambos os numeros\n");
	scanf("%d", &resp);
	
	switch (resp)
	{
		case 1:
			result[1] = pow(num[0], num[1]);
			printf("Resutado = %5.1lf", result[1]);
			break;
		case 2:
			result[0] = (sqrt(num[0]));
			result[1] = (sqrt(num[1]));
			printf("Resultado = %5.1lf e %5.1lf", result[0], result[1]);
			break;
		case 3:
			printf("Resultado = %4.1lf e %4.1lf", cbrt(num[0]), cbrt(num[1]));
			break;
		default: printf("ERRO! opcao invalida.");
	}
	
	return 0;
}