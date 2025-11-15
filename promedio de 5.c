#include<stdio.h>

// Este programa solicita cinco calificaciones al usuario, suma todas y luego divide entre 5
// para obtener el promedio final que se muestra en pantalla.

main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float nota5;
    float promedioFinal;

    printf("Ingresa la calificacion 1 \n");
    scanf("%f", &nota1);

    printf("Ingresa la calificacion 2 \n");
    scanf("%f", &nota2);

    printf("Ingresa la calificacion 3 \n");
    scanf("%f", &nota3);

    printf("Ingresa la calificacion 4 \n");
    scanf("%f", &nota4);

    printf("Ingresa la calificacion 5 \n");
    scanf("%f", &nota5);

    promedioFinal = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("Tu promedio es de: %.2f", promedioFinal);
