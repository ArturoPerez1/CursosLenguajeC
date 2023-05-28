#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,acum;
	a = 1; // a=2,a=3,a=4,a=5
     acum = 0; // acum=1,acum=3,acum=6,acum=10 

     while(acum < 10)
     {
         acum += a;
         a++; 
         printf("El valor de acum es: %d \n El valor de a: %d \\", acum, a);

     }


	getchar();
	return 0;
}