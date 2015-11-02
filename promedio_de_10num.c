#include<stdio.h> 
#include<conio.h> 

main() 
{ 
	do{
	float numero[10000],suma; 
	int a,i; 
	char S;
	float promedio; 
	printf("De cuantos numeros quieres el promedio? "); 
	scanf("%d",&a); 
	for(i=1;i<=a;i++) 
	{ 
	printf("Ingresa el numero %d: ",i); 
	scanf("%f",&numero[i]); 
	} 
	suma=0; 
	for(i=1;i<=a;i++) 
	{ 
	suma=suma+numero[i]; 
	} 
	promedio=suma/a; 
	printf("El promedio es: %f",promedio); 
	getch(); 
	return 0;
	printf("Quieres otra vez promediar?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   }  while('S'=='s');
   printf("Adios..¡"); 
}
