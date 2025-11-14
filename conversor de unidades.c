#include<stdio.h>

int main()
{
    float datoEntrada;
    float conversionFinal;

    printf("Ingresa el valor a convertir \n");
    scanf("%f", &datoEntrada);

    conversionFinal = datoEntrada / 2.54;

    printf("El resultado es: %f \n", conversionFinal);
}
