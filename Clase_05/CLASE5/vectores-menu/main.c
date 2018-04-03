#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
// no es constante, es directiva del precompilador, antes de compilar busca
// las ref de TAM y las reemplaza por el valor que asigne
#define TAM 5
//ventaja -- acceso de datos en mem ram
//desventaja -- array finito (datos en mem ram que se borran cuando salgo) y mismo
//tipo de datos

float calcularpromedio(int, int);

int main()
{
    int vector[TAM];
    int i;
    int maximo;
    int opcion=0;
    int flag=0;
    int cont20=0;
    int suma=0;
    float promedio;

    do
    {
        printf("1- Ingrese numero\n");
        printf("2- Imprima orden de carga\n");
        printf("3- Imprima listado inverso\n");
        printf("4- Imprima numeros pares\n");
        printf("5- Imprima el numero maximo\n");
        printf("6- Imprima la posicion de los maximos encontrados\n");
        printf("7- Imprima el promedio");

        printf("8- SALIR\n");
        printf("Ingrese OPCION:");
        //system("pause");
        //system("cls");
    }while( opcion =! 8 );
    scanf("%d",&opcion);

    switch (opcion)
    {
        case 1:
            printf("Ingreso\n");
            for (i=0; i<TAM; i++)
            {
                printf("Ingrese un numero:");
                scanf("%d",&vector[i]);
            }

            break;
        case 2:
            printf("listado en orden de carga\n");
            for (i=0; i<TAM; i++)
            {
                printf("%d\n", vector[i]);
            }

            break;
        case 3:
            printf("listado inverso\n");
            for (i=TAM-1; i>=0; i--)
            {
                printf("%d\n", vector[i]);
            }
            break;
        case 4:
            for (i=0; i<TAM; i++)
            {
                if ( vector[i]%2== 0)
                {
                    printf("%d\n", vector[i]);
                }
            }
            break;
        case 5:
            for (i=1; i<TAM; i++)
            {
                if ( flag ==0 || vector[i]>maximo )
                {
                    maximo=vector[i];
                }
            }
            break;

        case 6:
            maximo=vector[0];
            for (i=0; i<TAM; i++)
            {
                if ( vector[i]== maximo )
                {
                    //ojo que el vector inicializa en 0 la posicion va mas 1
                    printf("posiciones de maximos:%d\n ",i+1);
                }
            }

        break;
        case 7:
            for (i=0; i < TAM; i++)
            {
                suma = suma + vector[i];

            }
            break;
            promedio = calcularpromedio( suma, TAM);
            printf("el promedio es:%f\n", promedio);
         case 8:
            printf("Opcion no valida, salida\n");
            break;

    }

    float calcularpromedio(int suma,int TAM)
    {
        float promedio;
            promedio=(float)suma/TAM+1;
        return promedio;
    }

    return 0;
}

