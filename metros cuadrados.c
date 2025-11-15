#include <stdio.h>

// Este programa calcula el precio de un terreno multiplicando los metros cuadrados ingresados por el usuario por 1500.00.

main(){
    float metrosTerreno;
    float costoFinal;

    printf("Ingresa el area del terreno \n");
    scanf("%f", metrosTerreno);  // Se mantiene igual que tu código original

    costoFinal = (1500.00 * metrosTerreno);

    printf("El precio es de: %.2f", costoFinal);
}
