#include <stdio.h>
#include <stdlib.h>

// Reto 4

int main(){

    int nota;
    char name[20];

    printf("Introduzca su primer nombre \"por favor\" : ");
    scanf("%s", &name);

    printf("Introduzca su nota \"por favor\" : ");
    scanf("%i", &nota);


    if(nota > 90)
        printf("\nexcelente trabajo has aprobado %s :)", name);
    
    else if(nota > 60 && nota < 70)
        printf("\nAprobaste por muy poco sigue mejorando %s", name);
    
    else if (nota == 60)
         printf("\nAprobaste en la raya %s", name);
         
    else if(nota < 60 )
         printf("\nreprobaste %s echale mas ganas:( ", name);

    return 0;
}