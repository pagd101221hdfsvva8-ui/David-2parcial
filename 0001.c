#include<stdio.h>
main()
{
    float Calificacion1;
    float Calificacion2;
    float Calificacion3;
    float Calificacion4;
    float Promedio;
    printf("Ingresa la primer calificacion \n");
    scanf("%f", &Calificacion1);
    printf("Ingresa la segunda calificacion \n");
    scanf("%f", &Calificacion2);
    printf("Ingresa la tercera calificacion \n");
    scanf("%f", &Calificacion3);
    printf("Ingresa la cuarta calificacion \n");
    scanf("%f", &Calificacion4);
    Promedio=(Calificacion1+Calificacion2+Calificacion3+Calificacion4)/4;
    printf("Tu promedio es de: %.1f \n", Promedio);
    if(Promedio>6)
    {
        printf("Estas aprobado");
    }
    else
    {
        printf("Estas reprobado");
    }
}
