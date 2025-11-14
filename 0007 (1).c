#include<stdio.h>
main(){
float Calificacion1;
float Calificacion2;
float Calificacion3;
float Promedio;

printf("Ingresa tu primera calificacion \n");
scanf("%f", &Calificacion1);

printf("Ingresa la segunda calificacion \n");
scanf("%f", &Calificacion2);

printf("Ingresa la ultima calificacion \n");
scanf("%f", &Calificacion3);

Promedio = (Calificacion1+Calificacion2+Calificacion3)/3;

printf("Tu promedio es de: %2.f \n", Promedio);

if(Promedio>=9){
printf("Estas excento \n");
}else{
printf("Haras ordinario \n");
}
}
