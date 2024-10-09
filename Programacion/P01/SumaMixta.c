#include<stdio.h>
#include<stdlib.h>
int main(){

	int num1;
	int num2;

	float ResultadoSuma;
	float ResultadoResta;
	float ResultadoMultiplicacion;
	float ResultadoDivision;

	printf("Introduzca el primer número por favor: ");
	scanf("%d", &num1);
	printf("Introduzca el segundo número por favor: ");
	scanf("%d", &num2);

	ResultadoSuma = num1 + num2;
	ResultadoResta = num1 - num2;
	ResultadoMultiplicacion = num1 * num2;
	ResultadoDivision = num1 / num2;

	printf("El resultado de su suma es: %.2f\n", ResultadoSuma);
	printf("El resultado de su resta es: %.2f\n ", ResultadoResta);
	printf("El resultado de su multiplicación es: %.2f\n", ResultadoMultiplicacion);
	printf("El resultado de su división es: %.2f\n", ResultadoDivision);
	return 0;
}
