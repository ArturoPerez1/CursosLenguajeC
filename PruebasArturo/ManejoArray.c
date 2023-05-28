#include <stdio.h>
#include <stdlib.h>

int manejoArray(int *array, int *dimension)
{

    do
    {
        printf("Introduzca una dimension para su vector = ");
        scanf("%i", dimension);

    } while (*dimension <= 0);

    array = (int *)malloc(*dimension * sizeof(int));

    for (int i = 0; i < *dimension; i++)
    {
        printf("Introduzca un numero = ");
        scanf("%i", &array[i]);
    }

    printf("\n\n\n");

    for (int j = 0; j < *dimension; j++)
    {
        printf("Contenido del array[%i] = %i \n", j, array[j]);
    }

    free(array);
}

int main()
{
    system("cls");
    int dimension = 0;
    int *array;

    manejoArray(array, &dimension);

    printf("este es el tamano de dimension = %i \n", dimension);

    return 0;
}