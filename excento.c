#include <stdio.h>

// Este programa calcula el promedio de tres calificaciones sumándolas y dividiéndolas entre 3.
// Con ese promedio determina si el alumno está exento o debe presentar examen ordinario.

main(){
    float nota1;
    float nota2;
    float nota3;
    float promedioFinal;

    printf("Ingresa tu primera calificacion \n");
    scanf("%f", &nota1);

    printf("Ingresa la segunda calificacion \n");
    scanf("%f", &nota2);

    printf("Ingresa la ultima calificacion \n");
    scanf("%f", &nota3);

    promedioFinal = (nota1 + nota2 + nota3) / 3;

    printf("Tu promedio es de: %2.f \n", promedioFinal);

    if(promedioFinal >= 9){
        printf("Estas excento \n");
    }else{
        printf("Haras ordinario \n");
    }
}
