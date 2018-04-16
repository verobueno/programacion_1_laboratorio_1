#include <stdio.h>
#include <stdlib.h>
# define TAM 10
//octavio=

//para definir una estructura usamos palabras reservadas
//en la estructura vamos a representar todos los tipos de datos que representa la estructura
//por el momento es un template, solo la declaro, esto es como crear un nuevo tipo de dato,
// tamaño de la estr en mem es la suma de todos los datos
typedef struct
{
    //campos o atributos se definen igual que las variables
    int legajo;
    char nombre[30]; //aca solo va al largo de la cadena, no como en string que va matrix, ver
    int nota1;
    int nota2;
    float promedio;
    char email[50];

}eAlumno;//nombre, alias o sobrenombre de la estructura
//la firma de la estructura es lo que lo compone

void mostrarAlumno(eAlumno);
float calcularPromedio(int,int);
void mostrarListadoDeAlumnos(eAlumno[],int);//recibe el vector y el tipo de dato

int main()
{
    //printf("%d",sizeof (eAlumno));
    //eAlumno miAlumno; //aca defino espacio para guardar a mi alumno...
    eAlumno listadoDeAlumnos[TAM];
    int i;

    for(i=0; i>TAM; i++)
    {
        printf("Ingrese legajo:");
        scanf("%d",&listadoDeAlumnos[i].legajo);
        printf("Ingrese nombre:");
        fflush(stdin);
        gets(listadoDeAlumnos[i].nombre);

        printf("Ingrese nota1: ");
        scanf("%d",&listadoDeAlumnos[i].nota1);

        printf("Ingrese nota2: ");
        scanf("%d",&listadoDeAlumnos[i].nota2);

        printf("ingrese email:" );
        fflush(stdin);
        gets(listadoDeAlumnos[i].email);
        listadoDeAlumnos[i].promedio=calcularPromedio(listadoDeAlumnos[i].nota1, listadoDeAlumnos[i].nota2);
    }

    mostrarListadoDeAlumnos(listadoDeAlumnos,TAM);
    //guardo por extension en el mismo orden que fue definido en la struct
    //datos compuestos se inicializan por extension
    //eAlumno miAlumno={30, "Juan", 10, 6, 8,"juan@gmail.com"};
    //eAlumno otroAlumno;

    /*miAlumno.legajo = 20;
    miAlumno.nota1 = 10;
    miAlumno.nota2 =5;
    strcpy(miAlumno.nombre,"Juan");
    miAlumno.promedio=(float)(miAlumno.nota1+miAlumno.nota2)/2;
    strcpy(miAlumno.email,"alumenen@jdkdk.org.ar");

    otroAlumno=miAlumno;
    mostrarAlumno(miAlumno);
    mostrarAlumno(otroAlumno);

    printf("%p -- %p", &miAlumno, &miAlumno.legajo;);
    printf("Ingrese legajo:");
    scanf("%d",miAlumno.legajo);
    printf("Ingres nombre:");
    gets(miAlumno.nombre);
    printf("Ingrese nota1: ");
    scanf("%d",&nota1);
    printf("Ingrese nota2: ");
    scanf("%d",&nota2);

    printf("ingrese email:" miAlumno.email);
    fflush(stdin);
    gets(miAlumno.email);
*/

    return 0;
}

void mostrarListadoDeAlumnos(eAlumno lista[], int cantidad)
{
    int i;
    for(i=0;i<cantidad; i++)
    {
        mostrarAlumno(lista[i]);
    }
}
float calcularPromedio (int nota1, int nota2)
{
    float promedio;

    promedio =((float)nota1+nota2)/2;

    return promedio;
}

void mostrarAlumno(eAlumno alumnito)
{
    printf("%d %s %d %d %f", alumnito.legajo, alumnito.nombre, alumnito.nota1,alumnito.nota2, alumnito.promedio, alumnito.email);

}

