#include <stdio.h>

/*
   Este programa solicita un número al usuario,
   calcula su cuadrado multiplicándolo por sí mismo
   y luego muestra el resultado en pantalla.
*/

main() {
    float numeroIngresado;
    float cuadrado;

    printf("Ingresa el numero deseado \n");
    scanf("%f", &numeroIngresado);

    cuadrado = numeroIngresado * numeroIngresado;

    printf("El cuadrado de tu numero es: %.2f \n", cuadrado);
}
