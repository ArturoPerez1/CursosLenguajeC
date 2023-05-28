#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arturo;
	arturo = 1;

	if(arturo > 1)
	{
	  arturo += 20;
	}
	else
	{
	   arturo += 10; 	
	}

	printf("El valor de arturo es: %d \n ", arturo);
	getchar();
	return 0;
}