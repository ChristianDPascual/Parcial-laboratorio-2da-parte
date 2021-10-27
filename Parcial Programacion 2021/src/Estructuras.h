#ifndef ESTRUCTURAS_H_
#define ESTRUCTURAS_H_

#include <stdio.h>
#include <stdlib.h>
#define V 20
#define LONG 31
#define TAM 1000
#define TRUE 0
#define FALSE -1

typedef struct
{
	int dia;
	int mes;
	int anio;
}eFecha;

typedef struct
{
	int id;//comienza en 1000
	char descripcion[V];//Enduro, Chopera, Scooter, Vintage
}eTipo;

typedef struct
{
	int id;//comienza en 10000
	char nombreColor[V];//Gris, Negro, Azul, Blanco, Rojo
}eColor;

typedef struct
{
	int id;
	int idTipo;
	int idColor;
	int cilindrada;//50, 125, 500, 600, 750
	int puntaje;
	char marca[V];
}eMoto;

typedef struct
{
	int id;//comienza en 2000
	char descripcion[V];//(Limpieza: $450, Ajuste: $300, Balanceo: $150, Cadena: $390)
	float precio;

}eServicio;

typedef struct
{
	int id;
	int idMoto;
	int idServicio;
	eFecha fecha;
}eTrabajo;

typedef struct
{
	int id;
    char nombre[V];
    char sexo[V];
   }eCliente;

#endif /* ESTRUCTURAS_H_ */
