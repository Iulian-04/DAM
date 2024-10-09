#include <stdio.h>
#include <stdlib.h>

// Funcion principal

int main() {
	int dia;


	printf("Ingrese un número del 1 al 7: ");
	scanf("%d", &dia);


// Usar el switch case

	switch (dia) {
		case 1:
			printf("Lunes\n");
			break;
		case 2:
			printf("Martes\n");
			break;
		case 3:
			printf("Miércoles\n");
			break;
		case 4:
			printf("Jueves\n");
			break;
		case 5:
			printf("Viernes\n");
			break;
		case 6:
			printf("Sábado\n");
			break;
		case 7:
			printf("Domingo\n");
			break;
		default:
			printf("Número inválido\n");
			break;
	}

	return 0;
}





