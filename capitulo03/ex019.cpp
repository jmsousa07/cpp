#include <stdio.h>

float m[2];
float p, area;

int main()
{
	printf("Digite a primeira medida do seu comodo (m): ");
	scanf("%f%*c", &m[1]);
	printf("Digite a segunda medida do seu comodo (m): ");
	scanf("%f%*c", &m[2]);
	area = (m[1]*m[2]);
	p = (18*area);
	printf("A area do seu comodo e igual a %4.1f", area);
	printf("\nVoce precisa de %4.1f W para iluminar esse comodo.", p);
}