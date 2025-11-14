#include<stdio.h>
main(){
float Cal1;
float Cal2;
float Cal3;
float Cal4;
float Cal5;
float Promedio;

printf("Ingreasa la calificacion 1 \n");
scanf("%f", &Cal1);
printf("Ingreasa la calificacion 2 \n");
scanf("%f", &Cal2);
printf("Ingreasa la calificacion 3 \n");
scanf("%f", &Cal3);
printf("Ingreasa la calificacion 4 \n");
scanf("%f", &Cal4);
printf("Ingreasa la calificacion 5 \n");
scanf("%f", &Cal5);

Promedio = (Cal1+Cal2+Cal3+Cal4+Cal5)/5;

printf("Tu promedio es de: %.2f", Promedio);
}
