#include<stdio.h>
#include<stdlib.h>

int main(){

	int arr[5] = {1,2,3,4,5};

	int numeroElemntos= sizeof(arr)/sizeof(int);	    



	//recorrer el array y sumarlo
	for(int * p = arr; *p<=5; p++){
		printf(" %d\n",*p);

	}

	printf("Sizeof arr: %ld\n",sizeof(arr));
	printf("Sizeof int: %ld\n",sizeof(int));
	printf("Elementos del array :%ld\n",sizeof(arr)/sizeof(int));
	



	char palabra[20] = "gratis";

	for(char * l= palabra; *l != '\0'; l++)
		printf("%c\n",*l);



	return 0;


}
