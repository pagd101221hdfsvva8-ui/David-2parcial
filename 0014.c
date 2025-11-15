#include<stdio.h>
main(){
float N1;
float N2;
float N3;
float Resultado;

printf("Ingresa el primer numero \n");
scanf("%f", &N1);

printf("Ingresa el segundo numero \n");
scanf("%f", &N2);

printf("Ingresael tercer numero \n");
scanf("%f", &N3);

Resultado = N1*N2*N3;

printf("El resultado es: %.2f", Resultado);
}
