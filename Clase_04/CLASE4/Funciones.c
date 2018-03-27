#include <stdio.h>
#include "Funciones.h"



int PedirNumero(char texto[],int min, int max)
{
    int numero;

    printf("%s",texto);
    scanf("%d",&numero);
    numero=validarentero(numero,min,max);
    return numero;
}

int validarentero(int numero, int min, int max)
{

    while( numero< min || numero > max)
    {
        printf("Error, reingrese:");
        scanf("%d",&numero);
    }
    /*si paso constantes entonces el programa solo evalua en base a esos valores absoluto*/
    return numero;
}
