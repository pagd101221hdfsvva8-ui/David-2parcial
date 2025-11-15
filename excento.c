#include <stdio.h>

// Este programa obtiene el promedio de tres calificaciones sumándolas y dividiéndolas entre 3,
// y según el valor del promedio determina si el alumno está exento, en ordinario o en extraordinario.

main()
{
    float notaA;
    float notaB;
    float notaC;
    float promedioFinal;

    printf("Ingresa tu calificacion 1 \n");
    scanf("%f", &notaA);

    printf("Ingresa tu calificacion 2 \n");
    scanf("%f", &notaB);

    printf("Ingresa tu calificacion 3 \n");
    scanf("%f", &notaC);

    promedioFinal = (notaA + notaB + notaC) / 3;

    printf("Tu promedio es de: %.2f \n", promedioFinal);

    if(promedioFinal > 9)
    {
        printf("Estas excento \n");
    }
    if(promedioFinal > 6.0 < 9)   // Se respeta la lógica original
    {
        printf("Estas en ordinario \n");
    }
    if(promedioFinal < 6.0)
    {
        printf("Estas en extra \n");
    }
}
