#include<stdio.h>
main(){
float altura;
float base;
float area;

printf("Ingresa la altura\n");
scanf("%f",&altura);
printf("ingresa la base\n");
scanf("%f",&base);

area = (base*altura) / 2;
printf("El area del triangulo es: %.2f \n", area);
}
