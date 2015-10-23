//algoritmo de resultado
#include<stdio.h>


int N1;
int N2;
int suma;
int resta;
int multi;
float div;

int main()
{

	//inicio 
	printf("dame un numero: \n");
	scanf("%d",&N1);
	printf("dame otro numero: \n");
	scanf ("%d",&N2);
	suma=N1+N2;
	resta=N1-N2;
	multi=N1*N2;
	div=(float)N1/N2;
	printf("resultado %d + %d es: %d \n",N1,N2,suma);
	printf("resultado %d - %d es: %d \n",N1,N2,resta);
	printf("resultado %d * %d es: %d \n",N1,N2,multi);
	printf("resultado %d / %d es: %f \n",N1,N2,div);
	}



