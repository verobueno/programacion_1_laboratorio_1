#include <stdio.h>
#include <stdlib.h>
/* lo que retorna - funcion - lo que le paso*/
/* cuando declaro una variable tengo indicar que tipo de dato es, reserva de mem de acuerdo al tipo de dato,
 no asume el dato que le paso dinamicamente como en java script*/
 /* +  solo para concatenar sumar*/
int main()
{
    /* int (%d): enteros -- float (%f) : con parte decimal -- char (%c): caracteres*/
    int numero1;
    float numero2;

    numero1 = 8 ;
    numero2 = 3.14;

    printf("El numero1 es %d y el numero 2 es %f", numero1, numero2);
    return 0;
}
