#include <stdio.h>
#include <stdlib.h>

int main (){

	int numero;
	


	printf("Introduze un numero \n");
	scanf("%d",&numero);

	for(int i =1; i<numero; i++){
	for(int j=1; j<numero; j++){

	printf("*");

	}
	
	
	printf("\n");
	
	}

	return 0;
}


