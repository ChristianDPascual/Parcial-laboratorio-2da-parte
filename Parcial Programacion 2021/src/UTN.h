#ifndef UTN_H_
#define UTN_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Estructuras.h"
#include "Motos.h"
#include "Fecha.h"
#define V 20
#define LONG 31
#define TAM 1000
#define TRUE 0
#define FALSE -1

/**
 * @fn int DarRespuesta()
 * @brief Pregunta (si/no) al usuario para ciertas acciones
 *
 * @return retorna TRUE en caso de si o FALSE en caso de no
 */
int DarRespuesta();
/**
 * @fn int validarNumeroEntero(char[])
 * @brief Valida que sea un numero entero el dato ingresado por el usuario
 *
 * @param el dato que ingreso el usuario
 * @return retorna TRUE si es correto o FALSE en caso que ocurra un mal ingreso de dato
 */
int validarNumeroEntero(char[]);
/**
 * @fn int validarNumeroFlotante(char[])
 * @brief Valida que sea un numero flotante el dato ingresado por el usuario
 *
 * @param el dato que ingreso el usuario
 * @return retorna TRUE si es correto o FALSE en caso que ocurra un mal ingreso de dato
 */
int validarNumeroFlotante(char[]);
/**
 * @fn int validarPalabra(char[])
 * @brief Valida que sea una palabra el dato ingresado por el usuario
 *
 * @param el dato que ingreso el usuario
 * @return retorna TRUE si es correto o FALSE en caso que ocurra un mal ingreso de dato
 */
int validarPalabra(char[]);
/**
 * @fn int validarCilindrada(int)
 * @brief valida que el dato ingresado por el usuario sea de una cilindrada
 *
 * @param el dato ingresado por el usuario
 * @return retorna TRUE si es correto o FALSE en caso que ocurra un mal ingreso de dato
 */
int validarCilindrada(int);
/**
 * @fn int validarColores(eColor[], char[], int)
 * @brief valida que el usuario ingrese un color valido
 *
 * @param la struct eColor
 * @param el color ingresado por el usuario
 * @param el tamaño de la struct eColor
 * @return retorna TRUE si es correto o FALSE en caso que ocurra un mal ingreso de dato
 */
int validarColores(eColor[],char[],int);
/**
 * @fn int validarServicios(eServicio[], char[], int)
 * @brief valida que el usuario ingrese un servicio valido
 *
 * @param la struct eServicio
 * @param el servicio ingresado por el usuario
 * @param el tamaño de la struct eServicio
 * @return retorna TRUE si es correto o FALSE en caso que ocurra un mal ingreso de dato
 */
int validarServicios(eServicio[],char[],int);
/**
 * @fn int validarTipo(eTipo[], char[], int)
 * @brief valida que el usuario ingrese un tipo valido
 *
 * @param la struct eTipo
 * @param el tipo ingresado por el usuario
 * @param el tamaño de la struct eTipo
 * @return retorna TRUE si es correto o FALSE en caso que ocurra un mal ingreso de dato
 */
int validarTipo(eTipo[],char[],int);
/**
 * @fn int validarMenu(eMoto[], int)
 * @brief Verifica que esten ingresadas motos antes de permitirle al usuario realizar ciertas acciones
 *
 * @param la struct eMoto
 * @param el tamaño de la struct eMoto
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int validarMenu(eMoto[],int);
/**
 * @fn int validarListarTrabajos(eTrabajo[], int)
 * @brief Verifica que esten ingresados trabajos antes de permitirle al usuario ver el listado
 *
 * @param la struct eTrabajo
 * @param el tamaño de la struct eTrabajo
 * @return retorna TRUE si salio bien o FALSE en caso que ocurra un error
 */
int validarListarTrabajos(eTrabajo[],int);
#endif /* UTN_H_ */
