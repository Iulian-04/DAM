#include<stdio.h>
#include<stdlib.h>


int main(){


int n;
int cadena;

printf("Introduce un numero:" );
scanf("%d",&n);


 char * arr  = (char*)malloc(n*sizeof(char));


if(arr == NULL){

	printf("Error en la memoria\n");

	return EXIT_FAILURE;
}


for (int i = 0; i < n; ++i)
{
	printf("Introduce la cadena\n");
	scanf("%s",&arr[i]);
    printf("arr[%d]: %d\n" ,i ,arr[i] );
}


 






free(arr);

	return 0;
}