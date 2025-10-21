#include<stdio.h>
main(){
float altura;
float base;
float area;

printf("Ingresa el valor de la altura");
scanf("%f", &altura);

printf("Ingresa el valor de la base:\n");
scanf("%f",&base);

area = (base * altura) / 2;

printf("El area del triangulo es : %.2f \n", area);
}
