#include <stdio.h>

int main(){

    int opcion;

    do{
        printf("1. Capturar enteros\n");
		printf("2. Mostrar cadena n veces\n");
		printf("3. Agregar personaje\n");
		printf("0. Capturar enteros\n");
			
		scanf ("%d", &opcion);
    }while (opcion != 0);
    
return 0;
}