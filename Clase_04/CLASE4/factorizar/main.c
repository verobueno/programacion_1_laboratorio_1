#include <stdio.h>
#include <stdlib.h>
int factorial (int);

int main()
{
    int factorizado;


    return 0;
}
int factorial (int numero)
{
    int retorno;

    if (numero == 0)
    {
        retorno=1;
    }
    else
    {
        retorno = numero * factorial (numero -1);
    }
    return retorno;
}
