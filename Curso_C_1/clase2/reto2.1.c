#include <stdio.h>
#include <stdlib.h>


// Reto 2

int main(){

    float fahrenheit;
    float celsiusl;

    printf("Ingrese los grados fahrenheit = ");
    scanf("%f", &fahrenheit);

   celsiusl = (fahrenheit - 32) * 0.555;

    if (fahrenheit == 1){
       printf("\n\" (%0.2f) GRADO FAHRENHEIT\" es equivalente a \" (%0.2f) GRADOS CELSIUS \" ", fahrenheit, celsiusl);  
    }
    
    else{
         printf("\n\" (%0.2f) GRADOS FAHRENHEIT\" son equivalentes a \" (%0.2f) GRADOS CELSIUS \" ", fahrenheit, celsiusl);
    }


    return 0;
}