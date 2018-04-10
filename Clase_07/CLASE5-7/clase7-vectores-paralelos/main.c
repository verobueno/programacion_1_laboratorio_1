#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//si manejo muchos datos de una persona tengo que manejar varios vectores
//ej: defino legajo, dos notas y el promedio (4 vectores, nota1, nota2, llegajo, promedio)
//vamos a hacer un ABM de usuarios Creamos el menu y  mostramos

// cuando pasamos una matriz necesito pasar si o si la cantidad de columnas

// OPCION 3 - modificar la nota 1
// OPCION 4 - dar de baja logica (pensarla como una modificacion.
#define TAM 2

int buscarLibre( int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    //modelo de datos para alumno
    int legajo[TAM]={};
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    int opcion;
    int index;
    //float calcularPromedio;
    int i;

    do
    {
        printf("1. Altas\n2, MOSTRAR\n9, salir\nelija una opcion");
        scanf("%d", &opcion);
        switch(opcion)
        {
           case 1:
                //index = buscarLibre(legajo, TAM); //busco si hay espacios libres para cargar
                index=cargarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
                if( index==-1)
                {
                    printf("no hay lugar disponible!!\n");
                }

                else
                {
                   printf("alumno ingresado\n");
                   //cargarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
                   /* printf("Ingrese Legajo: ");
                    scanf("%d",&legajo[index]);

                    printf("Ingrese Nombre: ");
                    fflush(stdin);
                    gets(nombre[index]);

                    printf("Ingrese Nota1: ");
                    scanf("%d",&nota1[index]);

                    printf("Ingrese Nota2: ");
                    scanf("%d",&nota2[index]);

                    promedio[index]=calcularPromedio(nota1[index],nota2[index]);*/
                }
                break;

          /* case 2:
                for (i=0; i< TAM; i ++)
                {
                    if (legajo[i]!= 0)
                    {
                         printf ("%d %s %d &d &f \n", legajo[i], nombre[i],nota1[i],nota2[i],promedio[i]);
                    }
                }
                break;
                */

           case 2:
               mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
            break;

            case 3:
            break;

        }
    }while(opcion!=9);

    return 0;
}

int buscarLibre( int legajo[], int tam)
{
    int index=-1;
    int i;

    for (i=0; i<tam; i++)
    {
          if (legajo[i] == 0 )
        {
            index =i;
            break;
        }
    }


    return index;
}

float calcularPromedio(int nota1, int nota2)
{
    float promedio;

        promedio=(float)(nota1+nota2)/2;

    return promedio;
}

void mostrarAlumnos(int legajo[], char nombre[][20], int nota1[], int nota2 [], float promedio[], int tam)
{
    int i;
    for (i=0; i< tam; i ++)
     {
          if (legajo[i]!= 0)
          {
            printf ("%d %s %d %d %f \n", legajo[i], nombre[i],nota1[i],nota2[i],promedio[i], tam);
          }
     }
}
int cargarAlumno(legajo[], nombre[][20], nota1[], nota2[], promedio[], tam)
{

    int index;
           index = buscarLibre(legajo, TAM); //busco si hay espacios libres para cargar
                if( index==-1)
                {
                    printf("no hay lugar disponible!!\n");
                }

                else
                {
                    printf("Ingrese Legajo: ");
                    scanf("%d",&legajo[index]);

                    printf("Ingrese Nombre: ");
                    fflush(stdin);
                    gets(nombre[index]);

                    printf("Ingrese Nota1: ");
                    scanf("%d",&nota1[index]);

                    printf("Ingrese Nota2: ");
                    scanf("%d",&nota2[index]);

                    promedio[index]=calcularPromedio(nota1[index],nota2[index]);
}
