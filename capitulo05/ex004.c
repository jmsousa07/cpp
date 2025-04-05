#include <stdio.h>

int main()
{
	int num, cont;
	int v = 0;
	
	printf("Voce quer a tabuada de qual numero? ");
	scanf("%d", &num);
	
	for (cont = 0; cont <= 10; cont++)
	{
		v = (num * cont);
		printf("%d x %d = %d\n", num, cont, v);
	}
	
	return 0;
}