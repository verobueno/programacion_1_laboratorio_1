#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"


/*tipos de funciones
nodevuelve func (norecibe) = NULAS evitar
nodevuelve func (recibe)
devuelve func (norecibe)
devuelve func (recibe) -- optimo
No es buena práctica el uso de variables globales*/
/*cuando prototipo no hace falta pasar el nombre del parametro*/
/*vector-coleccion de elementos, por ahora uso  para pasar un string una coleccion
de chars y lo declarlo tipo char []*/

/*int PedirNumero(char [], int, int);
/** \brief devuelve un numero entero ingresado por el usuario
*\param texto a mostrar
*\param valor minimo del intervalo para validar
*\param valor maximo del intervalo para validar
*\return el numero ingresado
*
*/
int validarentero(int,int,int);
/*int Incrementar (int);*/
/*TAREA PARA EL HOGAR HACER LO MISMO CON FLOAT, CHAR Y DOBLE
PEDIR UN DATO VALIDARLO*/

/*FACTORIAL: valor que obtengo de multiplicar un numero por sus antecesores ej:5!=5.4.3.2.1=120*/


int main()
{
    int Edad;
    /*int resultado;*/
    int Legajo;
    int Nota;

    Edad=PedirNumero("Ingrese edad", 18, 60);
    Legajo=PedirNumero("\nIngrese legajo\n", 1, 1500);
    Nota=PedirNumero("Ingrese Nota ", 1, 10);

    /*printf("\n El numero ingresado es %d\n",Number);*/




    return 0;
}



/*int Incrementar (int numero)
{
    //int numero;
    numero=numero+2;

    return numero;

}
*/
/*pasaje por valor: cada variable en este prog es local a cada funcion, en este caso
se crea una copia en mem del valor de la variable que paso como parametro

resultado=Incrementar(Number);
    printf("El numero ingresado es %d, incrementado es %d", Number, resultado);*/
