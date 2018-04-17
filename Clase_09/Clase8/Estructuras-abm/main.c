#include <stdio.h>
#include <stdlib.h>
#define TAM 2
// anidamiento de estructuras --
// de lo mas particular a lo mas general
// Ej -- abm de alumnos, abm de profesores, en ambos casos tengo domicilio por ej
//mejor ejemplo para este uso FECHAS (ej ingreso nacimiento)

typedef struct
{
    int legajo;
    char nombre[TAM][20];
    int nota1;
    int nota2;
    char email[20];
    float promedio[TAM];
}eAlumno;

int buscarLibre(eAlumno[], int);
void mostrarAlumnos(eAlumno);
float calcularPromedio(eAlumno, int);
//int cargarAlumno(int[], char[][20], int[], int[], float[], int);

int main()
{
    /*int legajo[TAM]= {};
    char nombre[TAM][20];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM]; */
    eAlumno datosAlumno[TAM];
    int opcion;
    int index;
    int i;
    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA9.\n SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            //index=cargarAlumno(eAlumno.legajo, eAlumno.nombre, eAlumno.nota1, eAlumno.nota2, eAlumno.email , eAlumno.promedio,TAM);
            index=cargarAlumno(datosAlumno,TAM);
            if(index == -1)
            {
                printf("No hay lugar");
            }
            else
            {
                printf("Alumno ingresado");
            }
            break;
        case 2:

         mostrarAlumnos(datosAlumno);




break;
        }

    }
    while(opcion!=9);




    return 0;
}

int buscarLibre(eAlumno datosAlumno.legajo[], int tam)
{
    int index=-1;
    int flag=0;
    int i;
    for(i=0; i<tam; i++)
    {
        if(legajos[i] == 0)
        {
            index = i;

            break;
        }
    }


    return index;
}

int cargarAlumno(eAlumno datosAlumno[], int tam)
{
    int index ;
    index = buscarLibre(datosAlumno.legajo, tam);
            if(index!=-1)
            {
                  printf("Ingrese legajo: ");
            scanf("%d", &eAlumno.legajo[index]);

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(eAlumno.nombre[index]);

            printf("Ingrese Nota 1: ");
            scanf("%d", &eAlumno.nota1[index]);

            printf("Ingrese Nota 2: ");
            scanf("%d", &eAlumno.nota2[index]);

            eAlumno.promedio[index] = calcularPromedio(eAlumno.nota1[index], eAlumno.nota2[index]);
            }
            return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos(eAlumno datosAlumno[], int tam)
{
    int i;
    for(i=0; i<TAM; i++)
            {
                if(eAlumno.legajo[i]!=0)
                {
                    printf("%d %s %d %d %f\n", eAlumno.legajo[i], eAlumno.nombre[i], eAlumno.nota1[i], eAlumno.nota2[i], eAlumno.promedio[i], eAlumno.email[i] );
                }

            }

}

//creo una estructura de tipo fecha
// nacimiento, ingreso
//explicacion de German
/*

*/
