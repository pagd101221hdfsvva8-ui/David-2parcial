#include <stdio.h>

// Este programa calcula el cuadrado del número que ingresa el usuario multiplicándolo por sí mismo.

main(){
    int numeroUsuario;
    int cuadradoCalc;

    printf("Ingresa un numero \n");
    scanf("%f", &numeroUsuario);  // (Se mantiene la misma lógica original)

    cuadradoCalc = numeroUsuario * numeroUsuario;

    printf("El cuadrado del numero es: %f", cuadradoCalc);
}
