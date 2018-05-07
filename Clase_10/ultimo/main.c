#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int tam_prog = 100;
int tam_proy = 1000;
int tam_rel = 10000;

typedef struct
{
    int idProyecto;
    char nombreProyecto[50];
}eProyecto;

typedef struct
{
    int idProgramador;
    int idProyecto;
    int cant_horas;
}eRelacion;

typedef struct{
    int idProgramador;
    char nombre[50];
    char apellido[50];
    int idCategoria;
}eProgramador;

typedef struct{
    int idCategoria;
    char descCategoria[50];
    float valorHora;
}eCategoria;

void MostrarMenu(void)
{
    system("cls");
    printf("1. Alta de Programador\n");
    printf("2. Modificar Datos del Programador\n");
    printf("3. Baja de Programador\n");
    printf("4. Asignar Programador a Proyecto\n");
    printf("5. Listado de Programadores\n");
    printf("6. Listado de Todos los Proyectos\n");
    printf("7. Lista de Proyectos por Programador\n");
    printf("8. Proyecto Demandante\n\n");
    printf("9. Salir\n");

    printf("\n\n Ingrese Opcion: ");

}

void CrearListaProyecto(eProyecto Proyecto[])
{
    int i;
    for(i=0;i<10;i++)
    {
        Proyecto[i].idProyecto=i+100;
    }
    strcpy(Proyecto[0].nombreProyecto, "Gerflix 2.0");
    strcpy(Proyecto[1].nombreProyecto,"Obra Social");
    strcpy(Proyecto[2].nombreProyecto,"Super Jubilado");
    strcpy(Proyecto[3].nombreProyecto,"Androide 2.0");
    strcpy(Proyecto[4].nombreProyecto, "DibujoAnimado");
    strcpy(Proyecto[5].nombreProyecto,"MenuOpciones");
    strcpy(Proyecto[6].nombreProyecto,"Sonic 3.0");
    strcpy(Proyecto[7].nombreProyecto,"Androide 2.0");
    strcpy(Proyecto[8].nombreProyecto, "GRAFIP");
    strcpy(Proyecto[9].nombreProyecto,"Rentas");
}

void mostrarProyecto(eProyecto Proyecto)
{
        // impreme los datos de un proyecto
        printf("\n Id del Proyecto: %d", Proyecto.idProyecto);
        printf("\n Nombre: %s", Proyecto.nombreProyecto);
        printf("\n");
}


void mostrarProyectos(eProyecto Proyecto[], int tam_proy)
{
    int i;
    for (i = 0; i < tam_proy; i ++)
    {
        if ( Proyecto[i].idProyecto!= 0)
        {
              mostrarProyecto(Proyecto[i]);
        }
    }
    system("pause");
}



int buscaEspLibreProy(eProyecto Proyecto[], int tam_proy)
{
    int index=-1;
    int i;
    for ( i=0; i<tam_proy; i++)
    {
        if (Proyecto[i].idProyecto == 0 )
        {
            index=i;
            break;
        }
    }
    return index;
}


/*void AltaProyecto(eProyecto Proyecto[])
{
    //int espLibre;
    int index;
    //1ro busco espacio libre
    index=buscaEspLibreProy(Proyecto);
    //valido si hay espacio libre
    if (index == -1 )
    {
        printf("No se puede cargar proyecto - espacio no disponible ");
    }
    else //hay espacio libre, ingreso programador
    {
        printf("Ingrese id de Proyecto: ");
        scanf("%d",&Proyecto[index].idProyecto);
        printf("Ingrese Nombre: ");
        fflush(stdin);
        gets(Proyecto[index].nombre);
    }
}
*/

/*void MostrarSusSeries(eSerie lSeries[],eUsuarioSerie lUsuarioSerie[], eUsuario lUsuarios[])
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
}*/
void CrearListaCat(eCategoria Categoria[],int nro)
{

        Categoria[0].idCategoria=1;
        strcpy(Categoria[0].descCategoria,"Junior");
        Categoria[0].valorHora=100;

        Categoria[1].idCategoria=2;
        strcpy(Categoria[1].descCategoria,"Semi-senior");
        Categoria[1].valorHora=200;

        Categoria[2].idCategoria=3;
        strcpy(Categoria[2].descCategoria,"Senior");
        Categoria[2].valorHora=300;

}

void CrearListaProg(eProgramador Programador[])
{
   // int i;
    //for(i=0;i<10;i++)
    //{
       // Programador[i].idProgramador=i;

   // }
        strcpy(Programador[0].nombre, "Juan");
        strcpy(Programador[0].apellido, "Lopez");
        Programador[0].idCategoria=1;
        Programador[0].idProgramador=9;

        strcpy(Programador[1].nombre, "Martin");
        strcpy(Programador[1].apellido, "Lazo");
        Programador[1].idCategoria=2;
        Programador[1].idProgramador=3;

        strcpy(Programador[2].nombre, "Erno");
        strcpy(Programador[2].apellido, "Gonzalez");
        Programador[2].idCategoria=3;
        Programador[2].idProgramador=14;


        strcpy(Programador[3].nombre, "Laura");
        strcpy(Programador[3].apellido, "Lani");
        Programador[3].idCategoria=3;
        Programador[3].idProgramador=1;

        strcpy(Programador[4].nombre, "Dolores");
        strcpy(Programador[4].apellido, "Leuco");
        Programador[4].idCategoria=1;
        Programador[4].idProgramador=17;

        strcpy(Programador[5].nombre, "Gala");
        strcpy(Programador[5].apellido, "Maura");
        Programador[5].idCategoria=1;
        Programador[5].idProgramador=10;

        strcpy(Programador[6].nombre, "Lan");
        strcpy(Programador[6].apellido, "Lalo");
        Programador[6].idCategoria=1;
        Programador[6].idProgramador=15;

        strcpy(Programador[7].nombre, "Lalo");
        strcpy(Programador[7].apellido, "Lamda");
        Programador[7].idCategoria=3;
        Programador[7].idProgramador=13;


        strcpy(Programador[8].nombre, "Sara");
        strcpy(Programador[8].apellido, "Buscani");
        Programador[8].idCategoria=3;
        Programador[8].idProgramador=29;

        strcpy(Programador[9].nombre, "Max");
        strcpy(Programador[9].apellido, "Powell");
        Programador[9].idCategoria=2;
        Programador[9].idProgramador=22;

}

void inicializarProgramador(eProgramador Programador[],int tam)
{
    int i;
    for(i=0; i<tam ; i++)
    {
        Programador[i].idProgramador=0;
    }

}

int buscaEspLibre(eProgramador Programador[],int tam)
{
    int index=-1;
    int i;

    for ( i=0; i<tam; i++)
    {
        if (Programador[i].idProgramador == 0 )
        {
            index=i;
            break;
        }
    }
    return index;

}

void AltaProgramador(eProgramador Programador[], int tam_prog)
{
    //int espLibre;
    int index;
    //1ro busco espacio libre
    index=buscaEspLibre(Programador, tam_prog);
    //valido si hay espacio libre
    if (index == -1 )
    {
        printf("No se puede cargar programador - espacio no disponible ");

    }
    else //hay espacio libre, ingreso programador
    {
        printf("Ingrese idProgramador: ");
        scanf("%d",&Programador[index].idProgramador);
        //validaIngresoNumero(Programador[index].idProgramador);

        printf("Ingrese Nombre: ");
        fflush(stdin);
        gets(Programador[index].nombre);

        printf("Ingrese Apellido: ");
        fflush(stdin);
        gets(Programador[index].apellido);

        printf("Ingrese Categoria (1-jr, 2- semisenior, 3-Senior): ");
        scanf("%d",&Programador[index].idCategoria);

    }
    ordenarProgramadores(Programador,tam_prog);
}


void mostrarProgramador(eProgramador Programador)
{

        // impreme los datos de una persona
        printf("\n 1. Id del Programador: %d",Programador.idProgramador);
        printf("\n 2. Nombre: %s",Programador.nombre);
        printf("\n 3. Apellido: %s",Programador.apellido);
        printf("\n 4. Categoria: %d",Programador.idCategoria);
        printf("\n");
}
void ordenarProgramadores(eProgramador Programador[], int tam_prog)
{

    int i;
    int j;
    eProgramador aux;             //Variable temporal.

    for (i=0;  i< tam_prog-1 ;i++)
    {
           for (j=i+1; j < tam_prog ;j++)
           {
              if ( Programador[j].idProgramador < Programador[i].idProgramador )
              {
                aux.idProgramador=Programador[i].idProgramador;
                Programador[i].idProgramador=Programador[j].idProgramador;
                Programador[j].idProgramador=aux.idProgramador;

                aux.idCategoria=Programador[i].idCategoria;
                Programador[i].idCategoria=Programador[j].idCategoria;
                Programador[j].idCategoria=aux.idCategoria;

                strcpy(aux.nombre,Programador[i].nombre);
                strcpy(Programador[i].nombre,Programador[j].nombre);
                strcpy(Programador[j].nombre, aux.nombre);

                strcpy(aux.apellido,Programador[i].apellido);
                strcpy(Programador[i].apellido,Programador[j].apellido);
                strcpy(Programador[j].apellido, aux.apellido);
              }
           }
    }
}

void mostrarProgramadores(eProgramador Programador[], int tam_prog)
{
    int i;
    for (i = 0; i < tam_prog; i++)
    {
        if (Programador[i].idProgramador != 0)
        {
              mostrarProgramador(Programador[i]);

        }
    }
    system("pause");
}

int buscarProgramador(eProgramador Programador[], int tam_prog, int id)
{
    int i;
    int posicion=-1;

    for (i=0; i<tam_prog; i++)
    {
        if ( Programador[i].idProgramador == id )
        {
            posicion=i;
            break;
        }

    }

    return posicion;
}

void modificarDatosProgramador(eProgramador Programador[], int tam_prog, int id)
{
    char aux[50];
    int posicion;

    posicion=buscarProgramador(Programador,tam_prog, id);
    if ( posicion == -1)
    {
        printf("No existe el Id Ingresado\n");
    }
    else
    {
        //Imprime nombre actual si lo quiere modificar lo ingresa sino sigue valiendo lo mismo
        printf("Nombre (%s): ", Programador[posicion].nombre);
        fflush(stdin);
        gets(aux);
        if (strcmp(aux,"") != 0 )
        {
            strcpy(Programador[posicion].nombre, aux);
        }

        //Imprime apellido actual si lo quiere modificar lo ingresa sino sigue valiendo lo mismo
        printf("Apellido (%s): ", Programador[posicion].apellido);
        fflush(stdin);
        gets(aux);
        if (strcmp(aux,"") != 0 )
        {
            strcpy(Programador[posicion].apellido,aux);
        }

        printf("Ingrese Categoria 1-jr, 2- semisenior, 3-Senior (%d): ", Programador[posicion].idCategoria);
        scanf("%d",&Programador[posicion].idCategoria);

    }

}

void eliminarProgramador(eProgramador Programador[],int tam_prog, eRelacion Relacion[], int tam_rel, int id)
{
    int posicion;
    char opcion;
    int i;

    posicion=buscarProgramador(Programador,tam_prog,id);

    if ( posicion == -1)
    {
        printf("No existe el Id Ingresado\n");
        system("pause");
    }
    else
    {
        printf("Esta seguro que desea eliminar el usuario %d (s/n): ", id);
        opcion=getch();
        if ( opcion == 's')
        {
             Programador[posicion].idProgramador=0;
             for( i = 0; i < tam_rel; i ++)
             {
                 if( id == Relacion[i].idProgramador )
                 {
                     Relacion[i].idProgramador = 0;
                 }
             }

        }
    }
}

void inicializarRelacion(eRelacion Relacion[],int tam)
{
    int i;
    for(i=0; i<tam ; i++)
    {
        Relacion[i].idProgramador=0;
    }

}

int buscaEspLibreRelacion(eRelacion Relacion[], int tam)
{
    int index=-1;
    int i;

    for ( i=0; i<tam; i++)
    {
        if (Relacion[i].idProgramador == 0 )
        {
            index=i;
            break;
        }
    }
    return index;
}

void asignar(eRelacion Relacion[], int tam_rel, int id_prog, int id_proy, int horas)
{
    int i = 0;
    int existe = 0;
    int index;
    // Me fijo si no existe ya la relacion y de ser asi, asigno la cantidad de horas
    for(i = 0; i < tam_rel; i++)
    {
        if (Relacion[i].idProgramador == id_prog && Relacion[i].idProyecto == id_proy)
        {
            printf("La relacion ya existe. Se asignan %d horas\n", horas);
            Relacion[i].cant_horas = horas;
            existe = 1;
            break;
        }
    }

    // Si NO existe, busca un lugar vacio en el vector de relaciones y crea la relacion
    if (existe == 0)
    {
        index = buscaEspLibreRelacion(Relacion, tam_rel);
        Relacion[index].idProgramador = id_prog;
        Relacion[index].idProyecto = id_proy;
        Relacion[index].cant_horas = horas;
        printf("Se genero una nueva relacion: %d %d %d\n", id_prog, id_proy, horas);
    }
    system("pause");
}

void listarProydeProg(eRelacion Relacion[],int tam_rel, eProyecto Proyecto[],int tam_proy, eProgramador Programador[],int tam_prog, int id_prog)
{
    int pos;
    int i;
    int j;
    // busco la posicion de
    pos=buscarProgramador(Programador,tam_prog,id_prog);

    printf("%s %s: \n", Programador[pos].nombre, Programador[pos].apellido);

    for (i=0; i < tam_rel; i++ )
    {
        if(  Relacion[i].idProgramador == id_prog )
        {
            for(j=0; j<tam_proy; j++)
            {
                if ( Relacion[i].idProyecto == Proyecto[j].idProyecto )
                {
                    printf("\t%s\n", Proyecto[j].nombreProyecto);
                }
            }
        }
    }
    system("pause");

}



int main()
{
    int opcion=0;
    char seguir='s';
    int id;
    int id_prog;
    int id_proy;
    int horas;

    eProgramador Programador[tam_prog];
    eProyecto   Proyecto[tam_proy];
    eRelacion   Relacion[tam_rel];

    inicializarProgramador(Programador, tam_prog);
    CrearListaProg(Programador);
    ordenarProgramadores(Programador,tam_prog);
    CrearListaProyecto(Proyecto);

    do
    {
        MostrarMenu();
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            // Alta de programador
            AltaProgramador(Programador, tam_prog);
            break;

        case 2:
            printf("Ingrese id del Programador: ");
            scanf("%d",&id);
            modificarDatosProgramador(Programador, tam_prog, id);
            break;

        case 3:
            printf("Ingrese id del Programador que desea eliminar: ");
            scanf("%d",&id);
            eliminarProgramador(Programador, tam_prog, Relacion, tam_rel, id);
            system("pause");
            break;

        case 4:
            printf("Ingrese Id de Programador: ");
            scanf("%d",&id_prog);

            printf("Ingrese el id del proyecto: ");
            scanf("%d",&id_proy);
                 /*  if (buscarProgramador(id_prog) == -1)
                    {
                        printf("No existe el Programador con ID: %d\n", id_prog);
                    }
                    else if (buscarProyecto(id_proy) == -1)
                    {
                        printf("No existe el Proyecto con ID: %d\n", id_proy);
                    }*/
            printf("Ingrese la cantidad de horas a asignar: ");
            scanf("%d", &horas);
            asignar(Relacion, tam_rel, id_prog, id_proy,horas);
            break;

        case 5:
            mostrarProgramadores(Programador, tam_prog);
            system("pause");
            ordenarProgramadores(Programador, tam_prog);
            mostrarProgramadores(Programador, tam_prog);
            break;

        case 6:
            mostrarProyectos(Proyecto, tam_proy);
            break;

        case 7:
            printf("Ingrese Id de Programador: ");
            scanf("%d",&id_prog);
            listarProydeProg(Relacion, tam_rel, Proyecto, tam_proy, Programador, tam_prog, id_prog);
            break;

        case 8:
            break;

        case 9:
            seguir = 'n';
            break;
        }
    }
    while( seguir !='n');

    return 0;
}
