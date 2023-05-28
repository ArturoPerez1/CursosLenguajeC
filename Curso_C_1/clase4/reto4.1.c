#include <stdio.h>
#include <stdlib.h>

// Reto 4

int main(){

    int number1;
    int number2;

    printf("Introduzca un numero: ");
    scanf("%i", &number1);

    printf("Introduzca otro numero: ");
    scanf("%i", &number2);

    if(number1 < number2){
        printf("Number1\" %i \" es menor a Number2 \" %i \" ", number1, number2);
    }
    else
        printf("Number2\" %i \" es menor a Number1 \" %i \" ", number2, number1);
    
    return 0;
}