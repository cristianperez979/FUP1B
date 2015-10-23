#include<stdio.h>
int a,b,c,i,e;
main(){
	printf("Dame el total a pagar de la cuenta:\n");
	scanf("%d",&a);
	b=a*0.10;
	c=a+b;
	printf("La propina sera de 10% y sera de: %d y el total con propina sera de: %d\n",b,c);
	printf("Vino solo o acompanado? Ingrese cuantas personas lo acompanan: \n");
	scanf("%d",i);
	e= c/i;
	printf("El total a pagar por persona sera de %d",e);
}
