#include<stdio.h>
main()
{
int contador=1,numeros[10000],a;
printf("De cuantos numeros?\n");
    scanf(" %d",&a);
    
    for(contador=0;contador<a;contador++) {
        printf("No %d : ",contador+1);
        scanf(" %d",&numeros[contador]);
    }
    
     for (contador=a;contador>=0;contador--){
			printf("%d\n",numeros[contador]);
     }
    
}
