#include <stdio.h>
#include <stdlib.h>


void swap(int * a, int * b)
{
	int * c = a;

    *c = *b * 5;

    *b = 8;
    
   printf("El valor de a : %i e b : %i \n", *a, *b);
}

int main()
{
	 int x,y; 
	 x = 3;
	 y = 5;

	 swap(&x, &y);


   printf("El valor de x : %i e y : %i ", x, y);

}