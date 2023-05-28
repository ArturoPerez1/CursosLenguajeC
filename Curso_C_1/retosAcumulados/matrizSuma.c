#include <stdio.h>
#include <stdlib.h>


int main(){

    printf("Array bidimensional - suma de filas\n\n\n");

    int matriz[3][4] = {{1,1,1,1}, {1,2,3,4}, {10,10,3,3} };
    int aux = 0;

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 4 ; j++){

            aux += matriz[i][j];
        }

        printf("fila(%i) = %i \n", i, aux);
        aux = 0;
    }

    return 0;

}