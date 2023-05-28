#include <stdio.h>
#include <string.h>

int main()
{
	char * src = "arturo";
	char  destino[20] = "no veras esto nunca!";

    strcpy(destino, src);
	printf("destino es = %s\n", destino);
	return 0;

}