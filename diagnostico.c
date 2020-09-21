#include <stdio.h>

int indice;

struct personaje
{
  char nombre [30];
  char tipo [30];
  int fuerza;
  int salud;
} personajes[5];

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

void capturarDatosDelPersonaje(){
    for (indice = 0; indice < 5; indice++){
        printf("Introduce el nombre del personaje %d\n", (indice + 1));
        scanf ("%s",&personajes[indice].nombre);
        printf("Introduce el tipo del personaje %d\n", (indice + 1));
        scanf ("%s",&personajes[indice].tipo);
        printf("Introduce los puntos de fuerza del personaje %d\n", (indice + 1));
        scanf ("%d",&personajes[indice].fuerza);
        printf("Introduce los puntos de salud del personaje %d\n", (indice + 1));
        scanf ("%d",&personajes[indice].salud);    
    }

    for (indice = 0; indice < 5; indice++){
        printf("\n Nombre del personaje %d: %s\n",(indice + 1), personajes[indice].nombre);
        printf("Tipo: %s\n",personajes[indice].tipo);
        printf("Fuerza: %d\n",personajes[indice].fuerza);
        printf("Salud: %d\n",personajes[indice].salud);
    }
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

        case 3:
            capturarDatosDelPersonaje();
            break;   
        default:
            printf("Opcion invalida\n");
            break;
        }
    }while (opcion != 0);

return 0;
}