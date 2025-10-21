#include<stdio.h>
main(){
float num1;
float num2;
float num3;
float suma;

printf("Ingresa el numero:}n");
scanf("%f", &num1);

printf("Ingresa el numero dos:\n");
scanf("%f",&num2);

printf("Ingresa el numero tres:\n");
scanf("%f",&num3);
suma = num1 + num2 + num3;

printf("La suma de los tres numeros es: %.2f", suma);
}
