#include "Motos.h"
#include "UTN.h"
#include "Fecha.h"

int validarNumeroEntero(char numero[])
{
	int i;
	int largo;
	int control;
	int validacion=TRUE;

	largo=strlen(numero);

	for(i=0;i<largo;i++)
	{
	   control=isdigit(numero[i]);
	   if(control==0)
	   {
		   validacion=FALSE;
		   break;
	   }
	}

	return validacion;
}
int validarNumeroFlotante(char numero[])
{
	    int validacion=TRUE;
		int i;
		int comas=0;
		int valor=0;
		int control;

		for(i=0;i<strlen(numero);i++)
		{
		   control=isdigit(numero[i]);
		   if(control==0 && valor==0)
		   {
			   valor=-1;
			   if(numero[i]=='.' && i>1 && comas==0)
			   {
				valor=0;
				comas++;
			   }
			   else
			   {
				   validacion=FALSE;
				   break;
			   }

		   }
		}

	return validacion;
}

int validarPalabra(char nombre[])
{
	int validacion=TRUE;
	int largo;
	int i;
	int control;

	largo=strlen(nombre);
	for(i=0;i<largo;i++)
	{
		control=isalpha(nombre[i]);
		if(control==0)
		{
			validacion=FALSE;
			break;
		}
	}

	return validacion;
}
int validarCilindrada(int cilindrada)
{
	int validacion=FALSE;
	int cilindros[5]={50,125,500,600,750};//50, 125, 500, 600, 750
	int i;

	if(cilindrada>0)
	{
		for(i=0;i<5;i++)
		{
			if(cilindrada == cilindros[i])
			{
				validacion=TRUE;
				break;
			}
		}
	}

	return validacion;
}
int validarServicios(eServicio listaServicios[],char servicio[],int t)
{
	int validacion=FALSE;
	int i;
	int large;
	char letra;

	large=strlen(servicio);
	for(i=0;i<large;i++)
	{
		if(i==0)
		{
			letra=toupper(servicio[i]);
			servicio[i]=letra;
		}
		else
		{
			letra=tolower(servicio[i]);
			servicio[i]=letra;
		}
	}

	for(i=0;i<t;i++)
	{
		if(strcmp(servicio,listaServicios[i].descripcion)==TRUE)
		{
			validacion=listaServicios[i].id;
			break;
		}
	}

	return validacion;
}
int validarColores(eColor listadoColores[],char color[],int t)
{
	int validacion=FALSE;
	int i;
	int large;
	char letra;

	large=strlen(color);
	for(i=0;i<large;i++)
	{
		if(i==0)
		{
			letra=toupper(color[i]);
			color[i]=letra;
		}
		else
		{
			letra=tolower(color[i]);
			color[i]=letra;
		}
	}

	for(i=0;i<t;i++)
	{
		if(strcmp(color,listadoColores[i].nombreColor)==TRUE)
		{
			validacion=listadoColores[i].id;
			break;
		}
	}

	return validacion;
}

int validarTipo(eTipo listadoTipo[],char tipo[],int t)
{
	int validacion=FALSE;

	int i;
	int large;
	char letra;

	large=strlen(tipo);
	for(i=0;i<large;i++)
	{
		if(i==0)
		{
			letra=toupper(tipo[i]);
			tipo[i]=letra;
		}
		else
		{
			letra=tolower(tipo[i]);
			tipo[i]=letra;
		}
	}

	for(i=0;i<t;i++)
	{
		if(strcmp(tipo,listadoTipo[i].descripcion)==TRUE)
		{
			validacion=listadoTipo[i].id;
			break;
		}
	}

	return validacion;
}

int DarRespuesta()
{
	int validacion;
	int i;
	char respuesta[3];
	char letra;

	printf("Desea continuar(si/no)\n");
	fflush(stdin);
	scanf("%[^\n]",respuesta);
	while(validarPalabra(respuesta)==FALSE)
	{
		printf("Error, desea continuar(si/no)\n");
		fflush(stdin);
		scanf("%[^\n]",respuesta);
	}

	for(i=0;i<3;i++)
	{
			letra=tolower(respuesta[i]);
			respuesta[i]=letra;
	}

	if(strcmp(respuesta,"si")==TRUE)
	{
		validacion=TRUE;
	}
	else
	{
		validacion=FALSE;
	}

	return validacion;
}
int validarMenu(eMoto listado[],int tamanio)
{
	int validacion=FALSE;
	int i;

	if(tamanio>0)
	{
		for(i=0;i<tamanio;i++)
		{
			if(listado[i].id!=FALSE)
			{
				validacion=TRUE;
				break;
			}
		}
	}

	return validacion;
	}
int validarListarTrabajos(eTrabajo lista[], int tamanio)
{
	int validacion=FALSE;
	int i;

	if(tamanio>0)
	{
		for(i=0;i<tamanio;i++)
		{
			if(lista[i].id!=FALSE)
			{
				validacion=TRUE;
				break;
			}
		}
	}

	return validacion;
	}
