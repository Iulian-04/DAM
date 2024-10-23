#include <stdio.h>
#include <stdlib.h>

int main (){

	int suma=0;
	int numero;

	printf("Escribe un numero \n");
	scanf("%d",&numero);


	for (int i = 1; i <= numero; i++) 
	{

	suma=suma+i;
	}
	
	printf("La suma de los numeros del 1 al %d es %d\n", numero, suma);

	return 0;
}


