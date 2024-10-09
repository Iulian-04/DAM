#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int calcularRaiz<>(){
	double raiz;
	int valor;
        
	double radio,area;
	
	printf("Introduzca un número para calcular su raiz\n");
	scanf("%d",&valor);
	raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %lf\n", valor,raiz);



	printf("Introduzca el radio del circulo para calcular su area\n");
	scanf("%lf",&radio);
	area= radio * radio * M_PI;
		printf("El área del circulo es %lf/n",area);
	return 0;
}
		
