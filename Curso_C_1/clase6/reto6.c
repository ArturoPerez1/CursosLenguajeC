#include <stdio.h>
#include <stdlib.h>

int main(){

    int numAnterior = 0;
    int numsiguiente = 1;


    for(int i = 0; i <= 9 ; i++){
    
    numsiguiente = numAnterior + numsiguiente;
    printf("%i\n", numAnterior);
    numAnterior = numsiguiente - numAnterior;

    }

}