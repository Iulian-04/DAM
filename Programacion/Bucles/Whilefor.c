#include <stdio.h>
#include <stdlib.h>


int main(){

	int i = 0;

	for ( /*valor inicial*/ i = 0 ; i<5 /*condicion*/ ; i = i + 1 /*Código a ejecutar entre vueltas*/ ){

		printf("%d,",i);
	}
	printf("Terminado\n");

//Traducimosa a while

i = 0;

while(i<5){ //Condicion

	printf("%d",i); //El interior del for
	i = i +1 //Codigo entre vueltas

	}

	
	printf ("Terminado el while\n");


return EXIT_SUCCESS;
}	
