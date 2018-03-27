#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcion=0;
    int operandoA;
    //int operandoB;

    do
    {
        printf("1.Ingresar 1er operando\n");
        printf("2.Ingresar 2do operando\n");
        printf("3.Calcular la suma\n");
        printf("4.Calcular la resta\n");
        printf("5.Calcular la division\n");
        printf("6.Calcular la multiplicacion\n");
        printf("7.Calcular la factorial\n");
        printf("8.Calcular todas las operaciones\n");
        printf("9.salir\n");
        printf("Ingrese opcion:");
        scanf("%d",&opcion);

        switch (opcion)
        {
            case 1:
            printf("ingrese operandoA: ");
            scanf("%d",&operandoA);
            case 2:
            printf("ingrese operandoB: ");
            scanf("%d",&operandoA);
        }

        printf("el operando A es: %d", operandoA);


    }while(opcion>9);





    return 0;
}
