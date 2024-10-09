#include <stdio.h>
#include <stdlib.h>

// Funcion principal

int main() {

	double num1, num2, resultado;
	char operador;


	printf("Ingrese el primer número: ");
	scanf("%lf", &num1);


	printf("Ingrese el segundo número: ");
	scanf("%lf", &num2);


	printf("Ingrese un operador (+, -, *, /): ");
	scanf(" %c", &operador); 

// Se realiza la operacion switch case


	switch (operador) {
		case '+':
			resultado = num1 + num2;
			printf("Resultado: %.2lf\n", resultado);

			break;


		case '-':
			resultado = num1 - num2;
			printf("Resultado: %.2lf\n", resultado);

			break;


		case '*':
			resultado = num1 * num2;
			printf("Resultado: %.2lf\n", resultado);

			break;


		case '/':

			if (num2 != 0) {
				resultado = num1 / num2;
				printf("Resultado: %.2lf\n", resultado);
			} else {
				printf("Error: División por cero.\n");

			}

			 	break;
			default:
				printf("Operador no válido\n");
				break;
	}

	return 0;

	}




