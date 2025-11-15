#include<stdio.h>

/*
   El área de un triángulo se obtiene usando la fórmula:
       área = (base * altura) / 2
   Solo se multiplican los valores ingresados y se divide entre 2.
*/

main(){
    float altura;
    float base;
    float area;

    printf("Ingresa la altura\n");
    scanf("%f",&altura);
    printf("Ingresa la base\n");
    scanf("%f",&base);

    area = (base * altura) / 2;
    printf("El area del triangulo es: %.2f \n", area);
}
