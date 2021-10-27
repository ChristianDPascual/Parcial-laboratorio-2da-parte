#ifndef FECHA_H_
#define FECHA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Estructuras.h"
#include "Motos.h"
#include "UTN.h"
#define V 20
#define LONG 31
#define TAM 1000
#define TRUE 0
#define FALSE -1

/**
 * @fn eFecha cargarFechas()
 * @brief compara el dia, mes y anio ingresado que sean correctos
 *
 * @return una struct fecha ya cargada o FALSE en caso de error
 */
eFecha cargarFechas();
/**
 * @fn int validarMes()
 * @brief valida que el mes ingresado sea valido
 *
 * @return retorna el dato ingresado en caso de ser correcto o FALSE en caso que ingrese un dato invalido
 */
int validarMes();
/**
 * @fn int validarDia()
 * @brief valida que el dia ingresado sea valido
 *
 * @return retorna el dato ingresado en caso de ser correcto o FALSE en caso que ingrese un dato invalido
 */
int validarDia();
/**
 * @fn int validarAnio()
 * @brief valida que el anio ingresado sea valido
 *
 * @return retorna el dato ingresado en caso de ser correcto o FALSE en caso que ingrese un dato invalido
 */
int validarAnio();

#endif /* FECHA_H_ */
