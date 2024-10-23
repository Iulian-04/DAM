#include <stdio.h>
#include<stdlib.h>


#include <stdio.h>
int main() {
	int suma = 0;
	int i;
	
	for (int i = 1; i <= 10; i+=1) {
	ptintf("%d + %d ",suma,i);

		suma=suma +i;
	}
	printf("La suma es: %d\n", suma);
	return 0;
}
