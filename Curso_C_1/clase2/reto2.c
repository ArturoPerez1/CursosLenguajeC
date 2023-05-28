#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Reto 2

int main(){

    float pi =  3.1415;
    float area;
    float altura;
    float radio;
    float volumen;

    printf("Introduzca la altura del cilindro = ");
    scanf("%f", &altura);

    printf("Introduzca el radio del cilindro = ");
    scanf("%f", &radio);

    area = 2 * pi * radio * (radio + altura);    
    volumen = (pi * radio * radio ) * altura;

    printf("El area del cilindro es = (%f) ", area);
    printf("\nEl volumen del cilindro es = (%f) ", volumen);

    return 0;
}