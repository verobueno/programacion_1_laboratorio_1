#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 5
// este mismo ejercicio pasarlo a funciones

float calcularpromedio(int, int);
void mostrarVector(int[],int); //pasamos el vector y la cantidad de elemtos del vector

int main()
{
    int vector[TAM]={};//{1,2,3,4,5};//harcodeo de vectores
    //int vector[posicion];
    int i;
    int maximo;
    int opcion=0;
    int flag=0;
    int cont20=0;
    int suma=0;
    float promedio;
    //variables para preguntar que numero y en que posicion
    int posicion;
    int numero;
    char seguir;
    int contIngreso=0;

    /*Inicializacion de vector*/
    /*for(i=0; i<TAM; i++)
    {
        vector[i]=0; // 0 == ilogico!
    }
    */
    do
    {
        printf("1- Ingrese numero\n");
        printf("2- Imprima orden de carga\n");
        printf("3- Imprima listado inverso\n");
        printf("4- Imprima numeros pares\n");
        printf("5- Imprima el numero maximo\n");
        printf("6- Imprima la posicion de los maximos encontrados\n");
        printf("7- Imprima el promedio\n");
        printf("8- Imprima el numero a buscar\n");
        printf("9- SALIR\n");
        printf("Ingrese OPCION:");
        //system("pause");
        //system("cls");
    //}while( opcion =! 8 );
            scanf("%d",&opcion);

            switch (opcion)
            {
                case 1:
                    printf("Ingreso\n");
                    do
                    {
                        printf("Ingrese posicion");
                        scanf("%d",&posicion);
                        //validar, usar funciones que lo hacen
                        printf("Ingrese numero");
                        scanf("%d",&numero);
                        vector[posicion-1]=numero;

                        printf("desea continuar ingresando\n");
                        seguir=getche();
                    }while (seguir =='s');
                    break;

                case 2:
                    printf("listado en orden de carga\n");
                    /*for (i=0; i<TAM; i++)
                    {
                        printf("%d\n", vector[i]);
                    }*/
                    mostrarVector(vector,TAM); //sin corchetes, ni vacios ni llenos, para pasar el vector.

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
                        if (vector[i]!=0)
                        {
                             suma = suma + vector[i];
                             contIngreso++;
                        }


                    }
                    break;
                    promedio = calcularpromedio( suma, TAM);
                    printf("el promedio es:%f\n", promedio);

                case 8:
                    printf("ingrese el nro a buscar\n");
                    scanf("%d", &numero);
                    for (i=1; i<TAM; i++)
                    {
                        if ( vector[i]==numero )
                        {
                            printf("el numero esta en la posicion %d\n", i+1);
                        }
                    }

                 case 9:
                    printf("Opcion no valida, salida\n");
                    break;


            }
    }while( opcion != 9 );


    return 0;
}
 float calcularpromedio(int suma,int contIngreso)
    {
        float promedio;
            promedio=(float)suma/contIngreso;
        return promedio;
    }
void mostrarVector(int vector[],int tamanio)
{
    int i;
    for (i=0; i < tamanio; i++)
    {
        if (vector[i] != 0 )
        {
            printf("%d", vector[i]); // cuando paso un vector paso cosas por referencia...
        }
    }

}
