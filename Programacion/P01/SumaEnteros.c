#include <stdio.h>
#include <stdlib.h>


int main(){

	int numero1 = 6;
	int numero2 = 2;
        int resultado_suma,resultado_resta,resultado_multiplicacion,resultado_division;


       resultado_suma = numero1 + numero2; 
       resultado_resta = numero1 - numero2;	       
       resultado_multiplicacion = numero1 * numero2; 
       resultado_division = numero1 / numero2;

     printf("Escribe el primer número por favor: ");
     scanf("%d", &numero1);  
    
     printf("Escribe el segundo número por favor: ");
     scanf("%d", &numero2);
     
 
     printf("suma= %d\n", resultado_suma);
     printf("resta=%d\n", resultado_resta);
    printf("multiplicacion= %d\n",resultado_multiplicacion);
    printf("divison= %d\n ",resultado_division);


return 0;
}    
    









