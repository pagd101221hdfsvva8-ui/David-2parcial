#include <stdio.h>

// Este programa pide al usuario la marca, modelo y año de su automóvil, y luego suma esos valores para generar un número final representado como "coche".

main()
{
    int valorMarca;
    int valorModelo;
    int valorAnio;
    int resultadoCoche;

    printf("Ingresa la marca de tu automovil \n");
    scanf("%d", &valorMarca);

    printf("Ingresa el modelo \n");
    scanf("%d", &valorModelo);

    printf("Ingresa el ano \n");
    scanf("%d", &valorAnio);

    resultadoCoche = valorMarca + valorModelo + valorAnio;

    printf("Tu coche es: %d", resultadoCoche);
}
