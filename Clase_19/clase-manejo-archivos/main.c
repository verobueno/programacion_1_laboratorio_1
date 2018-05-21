#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE* pArchivo; //contiene toda la informacion del archivo que estoy abriendo
    char cadena[50]; //LA CREO PARA LA LECTURA, ACA GUARDO LA CADENA

    //1er cadena representa el PATH donde esta o va a crear el file
    // el compilador setea el path lo pone por defecto en el ambiente del usuario \archivos
    //si lo quiero crear en un PATH especifico paso el path completo
    // anulo la contrabarra con otra contrabarra
    /*pArchivo = fopen("c:\\TEST\\archivo.txt","w"); //el 2do parametro otro string, modo en el que voy a usar el archivo -- leer o escribir--

    if( pArchivo != NULL) //valido que lo pude abrir
    {
        fprintf(pArchivo,"Hola a Todos"); //le pasoe el archivo y le paso el texto que quiero guardar --- representacion en mem del archivo
        fclose(pArchivo); // cierro el archivo (puntero a archivo -- donde empieza la dir de mem de mi archivo en disco)
        printf("Guardado");
    }
    else
    {
        printf("Imposible Guardar");
    }
    */

    // LEER, tengo que traer la informacion que tengo en mi archivo
    pArchivo = fopen("C:\\TEST\\archivo.txt","r");
    if (pArchivo !=NULL )
    {
        while(!feof(pArchivo))
        {
            fgets(cadena, 50, pArchivo);//leer una cadena desde archivo -- puntero destino -- lo que voy a leer -- y un puntero a char LEE UNA LINEA
            puts(cadena);//igual a printf sin formato
        }

            fclose(pArchivo);

    }




    return 0;
}
