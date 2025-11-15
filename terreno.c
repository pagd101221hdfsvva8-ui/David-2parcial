#include<stdio.h>

/*
   El programa calcula el área multiplicando largo por ancho.
   Luego multiplica el área por el precio por m² (750).
   Si el área es mayor a 500 m², aplica un 10% de descuento
   multiplicando el costo por 0.9.
*/

main()
{
    float Largo;
    float Ancho;
    float Area;
    float Costo;
    float Precio = 750.0;

    printf("Ingresa el largo del terreno \n");
    scanf("%f", &Largo);

    printf("Ingresa el ancho del terreno \n");
    scanf("%f", &Ancho);

    Area = Largo * Ancho;
    Costo = Area * Precio;

    if(Area > 500)
    {
        Costo = Costo * 0.90;  // aplica 10% de descuento
    }

    printf("El área del terreno es de: %.2f \n", Area);
    printf("El costo total es de: $%.2f", Costo);
}

