#include <stdio.h>
#include <stdlib.h>
#include "Estructuras.h"
#include "Motos.h"
#include "UTN.h"
#include "Fecha.h"
#define V 20
#define LONG 31
#define TAM 1000
#define TRUE 0
#define FALSE -1


int main(void)
{
	setbuf(stdout,NULL);
	eFecha Fecha[TAM];
	eTipo Tipos[LONG];
	eColor Colores[LONG];
	eMoto Motos[TAM];
	eServicio Servicios[LONG];
	eTrabajo Trabajos[TAM];
	int opciones;
	int valor;
	int verificar;
	int subMenu;
	char cSubMenu[2];
	char cOpciones[2];

	if(((inicializarMotos(Motos,TAM))==TRUE) && ((inicializarTipos(Tipos,LONG))==TRUE) &&((inicializarTrabajos(Trabajos,TAM))==TRUE) &&((inicializarColores(Colores,LONG))==TRUE) && ((inicializarServicios(Servicios,LONG))==TRUE))
	{

	do
	{
    hardCodeo(Motos,Trabajos);
	printf("\nElija la opcion\n");
	printf("1\tAlta Moto\n");
	printf("2\tModificar Moto\n");
	printf("3\tBaja Motos\n");
	printf("4\tListar Motos\n");
	printf("5\tListar Tipos\n");
	printf("6\tListar Colores\n");
	printf("7\tListar Servicios\n");
	printf("8\tAlta trabajo\n");
	printf("9\tListar Trabajo\n");
	printf("10\tInformes\n");
	printf("11\tSalir\n");
	fflush(stdin);
	scanf("%[^\n]",cOpciones);
	opciones=atoi(cOpciones);

	while((verificar=validarNumeroEntero(cOpciones))==FALSE || (opciones>11 || opciones<1))
	{
		printf("Error, Elija una opcion valida (1-11)\n");
		fflush(stdin);
		scanf("%[^\n]",cOpciones);
		opciones=atoi(cOpciones);
	}
	  switch(opciones)
	  {
	  case 1:
		  if(ingresarMoto(Motos,Colores,Tipos,TAM,LONG)==TRUE)
		  {
			  printf("Se agregado la moto exitosamente\n");
		  }

		  break;
	  case 2:
		  if(validarMenu(Motos,TAM)==TRUE)
		  {
		  if(modificarMoto(Motos,Colores,Tipos,TAM,LONG)==FALSE)
		  {
			  printf("El ID ingresado no existe\n");
			  printf("Necesita ver el listado, ");
			  if((valor=DarRespuesta())==TRUE)
			  {
				  mostrarMotoID(Motos,TAM);
			  }
		  }
		  }
		  else
		  {
			  printf("No hay motos cargadas\n");
		  }
		  break;
	  case 3:
		  if(validarMenu(Motos,TAM)==TRUE)
		  {
		  if(BajaMoto(Motos,Colores,Tipos,TAM,LONG)==FALSE)
		  {
			  printf("El ID ingresado no existe\n");
		 	  printf("Necesita ver el listado, ");
			  if((valor=DarRespuesta())==TRUE)
			  {
				  mostrarMotoID(Motos,TAM);
 			  }
		  }
		  }
		  else
		  {
			  printf("No hay motos cargadas\n");
		  }
	      break;
	  case 4:
		  if(validarMenu(Motos,TAM)==TRUE)
		  {
		  if(ListarMotoTipoID(Motos,Tipos,TAM,LONG)==FALSE)
		  {
			  printf("ERROR\n");
		  }
		  }
		  else
		  {
			  printf("No hay motos cargadas\n");
		  }
		  break;
	  case 5:
		  if(listarTipos(Tipos,LONG)==FALSE)
		  {
			  printf("Ocurrio un error inesperado\n");
		  }
	   break;
	  case 6:
		  if(listarColor(Colores,LONG)==FALSE)
		  {
			  printf("Ocurrio un error inesperado\n");
     	  }
		  break;
	  case 7:
		  if(listarServicios(Servicios,LONG)==FALSE)
		  {
			  printf("Ocurrio un error inesperado\n");

		  }
		  break;
	  case 8:
		  if(validarMenu(Motos,TAM)==TRUE)
		  {
		  if((cargarTrabajo(Motos,Trabajos,Servicios,Colores,Tipos,Fecha,TAM,LONG))==FALSE)
		  {
			  printf("El ID ingresado no existe\n");
			  printf("Necesita ver el listado, ");
			  if((valor=DarRespuesta())==TRUE)
			  {
				  mostrarMotoID(Motos,TAM);
			  }
		  }
		  }
		  else
		  {
			  printf("No hay motos cargadas\n");
		  }
		  break;
	  case 9:
		  if(validarMenu(Motos,TAM)==TRUE)
		  {
		  if(validarListarTrabajos(Trabajos,TAM)==TRUE)
		  {

		  if(listarTrabajos(Motos,Trabajos,Servicios,TAM,LONG)==FALSE)
		  {
			  printf("Ocurrio un error inesperado\n");
		  }
		  }
		  else
		  {
			  printf("No hay trabajos cargados\n");
		  }
		  }
		  else
		  {
			  printf("No hay motos cargadas\n");
		  }
		  break;
	  case 10:
		  if(validarMenu(Motos,TAM)==TRUE)
		  {
		  if(validarListarTrabajos(Trabajos,TAM)==TRUE)
		  {
			  do
			  {
			  printf("1\tMosotrar moto por color\n");
			  printf("2\tInformar promedio de un puntaje\n");
			  printf("3\tInformar motos de mayor cilindrada\n");
			  printf("4\tMostrar moto separada por tipo\n");
			  printf("5\tElegir un color y tipo y mostrar la cantidad\n");
			  printf("6\tMostrar el color/es mas elegidos por los usuarios\n");
			  printf("7\tPedir una moto y mostrar todos los trabajos que se realizaron\n");
			  printf("8\tPedir una moto y mostrar el costo del importe de los trabajos que se le realizaron\n");
			  printf("9\tPedir un servicio y las fechas\n");
			  printf("10\tPedir una fecha y mostrar los servicios de ese dia\n");
			  printf("11\tVolver al menu anterior\n");
			  fflush(stdin);
			  scanf("%[^\n]",cSubMenu);
			  subMenu=atoi(cSubMenu);

			  while((verificar=validarNumeroEntero(cSubMenu))==FALSE || (opciones>11 || opciones<1))
			  {
			  	printf("Error, Elija una opcion valida (1-11)\n");
			  	fflush(stdin);
			  	scanf("%[^\n]",cSubMenu);
			  	subMenu=atoi(cSubMenu);
			  }
			  switch(subMenu)
			  {
			  case 1:
				  if(mostrarMotoColor(Motos,Colores,TAM,LONG)==FALSE)
				  {
					  printf("Ocurrio un error inesperado\n");
				  }
				  break;
			  case 2:
				  if(mostrarPromedioPuntaje(Motos,TAM)==FALSE)
				  {
					  printf("Ocurrio un error inesperado\n");
				  }
				  break;
			  case 3:
				  if(mostrarMayorCilindrada(Motos,TAM)==FALSE)
				  {
					  printf("Ocurrio un error inesperado\n");
				  }
				  break;
			  case 4:
				  if(mostrarPorTipo(Motos,Tipos,TAM,LONG)==FALSE)
				  {
					  printf("Ocurrio un error inesperado\n");
				  }
				  break;
			  case 5:
				  if(contarColorYTipo(Motos,Colores,Tipos,TAM,LONG)==FALSE)
				  {
					  printf("Ocurrio un error inesperado\n");
				  }
				  break;
			  case 6:
				  printf("No me llegue a terminarlo\n");
				  break;
			  case 7:
				 if(mostrarTrabajosMoto(Motos,Trabajos,Servicios,TAM,LONG)==FALSE)
				 {
					 printf("Ocurrio un error inesperado\n");
				 }
				  break;
			  case 8:
				  if(sumaImportes(Motos,Trabajos,Servicios,TAM,LONG)==FALSE)
				  {
					  printf("Ocurrio un error inesperado\n");
				  }
				  break;
			  case 9:
				  if(pedirServicio(Motos,Trabajos,Servicios,Fecha,TAM,LONG)==FALSE)
				  {
					  printf("Ocurrio un error inesperado\n");
				  }
				  break;
			  case 10:
				  if(pedirFecha(Motos,Trabajos,Servicios,Fecha,TAM,LONG)==FALSE)
				  {
					  printf("Ocurrio un error inesperado\n");
				  }
				  break;
			  }
			  }while(subMenu!=11);
		  }
		  else
		  {
					  printf("No hay trabajos cargados\n");
		  }
		  }
		  else
		  {
					  printf("No hay motos cargadas\n");
		  }
		  break;
	  case 11:
		  printf("Programa Finalizado\n");
		  break;
	  }
	}while(opciones!=11);
	}
	else
	{
		printf("ERROR, no se inicializo el programa\n");
	}

	return EXIT_SUCCESS;
}
