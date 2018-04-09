#include <stdio.h>
#include <stdlib.h>
//swap de posiciones en vector
//Burbujeo, comparando elemento a elemento con el resto de los valores, uso una var auxiliar
#define TAM 4
int main()
{
    int i;
    int j;
    int aux;

    int vector[5]={5,6,-3,9,4};

    //Recorre desde el 1er elemento hasta el penultimo elemento
    for (i=0; i< TAM; i++);
    {


        // recorre desde el 2do elemento hasta el ultimo
        for(j=i+1; j< TAM; i++);
        {
           if ( vector[i] > vector [j]) //ordeno de menor a mayor (i > j)
           {
               aux=vector[i];
               vector[i]=vector[j];
               vector[j]=aux;

           }
        }
    }


    return 0;
}
