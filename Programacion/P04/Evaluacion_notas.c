#include <stdio.h>
#include <stdlib.h>


// Funcion principal

int main() {
    float calificacion;


// Decir al usuario que ponga una calificacion

     printf("Ingrese la calificación (0 a 10): ");
         scanf("%f", &calificacion);


 if (calificacion < 0 || calificacion > 10) {
	         printf("Calificación no válida. Debe estar entre 0 y 10.\n");
 } else {

// Usar el operador ternario

	 const char* resultado = (calificacion >= 5) ? "Aprobado" : "Suspendido";
	         printf("Resultado: %s\n", resultado);
		     }

     return 0;
}
