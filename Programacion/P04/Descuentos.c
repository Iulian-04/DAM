#include <stdio.h>
#include <string.h>

// Funcion de principal

 int main (){

	float monto,monto_final,descuento;
	char rol [10];

	printf("Ponga el numero del monto");
	scanf("%f", &monto);


	printf("Ponga su rol");
      	scanf("%s" ,rol);


 if (strcmp(rol, "Estudiante") == 0) {
	         descuento = 0.15; 

 }  else if (strcmp(rol, "Profesor") == 0) {
	           descuento = 0.10; 


   } else {

descuento = 0.0; 

  }

monto_final = monto * (1 - descuento);

printf("El monto final después de aplicar el descuento es: %.2f\n", monto_final);

    return 0;

   }



 	
