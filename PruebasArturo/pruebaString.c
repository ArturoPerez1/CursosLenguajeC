#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    system("cls");
    char  nada[25];

    printf("Indique un texto = ");
    fgets(nada, 25, stdin);

    printf("%s",nada);
    return 0;
}