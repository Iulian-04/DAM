#include <stdio.h>
#include <stdlib.h>


	
int main(){
	char str1[5] = "hola";
	printf ("%s\n",str1);
	printf("%c\n",str1[3]);//imprime el cuarto caracter,poruqe se empieza a contar en el 0
	printf("%d\n",str1[4]);

	str1[4] = '$';
	printf("%s\n",str1); // Elimina el /0 y se seguira imprimiendo hasta que haya un /0 en la memoria

return EXIT_SUCCESS;
}
