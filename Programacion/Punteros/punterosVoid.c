#include <stdio.h>
#include <stdlib.h>


//Un casting es caonvertir una variable a otra variable

void printValor(void * ptr,char tipo){

	switch(tipo){
		case 'd':

// Esto no es correcto por que no estamos accediendo al contenido del puntero

			printf("Double %lf\n",* ((double *)ptr));
			break;

		case 'i':
		       printf("Entero %d\n",*((int *) ptr));

			break;	       

		default:

			printf("Error\n");

	}

}


int main (){



	double num = 2.1;

	void * dir = &num;

	printValor(dir,'d');
	printValor()



	return 0;

}
