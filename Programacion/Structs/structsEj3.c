#include <stdio.h>
#include <stdlib.h>
#define MAX_ITEMS 100
typedef struct proveedor{
	char nombre[100];
	char direccion[100];
	char telefono[13];
}Proveedor;

typedef struct{
	char nombre[100]
	float precio;
	Proveedor proveedor;

}Articulo;



typedef struct{
	Articulo articulos[MAX_ITEMS];
	int cantidades[MAX_ITEMS];
	int totalArticulos;

}Inventario;

int main(){
	Inventario miInventario;
	// Esta forma de inicializar un struct solo es valida en la declaracion
	Articulo articulo ={"nombre,10",{"NomPro","Dirpro","telPro"}};
	//Aqui,que mi miInventario ya esta declarada,no puedo inicializarla asi:miInventario={}
	
	miInventario.articulos[0] = articulo;
	miInventario.cantidades[0]=10; //Inicializacion solo es valida en la declaracion
}

	printf("Nombre del articulo:%s\n",
		miInventario.articulos[0].nombre
	);

	printf("Cantidad: %d\n",
		miInventario.cantidades[0]
	);

	
	printf("Nombre del proveedor:%s\n",
		miInventario.articulos[0].proveedor.nombre
	);


	return 0;

}

