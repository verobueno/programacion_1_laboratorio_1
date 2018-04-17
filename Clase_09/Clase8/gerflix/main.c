#include <stdio.h>
#include <stdlib.h>
#define cant 5

typedef struct
{
    int idUsuario;
    char email[][20];
    char password[][10];
    int estado;
}eUsuario;

typedef struct
{
    int idSerie;
    char nombre[];
    int canttemporadas;
    int lanzamiento;

}eSerie;

int main()
{
    eUsuario DatosUsuario[cant];
    eSerie DatosSerie[cant];

    return 0;
}
