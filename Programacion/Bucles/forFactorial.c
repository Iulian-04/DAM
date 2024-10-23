#include <stdio.h>
#include <stdlib.h>

int main (){

	int factorial=1;
	int numero;

	printf("Escribe un numero \n");
	scanf("%d",&numero);


	for (int i = 1; i <= numero; i++) 
	{
		factorial *= i;
	}

	printf("El factorial de %d es %d\n", numero, factorial);

	return 0;
}


