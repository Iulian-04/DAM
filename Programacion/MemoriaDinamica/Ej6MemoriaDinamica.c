#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
   

    
    printf("Ingrese los espacios: ");
    scanf("%d", &n);

    
    int *arr = (int*)malloc(n*sizeof(int));

    
    if (arr == NULL) {
        printf("Error fatal.\n");
        return EXIT_FAILURE;
    }

   printf("Ingrese los nuevos espacios\n");
    for (int i = 0; i < n; ++i)
    {
    	    scanf("%d",&arr[i]);

    printf("arr[%d]: %d\n" ,i ,arr[i] );

    }

    free(arr);


	return 0;
}
