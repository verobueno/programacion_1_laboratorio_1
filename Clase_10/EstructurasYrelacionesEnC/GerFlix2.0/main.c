#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include "usuario.h"
#include "usuarioSerie.h"

#define TAMANIO 5

/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/
int main()
{
    printf("Veronica Bueno\n");

    eSerie listadoSeries[TAMANIO];
    CrearListadoSeries(listadoSeries,5);

    eSerie listadoDeTresUsuarios[TAMANIO];
    CrearListadoDeTresUsuarios(listadoDeTresUsuarios,3);

    int i;
    int j;


    for(i=0; i<TAMANIO; i++)
    {
        printf("\nTitulo %s\n",listadoSeries[i].nombre);
        printf("\nId Serie: %d\n",listadoSeries[i].idSerie);
        printf("\nGenero: %s\n\n",listadoSeries[i].genero);
    }

    for(j=100; j<103;j++)
    {
       printf("Nombre: %s\n",listadoDeTresUsuarios[j].nombre);
    }


    return 0;
}
