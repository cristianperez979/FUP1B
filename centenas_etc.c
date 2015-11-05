#include <stdio.h>

main(){
int a,c,d,u,m;
printf ("Dame el numero: ");
scanf("%d", &a);

u= ((a%100) %10);
d= a % 100 / 10;
c = a /100;
m= a/1000;

printf("El numero %d tiene:\n %d millares\n %d centenas\n %d decenas\n %d unidades",a, m, c, d, u);

}

