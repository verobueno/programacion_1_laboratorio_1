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


void MostrarSusSeries(eSerie[],eUsuarioSerie[], eUsuario[] );
//funcion que muestra las series que ve cada usuario
// recibe la lista de series, la lista de la relacion de usuarios y series y la lista de usuarios
//Imprime el nombre de usuario y la lista de series que ve
void MostrarSusUsuarios(eSerie[],eUsuarioSerie[], eUsuario[] );
int main()
{
    printf("Veronica Bueno\n");

    eSerie listadoSeries[TAMANIO];
    eUsuario listadoDeTresUsuarios[TAMANIO];
    eUsuarioSerie listadoUsuariosYSeries[9];


    CrearListadoSeries(listadoSeries,5);
    CrearListadoDeTresUsuarios(listadoDeTresUsuarios,3);
    CrearListadoUsuariosYSeries(listadoUsuariosYSeries);

    MostrarSusSeries(listadoSeries,listadoUsuariosYSeries,listadoDeTresUsuarios);
    MostrarSusUsuarios(listadoSeries,listadoUsuariosYSeries,listadoDeTresUsuarios);
    //2.Por cada serie los usuarios que la ven
    //recorro el vector de usuarios




    return 0;
}

void MostrarSusSeries(eSerie lSeries[],eUsuarioSerie lUsuarioSerie[], eUsuario lUsuarios[])
{
    int i;
    int j;
    int k;


    //Los datos de la serie que ve cada usuario
    //recorro el vector de usuarios
    printf("\nListado de series por usuario\n");
    for(i=0; i<3; i++)
    {
        printf("\n%s\n",lUsuarios[i].nombre);
        // que pelicula pertenece el usuario que encontre en el 1er for
        for (j=0; j<9; j++)
        {
            if ( lUsuarios[i].idUsuario == lUsuarioSerie[j].idUsuario )
            {
                //encuentro el nombre de la pelicula
                for(k=0; k<5; k++)
                {
                    if( lUsuarioSerie[j].idSerie == lSeries[k].idSerie)
                    {
                        printf("\t%.40s %.20s %i\n",lSeries[k].nombre,lSeries[k].genero, lSeries[k].idSerie);
                        break;
                    }
                }

            }
        }
    }
}
void MostrarSusUsuarios(eSerie lSeries[],eUsuarioSerie lUsuarioSerie[], eUsuario lUsuarios[])
{

    int i;
    int j;
    int k;

    printf("\nListado de usuarios por serie\n");

    for(i=0; i<5; i++)
    {
        printf("%s\n",lSeries[i].nombre);
        //
        for (j=0; j<9; j++)
        {
            if ( lUsuarioSerie[j].idSerie == lSeries[i].idSerie )
            {

                for(k=0; k<3; k++)
                {
                    if( lUsuarioSerie[j].idUsuario == lUsuarios[k].idUsuario)
                    {
                        printf("\t%s \n",lUsuarios[k].nombre);
                        break;
                    }
                }

            }
        }
    }

}
