#include<stdio.h>
main(){
float precio;
float dinero;
float cambio;

printf("Ingresa el costo del articulo \n");
scanf("%f", &precio);

printf("Ingresa la cantidad de dinero recibida \n");
scanf("%f", &dinero);

cambio = dinero-precio;

printf("El cambio es de: %.2f  \n", cambio);
}
