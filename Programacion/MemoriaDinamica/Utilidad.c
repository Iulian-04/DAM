// Crea un programa que pida por pantalla un numero y cree un array de enteros de ese tamaño inicializando con los numeros pares.
//Depues,imprimelo

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;

	printf("Introduce un numero:");
	scanf("%d",&n);
	int * arr = (int*)malloc(n*sizeof(int));
	if(arr == NULL){
		printf("Error del malloc\n");
		return EXIT_FAILURE;

	}

	for (int i = 0; i<n; i++){

		arr[i] = 2*i;


	}

	for (int i = 0; i < n; ++i){

		printf("arr[%d]: %d\n",i,arr[i]);
	}


	free(arr);



return 0;

}