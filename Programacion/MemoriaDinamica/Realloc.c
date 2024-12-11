#include <stdio.h>
#include <stdlib.h>

int main(){

int n = 3;

//Reservo espacio para 3 enteros
int * arr = (int *)malloc(3*sizeof(int));

//Siempre hay que comprobar

if(arr == NULL){

    printf("Error fatal,no hay memoria\n");

    return EXIT_FAILURE;
}


//Inicializa los valores del array con los numeros 1,3 y 5


//Inicializacion basica
arr[0] =1;
arr[1] =2;
arr[2] =5;


for (int i = 0; i < 3; ++i){
    arr[i] = 2*i+1;
}


//Vamos a ampliar el array a 5 elemntos
int * arr_ampliado = (int*) realloc(arr,5*sizeof(int));
if(arr_ampliado == NULL){

    free(arr);
    printf("Error:no se ha podido redimensionar\n");
    return EXIT_FAILURE;

}


//Para evitar confusiones entre arr_ampliado y arr, es recomendable añadir;
//arr = arr_ampliado


//Terminamos de inicializar
arr_ampliado[3] = 7;
arr_ampliado[4] = 9;



for (int i = 0; i < 5; ++i){
    printf("arr_ampliado[%d]: %d\n" ,i ,arr_ampliado[i] );
}


//¿Que tengo que liberar?
free(arr_ampliado);

//free(arr); //ERROR:Double free detected

    return 0;
}