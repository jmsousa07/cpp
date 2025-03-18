#include <stdio.h>
#include <math.h>

#define pi 3.14

int d;
float escada;
double angulo;

int main()
{
	printf("Qual angulo formado pela escada e o chao (graus)? ");
	scanf("%lf%*c", &angulo);
	printf("Qual a distancia entre a escada e a parede (m)? ");
	scanf("%d%*c", &d);
	angulo = (angulo*pi/180);
	escada = (d/cos(angulo));
	printf("A medida da escada, em metros, para que ela alcance o topo da parede e %4.1f", escada);
	return 0;
}