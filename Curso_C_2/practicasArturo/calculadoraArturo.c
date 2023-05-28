#include <stdio.h>
#include <stdlib.h>

int main()
{   
	int number;
	int n;
    int s;
    int resultado;
    printf("la opciones son = 1:Suma, 2:Resta, 3:Multiplicación, 4:División \n");
	 scanf("%i",&number);

	switch(number)
	{
       case 1 :                 
               
               printf("introduzca un número: ");
               scanf("%i", &n);
               printf("introduzca un número: ");
               scanf("%i", &s);
               resultado = n + s;
               printf("El valor de la Suma es =  %i\n", resultado);
               break;

       case 2:
               printf("introduzca un número: ");
               scanf("%i", &n);
               printf("introduzca un número: ");
               scanf("%i", &s);
               resultado = n - s;
               printf("El valor de la Resta es =  %i\n", resultado);
               break;  

       case 3:  
               printf("introduzca un número: ");
               scanf("%i", &n);
               printf("introduzca un número: ");
               scanf("%i", &s);
               resultado = n * s;
               printf("El valor de la Multiplicación es =  %i\n", resultado);
               break; 

       case 4:
               printf("introduzca un número: ");
               scanf("%i", &n);
               printf("introduzca un número: ");
               scanf("%i", &s);
               resultado = n / s;
               printf("El valor de la División es =  %i\n", resultado);
               break; 


       default:
                printf("La opción asignada no es válidad, ejecute nuevamente el programa");
                break;          
	}

	return 0;
}