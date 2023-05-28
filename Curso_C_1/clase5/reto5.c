#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("\t\t Bienvenido al juego de opciones\n\n");

    int option = 0;

    while(option != 4){
        
        system("cls");
        printf("\t\t     Menu de opciones\n");
        printf("\t\t\t1: opcion 1\n");
        printf("\t\t\t2: opcion 2\n");
        printf("\t\t\t3: opcion 3\n");    
        printf("\t\t\t4: salir\n");
        printf("\t\t\tOpcion = ");
        scanf("%i", &option);

        switch(option){

            case 1:
                printf("\n\t\t\tHas ganado 100000 USD\n");
                system("pause");
            break;

            case 2:
                printf("\n\t\t\tTe has ganado la chancla\n");
                system("pause");
            break;

            case 3:
                printf("\n\t\t\tJAJAJAJAJAJA no has ganado nada\n");
                system("pause");               
            break;

            case 4:
                printf("\n\t\t\tGracias por haber participado en el juego");

            break;
        }
    

    }

}