#include<stdio.h>

/*
   El programa pide dos números, los suma,
   muestra el resultado y usa un if para indicar
   si la suma es mayor o menor a 0.
*/

main()
{
    float Numero1;
    float Numero2;
    float Resultado;

    printf("Ingresa el primer numero \n");
    scanf("%f", &Numero1);

    printf("Ingresa el segundo numero \n");
    scanf("%f", &Numero2);

    Resultado = Numero1 + Numero2;

    printf("El resultado de la suma es: %.2f \n", Resultado);

    if(Resultado > 0)
    {
        printf("La suma es mayor a 0 \n");
    }
    else
    {
        printf("La suma es menor o igual a 0 \n");
    }
}

