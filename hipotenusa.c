#include <stdio.h>

// Este programa calcula la hipotenusa usando el teorema de Pitágoras: sqrt(cateto1² + cateto2²).

main(){
    float ladoA;
    float ladoB;
    float valorHip;

    printf("Ingresa el valor del cateto 1 \n");
    scanf("%f", &ladoA);

    printf("Ingresa el valor del cateto 2 \n");
    scanf("%f", &ladoB);

    valorHip = sqrt((ladoA * ladoA) + (ladoB * ladoB));

    printf("La hipotenusa es: %.2f \n", valorHip);
}
