#include <stdio.h>
int i,j,num,num2,res,x[100];

int main()
{
  
  printf( "Dame numero: ");
  scanf("%d",&num);
  num2 = num;
  for(i = 1 ; i <= num ; i++)
  { 
   num2 = num2 / 2;
      if(num2 == 1)
         break;
  }
  for(j = 1 ; j <= i; j++)
  { 
      res = num % 2;
      if(res == 1)
         x[j] = 1;
      else if(res == 0)
              x[j] = 0;
      num = num / 2;
  }
  printf("1"); 
  for(j = i ; j > 0 ; j--) 
     printf("%d",x[j]);
  }
