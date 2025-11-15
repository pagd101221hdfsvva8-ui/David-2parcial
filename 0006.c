#include<stdio.h>
main(){
int AN;
int AA;
int Edad;

printf("Ingresa tu ano de nacimiento \n");
scanf("%d", &AN);

printf("Ingresa el ano actual \n");
scanf("%d", &AA);

Edad = (AA-AN);

printf("Tu edad es de: %d", Edad);
}
