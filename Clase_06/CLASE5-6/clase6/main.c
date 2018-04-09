#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//cuando trabajamos con cadenas el ultimo elemento del vector indica el fin de la cadena
// el \0 lo ingresa con el enter automaticamente.

//la dir de mem de vector es = a la posicion 0,
// no es necesario poner el & delante en el scanf, solo se pone el nombre del vector
// estoy tratando el vector como una cadena
//strlen, strcmp, strcopy, stricmp, strcpy funciones para char
//las cadenas se pueden incializar por extension
int main()
{
    char palabra[100]="chau";
    char palabra2[100]="hola";
    int cantidad;
    int cantidad2;
    int resultado;
    //char palabra;


       // printf ("Ingrese una palabra: ");
        //fflush(stdin);

        //gets(palabra);//al get le paso un array de char, esta funcion sabe que le paso un char, le paso la dir de mem en dond eescribir palabra
        //funcion que nos permite contar la cantidad de caracteres de la cadena
        //scanf("%s", palabra);
        //printf ("Ingrese otra palabra: ");
        //fflush(stdin);
        //gets(palabra2);//al get le paso un array de char, esta funcion sabe que le paso un char, le paso la dir de mem en dond eescribir palabra
        //funcion que nos permite contar la cantidad de caracteres de la cadena


        cantidad=strlen(palabra); //podemos usarla para validar el tamaño de la cadena y si se desborda pedir reingreso.
        cantidad2=strlen(palabra2);

        //printf("la palabra es: %s y tiene %d caracteres", palabra, cantidad);
        //printf("la palabra2 es: %s y tiene %d caracteres", palabra2, cantidad2);

        resultado=strcmp(palabra, palabra2);//compara cadenas
        printf("el resultado de la comparacion es %d\n", resultado);


        //strcp("destino", "origen");  mismo sentido que la asignacion
        //strcpy(palabra, palabra2);
       // printf("la palabra es %s", palabra);

        //recibe dos punteros a char, lo que pasamos como 2do parametro se concatena al 1er parame
        strcat(palabra2, palabra);
        //puts sirve para mostrar un string sin formato
        puts(palabra2);




    return 0;
}


//Actividad para mañana 10/04
//Ingresar en una variable el nombre de una personal nombre='juan'
// otra variable el apellido apellido='gomez'
// en una tercer variable que se guarde apellidoynombre= 'Gomez, Juan'
// la 1er letra de cada palabra tiene que estar en mayuscula
// las variables nombre y apellido no se tocan
//considerar - funcion strlwr y strupr
