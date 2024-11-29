#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20
#define MAX_BUFFER 200

typedef struct {
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;
} Estudiante;




// Cumpleanero es un puntero porque va a ser modificado en la función
//Lo que hago en el cumpleanero es incrementar en 1 la edad que tiene
void cumpleanios(Estudiante  * cumpleanero) {
	cumpleanero->edad++;

	

}

void modificarNota(Estudiante * modificarNota){
	modificarNota ->nota++;


}

int main(){

Estudiante listado[MAX_ESTUDIANTES];

	int num_estudiantes;

	int edad = 15;
	float nota;
	char nombre[MAX_NOMBRE];




return 0;


}

