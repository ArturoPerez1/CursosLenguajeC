#include <stdio.h>

int main(){

    float numberP = 123.1200;
    int number1;
    int number2;
    int sum;
    char name[12] = "Arturo";

    printf("Introduce un numero = ");
    scanf("%d", &number1);

    printf("Introduce un numero = ");
    scanf("%d", &number2);


    sum = number1 + number2;
    printf("%s hizo una suma con resultado = %i \n", name, sum);
    printf("El numero flotante es %0.0f ", numberP);

    return 0;
}