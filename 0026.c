#include<stdio.h>
#include<math.h>
main(){

float a;
float b;
float c;
float discriminante;
float x1;
float x2;
float partereal;
float parteimaginaria;

printf("\t\t Formula general para una ecuacion de segundo grado\n");
printf("\t\tax^2 + bx + c = 0\n\n");

printf("Introduce el valor de a \n");
scanf("%f", &a);

printf("Introduce el valor de b \n");
scanf("%f", &b);

printf("Ingresa el valor de c \n");
scanf("%f", &c);

if (a == 0) {
        printf("\nNo es una ecuacion cuadratica (a no puede ser 0).\n");
    } else {
        discriminante = (b * b) - (4 * a * c);

        if (discriminante > 0) {
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("\nLa ecuacion tiene dos soluciones reales:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else if (discriminante == 0) {
            x1 = -b / (2 * a);
            printf("\nLa ecuacion tiene una solucion doble:\n");
            printf("x = %.2f\n", x1);
        } else {
            partereal = -b / (2 * a);
            parteimaginaria = sqrt(-discriminante) / (2 * a);
            printf("\nLa ecuacion tiene soluciones complejas:\n");
            printf("x1 = %.2f + %.2fi\n", partereal, parteimaginaria);
            printf("x2 = %.2f - %.2fi\n", partereal, parteimaginaria);
        }
    }
}
