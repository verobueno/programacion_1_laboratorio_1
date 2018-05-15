#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int datoInt;
    char datoChar;
}eDato;


int main()
{
    eDato miDato = {1,'C'};
    eDato miDato2 ={1,'A'};

    eDato Lista[2];
    eDato* pDato =NULL;

    Lista[0]=miDato;
    Lista[1]=miDato2;
    int i;
    //eDato Lista = {1,'A'};

   //creamos variable puntero a estructura y lo igualo a NULL
   //eDato* pDato = NULL;
  // apunto pdato a mi dato, el puntero a la estructura
   //pDato =  miDato;

    // puntero apunta a lissta
   pDato = Lista;

   // muestro el dato como siempre, desde la estructura
   //printf( "desde la estructura: %d -- %c\n", miDato.datoInt, miDato.datoChar);

   // muestro el dato desde el puntero

   for (i=0; i<2; i++)
   {
        //(pDato+i) acceso al dato
        printf( "desde el puntero: %d -- %c\n", (pDato+i)->datoInt, (pDato+i)->datoChar);
   }



/* Ejemplo de OPERADOR FLECHA -- reemplaza el uso del operador de inacceso y del . - convierte la dir de memoria en el valor y acceso al cambpo
    eDato miDato = {1,'C'};
    eDato* pDato = NULL;
    // apunto el puntero a la variable miDato
    pDato = &miDato;

    printf("%d", sizeof(pDato));
    printf("%d -- %c", pDato-> datoInt, pDato-> datoChar);

*/

    return 0;
}

/** IMPORTANTE
/* Ejemplo de OPERADOR FLECHA -- reemplaza el uso del operador de inacceso y del . - convierte la dir de memoria en el valor y acceso al cambpo
    eDato miDato = {1,'C'};
    eDato* pDato = NULL;
    // apunto el puntero a la variable miDato
    pDato = &miDato;

    printf("%d", sizeof(pDato));
    printf("%d -- %c", pDato-> datoInt, pDato-> datoChar);

*/
