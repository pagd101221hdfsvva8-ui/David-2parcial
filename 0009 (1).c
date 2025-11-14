#include<stdio.h>
main(){
float Cateto1;
float Cateto2;
float Hipotenusa;

printf("Ingresa el valor del cateto 1 \n");
scanf("%f", &Cateto1);

printf("Ingresa el valor del cateto 2 \n");
scanf("%f", &Cateto2);

Hipotenusa =  sqrt((Cateto1*Cateto1)+(Cateto2*Cateto2));

printf("La hipotenusa es: %.2f \n", Hipotenusa);
}
