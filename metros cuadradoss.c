#include<stdio.h>

/*
   El precio total del terreno se obtiene multiplicando el área ingresada
   (en metros cuadrados) por el costo fijo de 1500 por metro cuadrado.
*/

main(){
    float M2;
    float Resultado;

    printf("Ingresa el area del terreno \n");
    scanf("%f", &M2);

    Resultado = 1500.00 * M2;

    printf("El precio es de: %.2f", Resultado);
}

