#include <stdio.h>

// El programa calcula el área total y el volumen de un cilindro.
// Para el área usa la fórmula:  2 * π * r * h  +  2 * π * r²
// Para el volumen usa la fórmula:  π * r² * h
// El usuario ingresa el radio, la altura y el valor de pi, y el programa realiza las operaciones.

main(){
    float rCilindro;
    float hCilindro;
    float valorPi;
    float areaTotal;
    float volumenTotal;

    printf("Ingresa el radio \n");
    scanf("%f", &rCilindro);

    printf("Ingresa la altura \n");
    scanf("%f", &hCilindro);

    printf("Ingresa el valor que ocuparas para pi \n");
    scanf("%f", &valorPi);

    areaTotal = 2 * (valorPi * rCilindro * hCilindro) + 2 * (valorPi * (rCilindro * rCilindro));
    volumenTotal = (valorPi * (rCilindro * rCilindro) * hCilindro);

    printf("El area es de: %.2f \n", areaTotal);
    printf("El volumen es de: %.2f \n", volumenTotal);
}

