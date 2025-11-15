#include <stdio.h>

// Este programa solicita cuatro calificaciones al usuario, las suma y divide el resultado entre 4.
// De esta manera obtiene el promedio final, el cual se utiliza para determinar si el alumno está aprobado.

main()
{
    float notaA;
    float notaB;
    float notaC;
    float notaD;
    float promedioFinal;

    printf("Ingresa la primer calificacion \n");
    scanf("%f", &notaA);

    printf("Ingresa la segunda calificacion \n");
    scanf("%f", &notaB);

    printf("Ingresa la tercera calificacion \n");
    scanf("%f", &notaC);

    printf("Ingresa la cuarta calificacion \n");
    scanf("%f", &notaD);

    promedioFinal = (notaA + notaB + notaC + notaD) / 4;

    printf("Tu promedio es de: %.1f \n", promedioFinal);

    if (promedioFinal > 6)
    {
        printf("Estas aprobado");
    }
    else
    {
        printf("Estas reprobado");
    }
}

