#include <stdio.h>

int main()
{
	char * name = "mauro";
	printf("nombre = %s, (%p)\n",name, name);

	for(int i = 0; i < 5; i++)
	{
		printf("name[%d](%p)= %c\n",i, name + i, name[i]);

	}
	return 0;
}