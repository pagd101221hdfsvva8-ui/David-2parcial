#include <stdio.h>

// Este programa convierte una medida de centímetros a pulgadas.
// Para hacerlo, divide el valor ingresado entre 2.54, ya que 1 pulgada equivale a 2.54 cm.

int main()
{
    float medidaCm;
    float medidaPulgadas;

    printf("Ingresa el valor a convertir \n");
    scanf("%f", &medidaCm);

    medidaPulgadas = medidaCm / 2.54;

    printf("El resultado es: %f \n", medidaPulgadas);
}
