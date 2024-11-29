#include <stdio.h>

int main() {
    int numero = 10;
    int trampa = 20;

    const int * const ptr = &numero;  // Asi lo que haces es que no cambie

    printf("Valor: %d\n", *ptr);

    // *ptr = 20;  // Esto daría un error porque el valor es constante
    numero = 20;   // Cambiar el valor directamente es válido
    printf("Nuevo valor: %d\n", *ptr);

    // Vamos a trampearlo
    //ptr = &trampa; //modificas la direccion de memoria
    *ptr = 30;
    printf("Nuevo valor: %d\n",*ptr);

    return 0;
}