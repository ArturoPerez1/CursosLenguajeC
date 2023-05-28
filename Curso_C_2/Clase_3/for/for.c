#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,acum;
	acum = 0;

  for(i= 0; i < 10; i++)
  {
    acum += i;
  } 

   printf("El valor de acum es: %d \n", acum);
	getchar();
	return 0;
}