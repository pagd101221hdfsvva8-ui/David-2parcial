#include<stdio.h>

// Este programa calcula el cambio que debe recibir una persona. Se captura el precio de un artículo
// y el dinero entregado por el cliente. Luego se realiza una resta para obtener el cambio final.

main(){
    float costoArticulo;
    float dineroEntregado;
    float cantidadCambio;

    printf("Ingresa el costo del articulo \n");
    scanf("%f", &costoArticulo);

    printf("Ingresa la cantidad de dinero recibida \n");
    scanf("%f", &dineroEntregado);

    cantidadCambio = dineroEntregado - costoArticulo;

    printf("El cambio es de: %.2f  \n", cantidadCambio);
