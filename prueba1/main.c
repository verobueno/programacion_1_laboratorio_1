#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /*funciones que tienen que ver con convertir cosas*/
#include <conio.h> /*esta lib la incluimos por el getche??*/

/* lo que retorna - funcion - lo que le paso*/
/* cuando declaro una variable tengo indicar que tipo de dato es, reserva de mem de acuerdo al tipo de dato,
 no asume el dato que le paso dinamicamente como en java script*/
 /* +  solo para concatenar sumar*/
 /*& solo en printf por ahora, en print muestra la dire de la var en mem*/
int main()
{
    /* int (%d): enteros -- float (%f) : con parte decimal -- char (%c): caracteres*/
    int numero1;
    float numero2;
    float suma;
    char letra;



    /*numero1 = 8 ;
    numero2 = 3.14;*/

    /*scanf - recibe dos parametros, hasta-parte literal donde represento el tipo de dato q leo con la mascara,desde &variable*/

    printf("ingrese el primer numero: ");
    scanf("%d",&numero1);
    printf("ingrese el segundo numero: ");
    scanf("%f", &numero2);

    printf("ingrese una letra: ");

    letra= toupper(getche());
    //letra= tolower(letra);

    /*antes de leer un caracter (scanf) vaciamos buffer
    fflush(stdin);
    scanf(" %c",&letra);*/

    suma=numero1+numero2;


    printf("\nEl numero1 es %d y el numero 2 es %.2f y la suma de ambos es %.2f\n", numero1, numero2, suma); /*cuando quiero mostrar solo dos decimales post coma en la mascara pongo %.Xf*/
    printf("la suma de numero1 y numero2 es : %f\n", suma);
    printf("la letra ingresada es: %c\n", letra);

   return 0;
}


/*comentario*/
