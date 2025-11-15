#include <stdio.h>

// Este programa recibe un número y determina si es menor o mayor que cero utilizando una condición if–else.

main()
{
    float valorNum;

    printf("Ingresa un numero \n");
    scanf("%f", &valorNum);

    if(valorNum < 0)
    {
        printf("El numero es menor a 0 \n");
    }
    else
    {
        printf("El numero es mayor a 0 \n");
    }
}

