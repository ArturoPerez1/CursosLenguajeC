#include <stdio.h>

int main()
{
	int number = (30 + (4 * 5)) / 5;
	int yeah = (30 +((500 / 5) / 10)) / 5;
    int resultado = number + yeah;
	int * pointToNumber = &resultado;

     printf("%p, %d\n", pointToNumber, *pointToNumber);
     getchar();
}