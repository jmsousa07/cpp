#include <stdio.h>

float n[2]; 
float media;

int main()
{
	printf("Digite sua primeira nota: ");
	scanf("%f%*c", &n[1]);
	printf("Digite sua segunda nota: ");
	scanf("%f%*c", &n[2]);
	media = ((n[1]*2) + (n[2]*3)) /5;
	printf("Sua media foi igual a %5.2f", media);
	return 0;
}