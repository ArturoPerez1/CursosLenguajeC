#include <stdio.h>
#include <stdlib.h>


// Reto 4

int main(){

    int rand_Number;
    int user_Number;
    int salida;

    salida = 0;
    user_Number = 11;
    
    while(salida != 2){ 
        user_Number = 11; 
        rand_Number = (rand() % 11);
        printf("el random es = %i \n", rand_Number);


        while(user_Number > 10){
            printf("Introduzca un numero del 1 al 10 : ");
            scanf("%i", &user_Number);        
        }


        if(user_Number == rand_Number){
            
            printf("\nHas adivinado");
            printf("\nQuieres seguir, 1 = si y 2 = no \nopcion = ");
            scanf("%i", &salida);       
            system("cls");
        }

        else{
            printf("\nHas perdido, quieres seguir, 1 = si y 2 = no \nopcion = ");
            scanf("%i", &salida);
            system("cls");
        }
    }
    
    return 0;
}