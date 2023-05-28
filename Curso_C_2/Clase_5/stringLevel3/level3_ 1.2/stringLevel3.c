#include <stdio.h>
#include <string.h>

int main()
{
	char * name = "arturo";
	char * otherName = "wilmer";

	printf("los nombres son %s\n", strcmp(name, otherName) == 0? "iguales" : "distintos");
	return 0;

}