#include<stdio.h>
main(){
int Numero1;
int Numero2;
int Numero3;
int Resultado;

printf("Ingresa un numero \n");
scanf("%d",&Numero1);

printf("Ingresa otro numero \n");
scanf("%d", &Numero2);

printf("Ingresa un tercer numero \n");
scanf("%d", &Numero3);

Resultado = Numero1+Numero2+Numero3;
printf("El resultado es: %d \n",Resultado);

}
