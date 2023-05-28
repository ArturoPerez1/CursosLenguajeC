#include <stdio.h>
#include <stdlib.h>


// Reto 2

int main(){

    int number;

    printf("Introduzca un numero entero: ");
    scanf("%d", &number);

    number %= 5;

    printf("El resultado de la operacion es = %i", ++number);
    
    return 0;
}