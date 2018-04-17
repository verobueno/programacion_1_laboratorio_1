#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct
{
    int dato1;
    char dato2[TAM][20];
    float dato3;

}eDatos;


void cargarDatosHardCode();
int main()
{


    return 0;
}
void cargarDatosHardCode(eDatos lista[], int cantidad)
{
    int d1[T]={1,2,3};
    char d2[T][20]=["AAA","BBB","CCC"];
    float d3[T]={1.2,3.3,3.3};
    int i;

    for (i=0;i<cantidad;i++)
    {
        lista[i].dato1=d1[i];
        strcpy(lista[i].dato2,d2[i]);
        lista[i].dato3=d3[i];
    }

}


/*
Apuntes


*/
