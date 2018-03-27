#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define MAXIMO 20
#define MINIMO 2


/******************************************************************
* Programa: Ejemplo Clase 3
*
* Objetivo:
*   -Crear una función que permita ingresar un numero al usuario y lo retorne.
*   -Crear una función que reciba el radio de un círculo y retorne su área
*   -Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule
*    el área de un círculo cuyo radio es ingresado por el usuario
*   -Documentar las funciones al estilo Doxygen
*
* *******************************************************************/
int IngresarNumero(void);
float areaCirculo(float);
float areaCirculoRango(int max, int min);

int main()
{
    int numero1;
    //int numero2;
    //float radio;
    float Area;

    numero1=IngresarNumero();
    printf("el numero ingresado es: %d", numero1);

    /*printf("Ingrese el radio de un circulo para obtener el area:");
    scanf("%f",&radio);
    OJO uso las constantes al invocar la funcion, dentro de la funcion uso variables propias de la funcion*/
    Area=areaCirculoRango(MAXIMO, MINIMO);

    printf("El area del circulo es %f", Area);

    return 0;
}

int IngresarNumero(void)
{
    int numero;
    printf("Ingrese un numero:");
    scanf("%d", &numero);

    return numero;
}

float areaCirculo(float radio)
{
    float area;

    area=PI*radio*radio;

    return area;
}
/* Creo una funcion que le pida al usuario ingresar
el radio, el mismo debe estar comprendido entre 2 y 20*/
float areaCirculoRango(int max,int min)
{
    float area;
    float radio;

    printf("Ingrese un valor entre 0 y 20 para asingar al radio:");
    scanf("%f",&radio);
    do
    {
        printf("Ingrese un valor entre 0 y 20 para asingar al radio:");
        scanf("%f",&radio);
    } while( radio  < (float)min || radio > (float)max);

    area=PI*radio*radio;

    return area;
}

