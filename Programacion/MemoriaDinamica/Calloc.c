#include <stdio.h>
#include <stdlib.h> // Para malloc, free, etc.

int main() {
    int n = 5;
    //int *arr = (int *)calloc(n, sizeof(int)); // Reserva e inicializa a cero

    int * arr = (int *)malloc(5*sizeof(int));


    if (arr == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }


    // arr[i] estará inicialmente en 0
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
        //printf("arr[%d] = %d\n", i, *arr+1);
    }


    int arr2 = (int *)calloc(5,sizeof(int));
    Reserva la memoria e inicializa a 0
     if (arr2 == NULL) {
        printf("Error: no se pudo asignar memoria.\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr2[i]);


    free(arr);
    return 0;
}

