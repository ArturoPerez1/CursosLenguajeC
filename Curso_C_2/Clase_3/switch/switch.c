#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arturo;
	arturo = 2;

     switch(arturo)
     {
     	case 1: 
     	       arturo = 10 + 5;
     	       break;
     	case 2: 
     	       arturo = 10 - 5;
     	       break;
     	default:
     	        arturo += 0;
     	        break;     	              
     }

	printf("El valor de arturo es: %d \n ", arturo);
	getchar();
	return 0;
}