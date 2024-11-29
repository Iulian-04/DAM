#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Como funcionan los punteros con los structs

//Definimos las constantes
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTE 20
#define MAX_BUFFER 200


typedef struct {
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;


}Estudiante;

//Inicializo el estudiante

//El malloc es para reservar la memoria

void inicializar( Estudiante*estudiante_a_rellenar, char * nombre,int edad, float nota){
}

	//En esta funcion se van creando huecos en el espacio de memoria en edad,nota y nombre
	
	//No funciona por que igualas direcciones de memoria y no el contenido y lo que hay que hacer es un strcopy para que funcione y coja el contenido y no las direcciones de memoria.

	//En vez de punto hay que poner la flecha porque lo que estas haciendo es cogerlo como puntero y la solucion es poner el operador ->
		

	estudiante_a_rellenar ->edad = edad;
	estudiante_a_rellenar ->nota = nota;
	//estudiante_a_rellenar.nombre = nombre;
	strcopy(estudiante_a_rellenar) ->nombre,nombre;


	//Estudiante * estudiante_nuevo = malloc //memoria dinamica
			
	//return estudiante_nuevo;

	//No funciona por que los funciones en local solo funcionan en local por que sino se pierden 		los datos.
	
	//No se puede rellenar el dato porque no he reservado memoria del puntero
	
//Tiene que recibir un puntero a estudiante porque va modificar la variable la edad del estudinte
//No es necesarioo un valor de retorno
void cumpleanios(Estudiante *cumpleanero){
	cumpleanero->edad++;

	
}


//Vamos a crear una funcion para imprimir un estudiante.lo vamos a hacer de 2 formas

//Recibe un etudiante y muestra por pantalla todos sus datos
void imprimirEstudinate(const Estudiante * estudiante_a_imprimir) {

printf("Nombre: %s\n",estudiante_a_imprimir->nombre);
printf("Edad: %d\n",estudiante_a_imprimir->edad);
printf("Nota: %f\n",estudiante_a_imprimir->nota);
}

//Una funcion de imprimir sin los printf
//Convertir un estudiante a una cadena de texto
char * estudianteTostring( const Estudiante * datos){
	char retval[MAX_BUFFER];

//snprintf (donde,cuanto , el que)[Lo que harias con un printf])
// quiero que se una varaible del main que aqui se utiliza y aqui se rellena
// Da WARNING  porque la variable deja de existir cuando acaba la funcion
	snprintf(retval,MAX_BUFFER,"El estudiante %s de %d años ha salido un %f",datos ->nombre,datos->edad,datos->nota);

	return retval;	
}

char * estudianteTostring( const Estudiante * datos,char *retval){
	








int main(){

	Estudiante listado[MAX_ESTUDIANTE]; //Aqui se reserva la memoria para los estudiantes.Los 560 bytes
	
	int num_estudiantes;

	int edad;
	float nota;
	char nombre[MAX_NOMBRE];


	printf("%p\n",listado);
	printf("Sizeoff listado: %lu\n",sizeof(listado));
	printf("Sizeoff estudiante: %lu\n",sizeof(Estudiante));

	printf("¿Cuantos estudiantes desea inicializar?:");
	scanf("%d",&num_estudiantes);


	for(int i = 0; i < num_estudiantes;i++){
	printf("Introduce la edad: ");
	scanf("%d",&edad);
	printf("Introduce la nota: ");
	scanf("%f",&nota);
	printf("Introduce el nombre: ");
	scanf("%s",nombre);

	inicializar(&listado[i],/*direccion de memoria estudiante*/nombre,edad,nota);
	//inicializar(listado + i,/*direccion de memoria estudiantenombre,edad,nota);
	

	//El estudiante de la primera posicion ha cumplido años
	printf("Edad antigua: %s: %d\n",listado[0].nombre,listado[0].edad);
	cumpleanios(&listado[0]);//Dir de memoria
	//cumpleaños(listado)
	printf("Edad nueva: %d\n",listado[0].edad);
	printf("Edad nueva: %d\n",listado->edad);
	printf("Edad nueva: %d\n",(*listado).edad);


	imprimirEstudiante(&listado[0]);
	char StringARellenar[MAX_BUFFER];
	estudianteTostring(&listado[0],StringARellenar);
	printf("%s\n",StringARellenar);

	
	return 0;
}
