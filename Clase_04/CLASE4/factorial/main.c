#include <stdio.h>
#include <stdlib.h>
/*funcion recursiva funciones que se llaman a si mismas, no se aconseja usarlas porque ocnsumen mucho tiempo de proc.
ej
Factorial de 5
5!=5.4!, 4!=4.3!, 3!=3.2!, 2!=2.1!, 1!=1.0!, 0!=1
 */
int main()
{
    int numero=5;
    int factorial=1;


    for(int i=numero; i>=1; i--)
    {
        factorial=factorial*i;
    }
    printf("el factorial es%d", factorial);
    return 0;
}
