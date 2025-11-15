#include <stdio.h>

// Este programa usa un switch para elegir entre dos operaciones: si la opción es 1, multiplica tres números;
// si la opción es 2, los suma. Todo depende del valor inicial de la variable que entra al switch.

main()
{
    int opcionUsuario;
    float valorA;
    float valorB;
    float resultadoFinal;

    switch(opcionUsuario)
    {
    case 1:
        printf("Ingresa el numero 1");
        scanf("%f", &opcionUsuario);

        printf("Ingresa el numero 2");
        scanf("%f", &valorB);

        printf("Ingresa el nuemero 3");
        scanf("%f", &valorB);

        if(opcionUsuario < 0)
        {
            resultadoFinal = (opcionUsuario * valorA * valorB);
            printf("El resultado es: %.2f", resultadoFinal);
        }
        break;

    case 2:
        printf("Ingresa el numero 1");
        scanf("%f", &opcionUsuario);

        printf("Ingresa el numero 2");
        scanf("%f", &valorB);

        printf("Ingresa el nuemero 3");
        scanf("%f", &valorB);

        if(opcionUsuario >= 0)
        {
            resultadoFinal = opcionUsuario + valorA + valorB;
            printf("El resultado es: %.2f", resultadoFinal);
        }
        break;
    }
}

