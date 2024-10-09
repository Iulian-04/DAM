#include <stdio.h>
#include <stdlib.h>


int main(){

	float numero1 = 2.5;
	float numero2 = 2.6;
        float resultado_suma,resultado_resta,resultado_multiplicacion,resultado_division;



     printf("Escribe el primer número por favor: ");
     scanf("%f", &numero1);  
    
     printf("Escribe el segundo número por favor: ");
     scanf("%f", &numero2);

       resultado_suma = numero1 + numero2; 
       resultado_resta = numero1 - numero2;	       
       resultado_multiplicacion = numero1 * numero2; 
       resultado_division = numero1 / numero2;
     
 
     printf("suma= %.2f\n", resultado_suma);
     printf("resta=%.2f\n", resultado_resta);
    printf("multiplicacion= %.2f\n",resultado_multiplicacion);
    printf("divison= %.2f\n",resultado_division);


return 0;
}    
    









