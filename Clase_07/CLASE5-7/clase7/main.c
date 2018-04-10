#include <stdio.h>
#include <stdlib.h>

/** \brief
*\param int []coleccion de enteros
*\param int tamaño
*\param int dato a buscar
*\return int el indice del elemento en caso de encontrarlo o -1 si no lo encuentra
*/

int buscarEntero (int[], int, int);

int main()
{

    int TAM;
    int vector[TAM]={1,3,5,6,8};
    int i;
    int index;
    int numero = 3;

    int buscarEntero(vector, TAM, numero);

        if ( index == -1)
        {
            printf("%d no se encuentra en el array\n", numero);
        }
        else
        {
            printf("%d encontrado en la posicion %d", numero, index);
        }

   return 0
}

int buscarEntero(int[], int tam, int valor)
{
    int indice=-1; //elimino el if con esto
    int i;

    for (i=0; i<tam;i++)
    {
        if (vector[i]==valor)
        {
            indice=i;
            break;
        }
    }


    return indice
}
