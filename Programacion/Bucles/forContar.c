#include <stdio.h>
#include <stdlib.h>

int main (){

	int contadordivisores =0;
	int numero;


	printf("Introduze un numero \n");
	scanf("%d",&numero);

	for(int i =1; i<numero; i++){
		if(numero% i ==0){

		contadordivisores++;

		}

	}


	printf("El numero %d tiene %d divisores.\n ",numero ,contadordivisores);




	return 0;
}


