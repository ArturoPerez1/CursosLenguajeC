#include <stdio.h>
#include <stdlib.h>


int main(){

    // inicialización de la tabla o matriz de 5*6
    // Declaración e inicialización de las variables sum y promedio

    float matriz[5][6] = {{6.3, 8.4, 9.2, 10, 6, 0}, {6.2, 7.4, 7.2, 7, 9, 0}, {6.9, 8.7, 9.9, 7.7, 6, 0},  
                        {6.3, 8.4, 9.2, 10, 6, 0}, {6.1, 8.8, 9.1, 10, 6.9, 0}};
    
    float sum = 0;
    float promedio;

    // Calculo del promedio de los primeros 5 elementos
    // y asignación del mismo al 6 elemento

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 5; j++){

            sum += matriz[i][j];
            promedio = sum / 6;

        }

        matriz[i][5] = promedio;
        sum = 0;
        promedio = 0;

    }

    // Calculo del promedio de lo elementos completos
    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 6; j++){

            sum += matriz[i][j];
            promedio = sum / 6;

        }

        printf("Promedio De Notas fila(%i) = %0.2f \n", i, promedio);
        sum = 0;
        promedio = 0;

    }

    return 0;

}