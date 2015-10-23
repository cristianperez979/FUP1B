#include <stdio.h>

float bit,bytes,kilo,megas,giga,tera;

main(){
	printf("Ingrese una cantidad en megas para convertirlo a \n Bits\n Bytes\n Kilobytes \n Gigabytes \n Y Terabytes :\n ");
	scanf("%f",&megas);
	kilo=megas*1024;
	bytes=kilo*1024;
	bit=bytes*8;
	giga=megas/1024;
	tera=giga/1024;
	printf("Resultados: \n \n bits: - %f \n",bit);
	printf(" bytes - %f \n " ,bytes);
	printf("kilobytes - %f \n" ,kilo);
	printf(" megabytes - %f \n" ,megas); 
	printf(" gigabytes - %f \n" ,giga); 
	printf(" terabytes - %f \n", tera);
}
