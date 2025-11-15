#include <stdio.h>

// Este programa multiplica tres números ingresados por el usuario y muestra el resultado final.

main(){
    float valorA;
    float valorB;
    float valorC;
    float resultadoFinal;

    printf("Ingresa el primer numero \n");
    scanf("%f", &valorA);

    printf("Ingresa el segundo numero \n");
    scanf("%f", &valorB);

    printf("Ingresael tercer numero \n");
    scanf("%f", &valorC);

    resultadoFinal = valorA * valorB * valorC;

    printf("El resultado es: %.2f", resultadoFinal);
}

