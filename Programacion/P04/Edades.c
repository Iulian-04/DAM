#include <stdio.h>
#include <stdlib.h>

int main (){

	int edad;


	printf("Ingrese su edad");
	scanf("%d", &edad);


if (edad <  12 ) {
	printf("niño.\n");


} else if (edad >= 12 && edad <= 17) {
	printf("adolescente.\n");



} else if (edad >= 18 && edad <= 64) {
	printf("adulto.\n");


 } else {

	printf("mayor.\n");

}


return 0;

}

      
