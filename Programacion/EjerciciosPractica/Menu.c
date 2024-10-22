#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void es_vocal (char letra){


	 if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u" ||
	     letra == "A" || letra == "E" || letra == "I" || letra == "O" || letra == "U")}
		                                             
		 printf("la letra %c,es una vocal.\n",letra);

	} else {	 
		 
	        printf("la letra %c,no es una vocal.\n",letra);

	}

} 


int main(){ 

	char letra;

	printf("ingresa una letra");
	scanf("%c",&letra);

return 0;

}
