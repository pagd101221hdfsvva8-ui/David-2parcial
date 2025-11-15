#include <stdio.h>

// Este programa calcula la edad del usuario restando el año de nacimiento al año actual.

main(){
    int anioNac;
    int anioActual;
    int edadFinal;

    printf("Ingresa tu ano de nacimiento \n");
    scanf("%d", &anioNac);

    printf("Ingresa el ano actual \n");
    scanf("%d", &anioActual);

    edadFinal = (anioActual - anioNac);

    printf("Tu edad es de: %d", edadFinal);
}
