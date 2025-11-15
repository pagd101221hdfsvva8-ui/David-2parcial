#include <stdio.h>

// Este programa recibe tres números y determina cuál es el mayor, el de en medio y el menor,
// utilizando comparaciones para ordenarlos de mayor a menor.

main(){
    float numA;
    float numB;
    float numC;
    float mayorN;
    float medioN;
    float menorN;

    printf("Ingresa el primer numero \n");
    scanf("%f", &numA);

    printf("Ingresa el segundo numero \n");
    scanf("%f", &numB);

    printf("Ingresa el tercer numero \n");
    scanf("%f", &numC);

    if(numA >= numB && numA >= numC){

        mayorN = numA;

        if(numB >= numC){
            medioN = numB;
            menorN = numC;
        } else {
            medioN = numC;
            menorN = numB;
        }

    } else if(numB >= numA && numB >= numC){

        mayorN = numB;

        if(numA >= numC){
            medioN = numA;
            menorN = numC;
        } else {
            medioN = numC;
            menorN = numA;
        }

    } else {

        mayorN = numC;

        if(numA >= numB){
            medioN = numA;
            menorN = numB;
        } else {
            medioN = numB;
            menorN = numA;
        }
    }

    printf("Los numeros ordenados de mayor a menor son: %.2f, %.2f, %.2f, \n", numA, numB, numC);
}
