#include<stdio.h>
main(){
float Radio;
float Altura;
float Pi;
float Area;
float Volumen;

printf("Ingresa el radio \n");
scanf("%f", &Radio);

printf("Ingresa la altura \n");
scanf("%f", &Altura);

printf("Ingresa el valor que ocuparas para pi \n");
scanf("%f", &Pi);

Area = 2*(Pi*Radio*Altura)+2*(Pi*(Radio*Radio));
Volumen = (Pi*(Radio*Radio)*Altura);

printf("El area es de: %.2f \n", Area);
printf("El volumen es de: %.2f \n", Volumen);
}
