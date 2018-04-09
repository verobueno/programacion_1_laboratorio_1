#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char seguir='s';
    int opcion=0;
    int a;
    int b;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    float factorial=1;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                printf("Ingrese 1er operando: \n");
                scanf("%d",&a);
                break;
            case 2:
                printf("Ingrese 2do operando:\n");
                scanf("%d",&b);
                break;
            case 3:
                printf("valores Ingresados de \"a\" %d y \"b\" %d \n", a, b);
                suma=a+b;
                printf("La suma de a y b es: %d\n", suma);
                break;
            case 4:
                printf("valores Ingresados de \"a\" %d y \"b\" %d \n", a, b);
                resta=a-b;
                printf("La resta de a y b es:%d\n",resta);
                break;
            case 5:
                printf("valores Ingresados de \"a\" %d y \"b\" %d \n", a, b);
                division=(float)a/b;
                printf("La division de a y b es:%.2f\n", division);
                break;

            case 6:
                printf("valores Ingresados de \"a\" %d y \"b\" %d \n", a, b);
                multiplicacion=a*b;
                printf("La multiplicacion de a y b es:%d\n", multiplicacion);
                break;

            case 7:
                printf("Valor ingresado de \"a\" %d \n", a);

                factorial=1;
                if (a != 0)
                {
                    for (int i=a; i>1; i--)
                    {
                        factorial=factorial*i;

                    }
                }
                printf("El factorial de \"a\" es %f\n", factorial);

                break;



            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
            }
    }


    return 0;
}
