#include <stdio.h>
#include <stdlib.h>
// no es constante, es directiva del precompilador, antes de compilar busca
// las ref de TAM y las reemplaza por el valor que asigne
#define TAM 5
//ventaja -- acceso de datos en mem ram
//desventaja -- array finito (datos en mem ram que se borran cuando salgo) y mismo
//tipo de datos

int main()
{
    int vector[TAM];
    int i;
    int maximo;

    for (i=0; i<TAM; i++)
    {
        printf("Ingrese un numero:");
        scanf("%d",&vector[i]);
    }
    //Listado en orden de carga
    printf("listado en orden de carga\n");
    for (i=0; i<TAM; i++)
    {
        printf("%d\n", vector[i]);
    }
    //Imprimo Listado inverso
    //OJO que el tamaño del vector es el numero de elementos -1 y que debe incluir 0
    printf("listado inverso\n");
    for (i=TAM-1; i>=0; i--)
    {
        printf("%d\n", vector[i]);
    }

    //Listado de numeros pares
    printf("listado de nros pares\n");
    for (i=0; i<TAM; i++)
    {
        if ( vector[i]%2== 0)
        {
             printf("%d\n", vector[i]);
        }
    }

    maximo=vector[0];
    // i=1 porque el 1er valor del vector no lo voy a evaluar porque obviamente van a ser iguales.
    for (i=1; i<TAM; i++)
    {
        if ( vector[i]>maximo )
        {
            maximo=vector[i];
        }
    }

    printf("el maximo es %d\n", maximo);

   //imprimo las posiciones
    for (i=0; i<TAM; i++)
    {
        if ( vector[i]== maximo )
        {
            //ojo que el vector inicializa en 0 la posicion va mas 1
            printf("posiciones de maximos:%d\n ",i+1);
        }
    }



    return 0;
}
