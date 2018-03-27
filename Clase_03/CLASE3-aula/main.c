#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_VALOR 100
#define MIN_VALOR 1

float sumar(int numero1, int numero2); /* prototipo de funcion*/
void ingresarNumero(void);
int leernumero(void);
char leeroperacion(void);
int Pediryleer();
float calcular(int numero1, char operacion,int numero2);
int pediryleernumero(int max,int min);

int main()
{
    int numero1=0;
    int numero2=0;
    char oper;
    float resultado;
    int minimo;
    int maximo;

    /*printf("Ingrese el numero1:");    scanf("%d",&numero1);*/   /* ingresarNumero();    numero1=leernumero();*/
    numero1=Pediryleer();

    /*printf("ingrese la operación: ");    fflush(stdin);    oper=getche(); */
    oper=leeroperacion();

    /*printf("\n Ingrese el numero:");*/    /*ingresarNumero();*/
    numero2=Pediryleer();

    resultado=calcular(numero1,oper,numero2);
    printf("%d %c %d",resultado);

 /*   switch(oper)
    {
        case '+':
            resultado=sumar(numero1,numero2);
        break;

        case '-':
            resultado=numero1-numero2;
        break;

        case '*':
            resultado=numero1*numero2;
        break;

        case '/':
            resultado=numero1/(float)numero2;
        break;
    }
*/
   // printf("El resultado es %.2f",resultado);
    return 0;

}

float sumar(int numero1, int numero2) /* como es una implementación saco el ;, si la funcion devuelve un flotante entonces lo primero que hago es declarar un float*/
{
    float resultado;

    resultado=numero1+numero2; /* uso una varible LOCAL para atajar el resultado en la funcion */

    return resultado;
}

void ingresarNumero(void)
{
    printf("Ingrese un numero:\n");
}


int leernumero(void)
{
    int numero;

        scanf("%d",&numero);

    return numero;
}

/*int pediryleernumero(max, min)
{
    int numero;

    ingresarNumero();
    numero=leernumero();

    return numero;
}
*/
int pediryleernumero(0,100)
{
    int numero;

    ingresarNumero();
    numero=leernumero();

    while (numero < min || numero > max)
    {
        printf("el valor tiene que estar entre 0 y 100");
        ingresarNumero();
        numero=leernumero();
    }

    return numero;
}

char leeroperacion(void)
{
    char operacion;

    printf("Ingrese operacion:\n");
    operacion=getche();
    while (operacion != '*' && != '-' & != '+' & != '/' )
    {
        printf("Ingrese operacion:\n");
        operacion=getche();
    }

    return operacion;
}

/** \brief
    aca puedo poner un comentario como un man de ayuda
    @return operador;
*/

float calcular(int numero1, char operacion,int numero2)
{
   float resultado;

     switch(operacion)
    {
        case '+':
            resultado=sumar(numero1,numero2);
        break;

        case '-':
            resultado=numero1-numero2;
        break;

        case '*':
            resultado=numero1*numero2;
        break;

        case '/':
            resultado=numero1/(float)numero2;
        break;
    }

    return resultado;
}

/* 3 partes para declarar una funcion
funcion reciben parametros/datos procesan y devuelven datos
puebe haber funciones que no reciban nada y devuelvan algo
reciban algo y no devuelvan nada
"tengo que tener claro que va a hacer la función para definir que datos necesitos y que va a tener que devolver la funcion
nombre descriptivo
pongo ; al final -- declaracion de funcion
1- prototipo--> a retorno tipo, b nombre verbo, c  parametros de entrada (tipo mas variable)
2- Llamar
3- Implementar la funcion --> por abajo del mail (por ahora, es mejor sacarlo fuera), es lo que se hace
*/

