#include <stdio.h>

int indice;

void capturarValores(){
    int valores [5];
    for ( indice = 0; indice < 5; indice++)
    {
      printf("Ingresa el valor %i\n",indice+1);
      scanf("%i", &valores[indice]); 
    }
 
    for ( indice = 0; indice < 5; indice++)
      printf("El numero en la posicion %i es %i \n", indice, valores[indice]);
 
      int suma = 0;
      for (indice = 0; indice < 5; indice++)
      suma += valores[indice];
      printf("La suma de los 5 numeros es %d \n", suma);
      float promedio = suma / 5.0; 
      printf("El promedio de los 5 numeros es %.2f \n", promedio);
}

void mostrar(int n, char cadena[20]){
    for (indice = 0; indice < n; indice++)
        printf("%s", cadena);
    
}

int main(){

    int opcion;
    int n;
    char cadena[20];

    do{
        printf("1. Capturar enteros\n");
		printf("2. Mostrar cadena n veces\n");
		printf("3. Agregar personaje\n");
		printf("0. Capturar enteros\n");
			
		scanf ("%d", &opcion);

        switch (opcion)
        {
        case 1:
            capturarValores();
            break;
        case 2:
            printf("Escribe una cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena), stdin);
            printf("cuantas veces quieres que se repita la cadena?: ");
            scanf("%d", &n);

            mostrar(n, cadena);

            break;   
        default:
            break;
        }
    }while (opcion != 0);

return 0;
}