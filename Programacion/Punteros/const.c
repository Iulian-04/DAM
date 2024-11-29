#include <stdio.h>

int main() {
    const int LIMITE = 100;  // Definir una constante


    int * trampa =&LIMITE; //Esta asignacion genera un  warning

    printf("El valor de LIMITE es: %d\n", LIMITE);

    LIMITE = 200;  // Esto daría un error porque LIMITE es constante

    return 0;

    *trampa = 200
    printf("El valor LIMITE es:  %d\n",LIMITE );
}