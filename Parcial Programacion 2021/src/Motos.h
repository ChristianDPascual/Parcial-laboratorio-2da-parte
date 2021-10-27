#ifndef MOTOS_H_
#define MOTOS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Estructuras.h"
#define V 20
#define LONG 31
#define TAM 1000
#define TRUE 0
#define FALSE -1

/**
 * @fn int inicializarMotos(eMoto[], int)
 * @brief Inicializa la struct eMoto poniendo todas las posiciones id en FALSE
 *
 * @param recibe la struct eMoto
 * @param recibe el tamaño de la struct
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int inicializarMotos(eMoto[],int);
/**
 * @fn int inicializarTipos(eTipo[], int)
 * @brief Inicializa la struct eTipo poniendo todas las posiciones id en FALSE
 *
 * @param recibe la structa eTipo
 * @param recibe el tamaño de la struct
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int inicializarTipos(eTipo[],int);
/**
 * @fn int inicializarColores(eColor[], int)
 * @brief Inicializa la struct eColor  poniendo todas las posiciones id en FALSE
 *
 * @param recibe la struct eColor
 * @param recibe el tamaño de la struct
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int inicializarColores(eColor[],int);
/**
 * @fn int inicializarServicios(eServicio[], int)
 * @brief Inicializa la struct eServicio poniendo todas las posiciones id en FALSE
 *
 * @param recibe la struct eServicio
 * @param recibe el tamaño de la struct
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int inicializarServicios(eServicio[],int);
/**
 * @fn int inicializarTrabajos(eTrabajo[], int)
 * @brief Inicializa la estructura eTrabajo poniendo todas las posiciones id en FALSE
 *
 * @param recibe la struct eTrabajo
 * @param recibe el tamaño de la struct
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int inicializarTrabajos(eTrabajo[],int);
/**
 * @fn int ingresarMoto(eMoto[], eColor[], eTipo[], int, int)
 * @brief Permite cargar los datos de una moto
 *
 * @param recibe la struct eMoto
 * @param recibe la struct eColor
 * @param recibe la struct eTipo
 * @param el tamaño del struct eMoto
 * @param el tamaño del struct eColor y eTipo
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int ingresarMoto(eMoto[],eColor[],eTipo[],int,int);
/**
 * @fn int agregarColor(eColor[], char[], int)
 * @brief Verifica si se ingresa un color nuevo y permite agregarlo al listado permanente
 *
 * @param la struct eColor
 * @param el nuevo color
 * @param el tamaño de la struct
 * @return retorna la posicion del nuevo color agregado o FALSE si ocurrio un error
 */
int agregarColor(eColor[],char[],int);
/**
 * @fn int agregarTipo(eTipo[], char[], int)
 * @brief Verifica si se ingresa un tipo nuevo y permite agregarlo al listado permanente
 *
 * @param la struct eTipo
 * @param el nuevo Tipo
 * @param el tamaño de la struct
 * @return retorna la posicion del nuevo tipo agregado o FALSE si ocurrio un error
 */
int agregarTipo(eTipo[],char[],int);
/**
 * @fn int agregarServicio(eServicio[], char[], int)
 * @brief Verifica si se ingresa un color servicio y permite agregarlo al listado permanente
 *
 * @param la struct eServicio
 * @param el nuevo servicio
 * @param el tamaño de la struct
 * @return retorna la posicion del nuevo servicio agregado o FALSE si ocurrio un error
 */
int agregarServicio(eServicio[],char[],int);
/**
 * @fn int generarID(eMoto[], int)
 * @brief Genera un nuevo ID
 *
 * @param recibe la struct eMoto
 * @param el tamaño de la struct
 * @return retorna la posicion del nuevo id o FALSE si ocurrio un error
 */
int generarID(eMoto[],int);
/**
 * @fn int modificarMoto(eMoto[], eColor[], eTipo[], int, int)
 * @brief Ingresando el ID permite modificar el color o puntaje de la moto
 *
 * @param recibe la struct eMoto
 * @param recibe la struct eColor
 * @param recibe la struct eTipo
 * @param el tamaño del struct eMoto
 * @param el tamaño del struct eColor y eTipo
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int modificarMoto(eMoto[],eColor[],eTipo[],int,int);
/**
 * @fn int BajaMoto(eMoto[], eColor[], eTipo[], int, int)
 * @brief Permite dar de baja una moto previamente cargada
 *
 * @param recibe la struct eMoto
 * @param recibe la struct eColor
 * @param recibe la struct eTipo
 * @param el tamaño del struct eMoto
 * @param el tamaño del struct eColor y eTipo
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int BajaMoto(eMoto[],eColor[],eTipo[],int,int);
/**
 * @fn void mostrarUnaMoto(eMoto[], eColor[], eTipo[], int, int, int)
 * @brief muestra los datos de la moto seleccionada
 *
 * @param recibe la struct eMoto
 * @param recibe la struct eColor
 * @param recibe la struct eTipo
 * @param el tamaño del struct eMoto
 * @param el tamaño del struct eColor y eTipo
 * @param el id de la moto que se va a mostrar
 */
void mostrarUnaMoto(eMoto[],eColor[],eTipo[],int,int,int);
/**
 * @fn int buscarPorID(eMoto[], int, int)
 * @brief comprueba que el ID ingresado exista
 *
 * @param recibe la struct eMoto
 * @param el tamaño del struct eMoto
 * @param el id de la moto que se va a buscar
 * @return retorna TRUE si se encontro el id o FALSE en caso que no exista el id
 */
int buscarPorID(eMoto[],int,int);
/**
 * @fn int mostrarMotoTipoID(eMoto[], eTipo[], int, int)
 * @brief muestras de los datos de la moto y el tipo
 *
 * @param recibe la struct eMoto
 * @param recibe la struct eTipo
 * @param el tamaño del struct eMoto
 * @param el tamaño del struct eTipo
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int mostrarMotoTipoID(eMoto[],eTipo[],int,int);
/**
 * @fn int listarTipos(eTipo[], int)
 * @brief lista los tipos ingresado en el programa
 *
 * @param recibe la struct eTipo
 * @param el tamaño del struct eTipo
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int listarTipos(eTipo[],int);
/**
 * @fn int listarColor(eColor[], int)
 * @brief lista los colores ingresado en el programa
 *
 * @param recibe la struct eColor
 * @param el tamaño del struct eColor
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int listarColor(eColor[],int);
/**
 * @fn int listarServicios(eServicio[], int)
 * @brief lista los servicios ingresado en el programa
 *
 * @param recibe la struct eServicio
 * @param el tamaño del struct eServicio
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int listarServicios(eServicio[],int);
/**
 * @fn int iniciarTrabajo(eServicio[], int)
 * @brief permite ingresar un nuevo servicio en caso de que no exista
 *
 * @param recibe la struct eServicio
 * @param recibe el tamaño de la struct
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int iniciarTrabajo(eServicio[],int);
/**
 * @fn int ListarMotoTipoID(eMoto[], eTipo[], int, int)
 * @brief muestra un menu con las opciones de listado por ID o tipo y acomoda los datos segun la orden
 *
 * @param la struct eMoto
 * @param la struct eTipo
 * @param el tamaño de la struct eMoto
 * @param el tamaño de la struct eTipo
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int ListarMotoTipoID(eMoto[],eTipo[],int,int);
/**
 * @fn int cargarTrabajo(eMoto[], eTrabajo[], eServicio[], eColor[], eTipo[], eFecha[], int, int)
 * @brief permite ingresar un nuevo trabajo al sistema
 *
 * @param la struct eMoto
 * @param la struct eTrabajo
 * @param la struct eServicio
 * @param la struct eColor
 * @param la struct eTipo
 * @param la struct eFecha
 * @param el tamaño de las struct eMoto, eTrabajo y eFecha
 * @param el tamaño de la struct eTrabajo, eServicio, eColor y eTipo
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int cargarTrabajo(eMoto[],eTrabajo[],eServicio[],eColor[],eTipo[],eFecha[],int,int);
/**
 * @fn void mostrarMotoID(eMoto[], int)
 * @brief muestra las motos y sus id
 *
 * @param la struct eMoto
 * @param el tamaño de la struct eMoto
 */
void mostrarMotoID(eMoto[],int);
/**
 * @fn int listarTrabajos(eMoto[], eTrabajo[], eServicio[], int, int)
 * @brief Lista todos los trabajos que se encuentran en el sistema
 *
 * @param la struct eMoto
 * @param la struct eTrabajo
 * @param la struct eServicio
 * @param el tamaño de la struct eMoto y eTrabajo
 * @param el tamaño de la struct eServicio
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int listarTrabajos(eMoto[],eTrabajo[],eServicio[],int,int);

int mostrarMotoColor(eMoto[],eColor[],int,int);
int mostrarPromedioPuntaje(eMoto[],int);
int mostrarMayorCilindrada(eMoto[],int);
int mostrarPorTipo(eMoto[],eTipo[],int,int);
int contarColorYTipo(eMoto[],eColor[],eTipo[],int,int);
int colorMasElejido(eMoto[],eColor[],int,int);
int mostrarTrabajosMoto(eMoto[],eTrabajo[],eServicio[],int,int);
int sumaImportes(eMoto[],eTrabajo[],eServicio[],int,int);
int pedirServicio(eMoto[],eTrabajo[],eServicio[],eFecha[],int,int);
int perdirFecha(eMoto[],eTrabajo[],eServicio[],eFecha[],int,int);
void hardCodeo(eMoto[],eTrabajo[]);
eCliente cargarCliente(eCliente,int);

#endif /* MOTOS_H_ */
