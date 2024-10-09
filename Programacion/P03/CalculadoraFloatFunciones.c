#include <stdio.h>
#include <stdlib.h>

// Funciones para sumar,restar,multiplicar y dividir las funciones

float suma(float a, float b) {
	    return a + b;
}


float resta(float a, float b) {
	    return a - b;
}


float multiplicacion(float a, float b) {
	    return 
		   a * b;
		   
}


float division(float a, float b) {
	    return a / b;
}


// Funcion principal

int main() {

	float numero1;
	float numero2;	


	printf("Introduzca el primer numero:");
	scanf("%f" , &numero1);

	printf("Introduzca el segundo numero:");
	scanf("%f" , &numero2);


 	printf("el resultado de la suma es =%f\n",suma(numero1,numero2));
 	printf("el resultado de la resta es =%f\n",resta(numero1,numero2));
 	printf("el resultado de la multiplicacion es =%f\n",multiplicacion(numero1,numero2));
 	printf("el resultado de la division es =%f\n",division(numero1,numero2));


	return 0;

}
