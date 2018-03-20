#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


//HAY QUE HACER LA GUIA DE EJERCICIOS DE JAVA SCRIPT EN C

int main()
{
    char seguir ='s';
    int numero;
    int maximo;
    int minimo;
    int par=0;
    int suma=0;
    int contador=0;
    float promedio=0;
    int flag=0;

    //casteo: parecido al parseo (pasar de un valor de texto a numero), pasamos de un numerico a otro tipo de numero
    // implicito: cuando no indico a que convierto
    //explicito: digo a que tipo de dato convierto
    // ej: promedio = (float)acumulador / contadorNumeros solo por esa ejecución.

    //Concepto de Flags -- como no existe el booleano en C -- entonces usamos flags a traves de un valor entero -- en 0 no hay nada en 1 hay algo

    //actuar por corto-- which is the meaning???

     while(seguir=='s')
    {
       printf("\n Ingrese un numero:\n");
       scanf("%d",&numero);
       while(numero<=0) //evaluo la negativa, preguntar a Tincho
       {
          printf("ingrese un numero:\n");
          scanf("%d",&numero);
       }

        /*if( flag == 0)
        {
            maximo=numero;
            minimo=numero;

        }
        else
        {
            if ( numero>maximo )
            {
             maximo=numero;
            }
            if ( numero<minimo)
            {
              minimo=numero;
            }
            */
        if ( numero%2==0)
        {
            par++;
        }


        if (flag == 0 || numero > maximo) //se puede cumplir una otra o ambas
        {
            maximo=numero;
        }
        if (flag == 0 || numero < minimo)
        {
            minimo=numero;
            flag=1;
        }

        suma=suma+numero;
        contador++;

       printf("desea continuar:\n");
       seguir = getche();
    }

    promedio=(float)suma/contador;


    printf("nro maximo %d y el nro minimo es %d\n",maximo, minimo);
    printf("la cantidad de pares es %d\n",par);
    printf("el promedio es %f\n",promedio);
    printf("la suma es: %d\n",suma);


    return 0;

}


