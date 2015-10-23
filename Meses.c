#include <stdio.h>

int numero;

main(){
	printf("Ingresa un numero del 1 al 12 y te dare un mes: ");
	scanf("%d",&numero);
	if(numero<=12)
	{
	
	switch(numero){
		case 1:{
			printf("Enero");
			break;
		}
		case 2:{
			printf("Febrero");
			break;
		}
		case 3:{
			printf("Marzo");
			break;
		}
		case 4:{
			printf("Abril");
			break;
		}
		case 5:{
			printf("Mayo");
			break;
		}
		case 6:{
			printf("Junio");
			break;
		}
		case 7:{
			printf("Julio");
			break;
		}
		case 8:{
			printf("Agosto");
			break;
		}
		case 9:{
			printf("Septiembre");
			break;
		}
		case 10:{
			printf("Octubre");
			break;
		}
		case 11:{
			printf("Noviembre");
			break;
		}
		case 12:{
			printf("Diciembre");
			break;
		}
		default:{
			printf("Opcion Invalida");
			break;}
		}
	}
	else{
		printf("Error ingresastes un numero equivocado");
	}
}
