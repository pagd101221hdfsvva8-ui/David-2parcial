#include<stdio.h>

/*
   El programa pide base y altura.
   Calcula el perímetro como (base + altura) * 2
   y el área como (base * altura) / 2.
*/

main(){
    float base;
    float altura;
    float perimetro;
    float area;

    printf("Ingresa la base \n");
    scanf("%f", &base);

    printf("Ingresa la altura \n");
    scanf("%f", &altura);

    perimetro = (base + altura) * 2;
    area = (base * altura) / 2;

    printf("El perimetro es de: %.2f \n", perimetro);
    printf("El area es de: %.2f \n", area);
}
