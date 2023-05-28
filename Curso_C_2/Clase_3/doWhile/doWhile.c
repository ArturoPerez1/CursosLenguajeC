#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,acum;
	a = 1; 
    acum = 11; 
     do
     {
       acum += a;
       a++;
     }while(acum < 10);


   printf("El valor de acum es: %d \n", acum);
	getchar();
	return 0;
}