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
    eUsuario listadoDeTresUsuarios[TAMANIO];
    eUsuarioSerie listadoUsuariosYSeries[9];
    int i;
    int j;
    int k;


    CrearListadoSeries(listadoSeries,5);
    CrearListadoDeTresUsuarios(listadoDeTresUsuarios,3);
    CrearListadoUsuariosYSeries(listadoUsuariosYSeries);
/* pasar a funcion
    for(i=0; i<TAMANIO; i++)
    {
        printf("Titulo: %s\n",listadoSeries[i].nombre);
        printf("Id Serie: %d\n",listadoSeries[i].idSerie);
        printf("genero: %s\n\n",listadoSeries[i].genero);
    }
*/
/*
    for(j=0; j<3; j++)
    {
        printf("Nombre: %s\n",listadoDeTresUsuarios[j].nombre);
    }
*/

    //Los datos de la serie que ve cada usuario
    //recorro el vector de usuarios
    printf("\nListado de series por usuario\n");
    for(i=0; i<3; i++)
    {
        printf("\n%s\n",listadoDeTresUsuarios[i].nombre);
        // que pelicula pertenece el usuario que encontre en el 1er for
        for (j=0; j<9; j++)
        {
            if ( listadoDeTresUsuarios[i].idUsuario == listadoUsuariosYSeries[j].idUsuario )
            {
                //encuentro el nombre de la pelicula
                for(k=0; k<5; k++)
                {
                    if( listadoUsuariosYSeries[j].idSerie == listadoSeries[k].idSerie)
                    {
                        printf("\t%.40s %.20s %i\n",listadoSeries[k].nombre,listadoSeries[k].genero, listadoSeries[k].idSerie);
                        break;
                    }
                }

            }
        }
    }

        //2.Por cada serie los usuarios que la ven
        //recorro el vector de usuarios
        printf("\nListado de usuarios por serie\n");
        for(i=0; i<5; i++)
        {
            printf("%s\n",listadoSeries[i].nombre);
            //
            for (j=0; j<9; j++)
            {
                if ( listadoUsuariosYSeries[j].idSerie == listadoSeries[i].idSerie )
                {

                    for(k=0; k<3; k++)
                    {
                        if( listadoUsuariosYSeries[j].idUsuario == listadoDeTresUsuarios[k].idUsuario)
                        {
                            printf("\t%s \n",listadoDeTresUsuarios[k].nombre);
                            break;
                        }
                    }

                }
            }
        }









        return 0;
}
