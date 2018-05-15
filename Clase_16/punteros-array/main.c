#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void CargarArray(int *p);
void MostrarArrayA(int p[] );
void MostrarArrayB(int p[] );
void MostrarArrayC(int *p );
//void MostrarArrayD(int *p ); LA MODIFICIAMOS
int MostrarArrayD(int *p );
int main()
{

	int vector[TAM];
	int *p=&vector[0];

    CargarArray(p);
	//MostrarArrayA(p);
	//MostrarArrayB(p);
    //MostrarArrayC(p);

    if ( MostrarArrayD(p) )
    {
        printf("Imposible mostrar los datos");
    }

return 0;
}

void CargarArray(int *p)
{
//	int *p = &vector[0];
	int i;


	for (i=0;i<TAM;i++)
	{
		*(p+i)=TAM-i;
	}
}

//
void MostrarArrayA(int p[] )
{

	int i; //variable contadora...
    printf("Funcion 1\n");
	for (i=0;i<TAM;i++)
	{
		printf("%d\n",p[i]);
	}
}

void MostrarArrayB(int p[] )
{

	int i; //variable contadora...
    printf("\nFuncion 2\n");
	for (i=0;i<TAM;i++)
	{
		printf("%d\n",*(p+i)); // mas i me lleva elemento por elemento, me lleva a la siguiente, p+i obtiene el valor,
		// si hago *array+i, le sumo uno al valor que contiene la posicion (
	}
}
//p es el array
void MostrarArrayC(int *p )
{

	int i; //variable contadora...
    printf("\nFuncion 3\n");
	for (i=0;i<TAM;i++)
	{
		printf("%d\n",p[i]);
	}
}
//ESTA ES LA FUNCION QUE VAMOS A USAR EN EL USO DE PUNTEROS, EL FORMATO
/*void MostrarArrayD(int *p )
{

	int i; //variable contadora...
    printf("\nFuncion 4\n");
	for (i=0;i<TAM;i++)
	{
		printf("%d\n",*(p+i));
	}
}
*/
//mejoramos la funcion
int MostrarArrayD(int* p )
{

	int i; //variable contadora...
	int retorno=-1;

	if ( p != NULL)
	{
	    retorno=0;
	    printf("\nFuncion 4\n");
        for (i=0;i<TAM;i++)
        {
            printf("%d\n",*(p+i));
        }
	}


	return retorno;
//devuelve un valor distinto de 0 cuando es falso entonces valido en el mail en el if y se que es verdadero si no pudo validar
}

