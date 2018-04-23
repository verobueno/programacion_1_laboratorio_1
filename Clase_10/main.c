#include <stdio.h>
#include <stdlib.h>
#define TAM 100

typedef struct
{
    //campos o atributos se definen igual que las variables
    int id;
    char titulo[30]; //aca solo va al largo de la cadena, no como en string que va matrix, ver
    int temporada;
    int lanzamiento;
}eSeries;

typedef struct
{
    int idUsuario;
    char mail[20];
    char passwd[8];
    int idSerie;

}eUsuarios;

void inicializarListas(eSeries[], eUsuarios[]);
int MenuDeOpciones (void);
void altaSerie(eSeries[]);
void bajaSerie(eSeries listaSeries[]);
void modifSerie(eSeries listaSeries[]);


int main()
{
    int opcion;
    eSeries listaSeries[TAM];
    eUsuarios listaUsuarios[TAM];

    inicializarListas(listaSeries, listaUsuarios);

    do
    {
        opcion=MenuDeOpciones();
        switch(opcion)
        {
            case 1:
            altaSerie(listaSeries);

            break;
            case 2:
            bajaSerie(listaSeries);

            break;
            case 3:
            modifSerie(listaSeries);
            break;

        }

    }while ( opcion != 8 );

   return 0;
}


void inicializarListas(eSeries listaSeries[], eUsuarios listaUsuarios[])
{
    int i;

    for (i=0; i<TAM; i++)
    {
        listaSeries[i].id=-1;
        listaUsuarios[i].idUsuario=-1;
    }
}
int MenuDeOpciones(void)
{
    int opcion;
    printf(" 1. Alta Series \n 2. Baja Series \n 3. Modificacion Series\n 4. Alta Usuario\n 5. Baja usuario\n 6. Modificacion usuario \n 7. Consultas \n 8. Salir\n");
    scanf("%d",&opcion);

    return opcion;
}
void altaSerie(eSeries listaSeries[])
{
       int i;
       int j;
       int flag;
       int idAux;

       // busco lugar para ingresar datos, cuando lo encuentra SE que i es la posicion que estoy buscando
       for(i=0; i<TAM; i++)
       {
           if ( listaSeries[i].id == -1 )
           {
               break;
           }
       }

       // Valido si hay espacio disponible para cargar el dato
        if ( i == TAM )
        {
            printf("No hay espacio disponible");
        }
        else
        {
            // verifico que no este repetido el id
                printf("Ingrese Id: ");
                scanf("%d",& idAux);
                flag=0;

                for(j=0; j<TAM;j++)
                {
                    if( idAux ==listaSeries[j].id )
                    {
                        printf("Id Existente \n");
                        flag=1;
                        system("pause");
                        system("cls");
                        break;

                    }
                }
            if (flag == 0 )
            {

                // el ID no esta repetido
                listaSeries[i].id = idAux;

                printf("Ingrese titulo:");
                fflush(stdin);
                gets(listaSeries[i].titulo);

                printf("Ingrese temporada: ");
                scanf("%d",&listaSeries[i].temporada);

                printf("Ingrese fecha Lanzamiento MMAAA: ");
                scanf("%d",&listaSeries[i].lanzamiento);

            }

        }

}

void bajaSerie(eSeries listaSeries[])
{
       int i;
       int idbaja;

        printf("Ingrese Id de la serie a borrar: ");
        scanf("%d",&idbaja);

       for(i=0; i<TAM; i++)
       {
           if ( listaSeries[i].id == idbaja )
           {
               listaSeries[i].id = -1;
               break;
           }
       }
}

void modifSerie(eSeries listaSeries[])
{
    int i;
    int flag;
    int idAux;

    do
    {
                printf("Ingrese Id a Modificar: ");
                scanf("%d", &idAux);
                flag=0;

                for(i=0; i<TAM;i++)
                {
                    if( idAux ==listaSeries[i].id )
                    {
                        printf("Ingrese los nuevos datos\n");
                        printf("Titulo: ");
                        fflush(stdin);
                        gets(listaSeries[i].titulo);
                        printf("Temporada: ");
                        scanf("%d",&listaSeries[i].temporada);
                        printf("Fecha lanzamiento MMAA: ");
                        scanf("%d",&listaSeries[i].lanzamiento);
                        flag=1;
                        break;

                    }
                }
                if (flag == 0)
                    printf ("No existe ese ID\n");
     } while (flag == 0 );

}
