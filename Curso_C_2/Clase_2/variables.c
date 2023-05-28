#include <stdio.h>

int main(void)
{
    int valor = 97;
    char letra = 'a';

    printf("El valor que tiene %d es %c \n", valor, chr(valor));
    printf("El valor que tiene %ces %d \n", valor, ord(letra));

    getchar();
	return 0;
}