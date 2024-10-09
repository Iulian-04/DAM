#include <stdio.h>
#include <stdlib.h>

// Funcion para capitalizar la letra en minuscula

char capitalizar (char letra_minuscula){ 
	

// Funcion principal
	
int main(){
	char letra_minuscula;


	printf("Introduzca un carácter en minúscula: ");
	scanf(" %c", &letra_minuscula);


	char letra_mayuscula = capitalizar(letra_minuscula);


	printf("El carácter en mayúscula es: %c\n", letra_mayuscula);

	return 0;
}




