#include <stdio.h>
#include <stdlib.h>

int prof, ava, ret, cont=1;

main(){
	printf("Cuantos metros kalló el cangrejo: ");
	scanf("%d",&prof);
	printf("Cuantos metros avanza el cangrejo: ");
	scanf("%d",&ava);
	printf("Cuantos metros retrocede el cangrejo: ");
	scanf("%d",&ret);
	
	do{
		if(prof >=0 ){
			prof = prof - ava;	
		}
	
			prof = prof + ret;
			cont=cont+1;
		
	}while (prof >= 0);
	printf("Se tardo %d dias en salir", cont);
}
