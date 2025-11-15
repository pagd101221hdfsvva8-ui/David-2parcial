#include<stdio.h>

/*
   Para clasificar el triángulo primero se verifica que sea válido:
   la suma de dos lados siempre debe ser mayor que el tercero.
   Si es válido:
      - Si los tres lados son iguales → triángulo equilátero.
      - Si solo dos lados son iguales → triángulo isósceles.
      - Si ninguno de los lados es igual → triángulo escaleno.
   (En el código original la condición del escaleno está fuera,
    por lo que solo se muestra cuando NO es un triángulo válido.)
*/

main(){
    float Lado1;
    float Lado2;
    float Lado3;

    printf("Ingresa la longitud del primer lado \n");
    scanf("%f", &Lado1);

    printf("Ingresa la longitud del segundo lado \n");
    scanf("%f", &Lado2);

    printf("Ingresa la longitud del tercer lado \n");
    scanf("%f", &Lado3);

    if(Lado1+Lado2 > Lado3 && Lado1+Lado3 > Lado2 && Lado2+Lado3 > Lado1){
        if(Lado1 == Lado2 && Lado2 == Lado3){
            printf("El triangulo es equilatero");
        }
        else if(Lado1 == Lado2 || Lado1 == Lado3 || Lado2 == Lado3){
            printf("El triangulo es isosceles");
        }
    }
    else{
        printf("El triangulo es escaleno");
    }

