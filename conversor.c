#include <stdio.h>

// Este programa convierte un valor ingresado por el usuario dividiéndolo entre 1.609,
// lo cual normalmente se usa para convertir kilómetros a millas.

main(){
    float valorEntrada;
    float valorConvertido;

    printf("Ingresa el valor a convertir \n");
    scanf("%f", &valorConvertido);

    valorConvertido = valorEntrada / 1.609;

    printf("Tu resultado es de: %f", valorConvertido);
}
