#include<stdio.h>
main(){
    float r;
    float h;
    float valorPi;
    float areaTotal;
    float volumenTotal;

    printf("Ingresa el radio \n");
    scanf("%f", &r);

    printf("Ingresa la altura \n");
    scanf("%f", &h);

    printf("Ingresa el valor que ocuparas para pi \n");
    scanf("%f", &valorPi);

    areaTotal = 2 * (valorPi * r * h) + 2 * (valorPi * (r * r));
    volumenTotal = (valorPi * (r * r) * h);

    printf("El area es de: %.2f \n", areaTotal);
    printf("El volumen es de: %.2f \n", volumenTotal);
}

