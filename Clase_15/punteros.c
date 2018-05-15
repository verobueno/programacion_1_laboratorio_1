#include <stdio.h>
#include <stdlib.h>

#define TAM 5


void CargarArray(int *);
void MostrarArray(int *);
void OrdenarArray(int *);

int main()
{

	int vector[TAM];
	int *p=&vector[0];

	CargarArray(p);
	MostrarArray(p);
	OrdenarArray(p);
	MostrarArray(p);

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


void MostrarArray(int *p )
{

	int i; //variable contadora...

	for (i=0;i<TAM;i++)
	{
		printf("%d\n",*(p+i));
	}
}


void OrdenarArray(int *p)
{

	int i; 
	int j;
	int aux;

	for (i=0;i<TAM-1;i++)
	{
		for (j=i+1;j<TAM;j++)
		{
			if( *(p+i) > *(p+j) )
			{
				aux=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=aux;	
				
			}
		}
	}
}


