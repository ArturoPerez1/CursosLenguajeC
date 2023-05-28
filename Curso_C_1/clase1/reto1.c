#include <stdio.h>
#include <stdlib.h>

int main(){

    int number1;
    int number2;
    int aux;

    printf("Introduzca un numero: ");
    scanf("%d", &number1);

    printf("Introduzca un numero: ");
    scanf("%d", &number2);

    aux = number1;
    number1 = number2;
    number2 = aux;

    printf("\nEl valor de number1 es = %i \n", number1);
    printf("El valor de number2 es = %i ", number2);


}