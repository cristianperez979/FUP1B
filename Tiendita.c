#include <stdio.h>

int numero, cantidad, total;

main(){
	printf("1. Dulces $5.00\n2. Pan $2.00\n3. Chicle $1.00\n4. Gansito $7.00\n5. galletas $8.00\nIngresa el numero del producto a querer: ");
	scanf("%d",& numero);
	if (numero>=1 and numero<=5){
		printf("Ingresa la cantidad: ");
		scanf("%d",& cantidad);
		switch(numero){
			case 1:{
				total=cantidad*5;
				printf("Dulces: \ntotal: $%d",total);
				break;
			}
			case 2:{
				total=cantidad*2;
				printf("Pan: \ntotal: $%d",total);
				break;
			}
			case 3:{
				total=cantidad*1;
				printf("Chicles: \ntotal: $%d",total);
				break;
			}
			case 4:{
				total=cantidad*7; 
				printf("Gansito: \ntotal: $%d",total);
				break;
			}
			case 5:{
			 	total=cantidad*8;
				printf("Galletas: \ntotal: $%d",total);
				break;
			}
		}
		
	}
	else{
		printf("El numero que ingresastes no esta en el menu");
	}
	
}

