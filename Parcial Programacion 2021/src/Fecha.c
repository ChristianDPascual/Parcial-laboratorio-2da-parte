#include "Motos.h"
#include "UTN.h"
#include "Fecha.h"

eFecha cargarFechas()
{
	    eFecha ingresoFecha;
	    int dia;
		int mes;
		int anio;

		mes=validarMes();

		if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==11)
		{
		   dia=validarDia();

		}
		else
		{
			if(mes==2)
			{
			   dia=validarDia();
			   while(dia<1 || dia>28)
			   {
				   printf("Error, como maximo tiene 28 dias, reingrese el dia: \n");
				   dia=validarDia();
			   }
			}
			else
			{
				dia=validarDia();

				while(dia<1 || dia>30)
				{
				 printf("Error, como maximo tiene 30 dias, reingrese el dia: \n");
				 dia=validarDia();
			    }
			}
		}

		anio=validarAnio();
		ingresoFecha.dia=dia;
		ingresoFecha.mes=mes;
		ingresoFecha.anio=anio;

	    return ingresoFecha;
}

int validarMes()
{
	int unMes;
	char cMes[V];

	printf("Ingrese el mes (1-12)\n");
	fflush(stdin);
	scanf("%[^\n]",cMes);
	unMes=atoi(cMes);

	while(validarNumeroEntero(cMes)==FALSE || (unMes<1 || unMes>12))
	{
		printf("Error, Ingrese el mes(1-12)\n");
		fflush(stdin);
		scanf("%[^\n]",cMes);
		unMes=atoi(cMes);
	}

	return unMes;
}
int validarDia()
{
	int unDia=FALSE;
	char cDia[V];

	printf("Ingrese el dia(1-31)\n");
	fflush(stdin);
	scanf("%[^\n]",cDia);
	unDia=atoi(cDia);

	while(validarNumeroEntero(cDia)==FALSE || (unDia<1 || unDia>31))
	{
		printf("Error, Ingrese el dia(1-31)\n");
		fflush(stdin);
		scanf("%[^\n]",cDia);
		unDia=atoi(cDia);
	}

	return unDia;
}
int validarAnio()
{
	int unAnio;
	char cAnio[V];

	printf("Ingrese el año\n");
	fflush(stdin);
	scanf("%[^\n]",cAnio);
	unAnio=atoi(cAnio);

	while(validarNumeroEntero(cAnio)==FALSE || (unAnio<1980 || unAnio>2040))
	{
		printf("Error, ingrese el año\n");
		fflush(stdin);
		scanf("%[^\n]",cAnio);
		unAnio=atoi(cAnio);
	}


	return unAnio;
}
