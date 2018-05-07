#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

typedef struct{
    int idCategoria;
    char descripcion[10];
    float pagoXHora;
}eCategoria;


/**brief
** Funcion que imprime el menu
**param/ no recibe parametros
**param/ no retorna parametros
*/
void MostrarMenu(void);

typedef struct{
    int idProgramador;
    char nombre[50];
    char apellido[50];
    int idCategoria;
}eProgramador;


/** brief
* Funcion que imprime los datos de un programador
* recibe el vector y su tamaño
* no retorna valor
*/
//void mostrarProgramador();

/** brief
* Funcion que inicializa vector
* recibe el vector y su tamaño
* no retorna valor
*/
//void inicializarProgramador(eProgramador Programador[],int tam);

/** brief
* Funcion que busca una posicion libre para Programador[]
* recibe el vector y su tamaño
* retorna int la posicion libre
*/
//int buscaEspLibre(eProgramador Programador[], int tam);


/** brief
* Funcion que busca el dato id
* recibe el vector y su tamaño y el id a buscar
* retorna un int con la posicion en la que se encuentra el dato
*/
//int buscarProgramador(eProgramador Programador[], int tam, int id);

/** brief
* Funcion que carga datos
* recibe el vector y su tamaño
* no retorna valor
*/
//void AltaProgramador(eProgramador Programador[], int tam_prog);

/** brief
* Funcion que modifica datos cargados
* recibe el vector, su tamaño y el campo id
* no retorna valor
*/
//void modificarDatosProgramador(eProgramador Programador[], int tam, int id);
//void eliminarProgramador(eProgramador Programador[], int tam, int id);



typedef struct
{
    int idProyecto;
    char nombreProyecto[50];
}eProyecto;


//void CrearListaCuatroProy(eProyecto Proyecto[]);

/** brief
* Funcion que busca una posicion libre para tipo de dato eProyecto
* recibe el vector y su tamaño
* retorna int la posicion libre
*/
//int buscaEspLibreProy(eProyecto Proyecto[], int tam_proy);

//void mostrarProyecto(eProyecto miProyecto);
//void mostrarProyectos(eProyecto miProyecto[], int tam_proy );
typedef struct
{
    int idProgramador;
    int idProyecto;
    int cant_horas;
}eRelacion;

//int buscaEspLibreRelacion(eRelacion Relacion[], int tam);

//void asignar(eRelacion Relacion[], int tam_rel, int id_prog, int id_proy, int horas);

#endif // MAIN_H_INCLUDED
