#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cuenta{

    char nombre[30];
    char apellido[30];
    int identificador;
    int saldo;
};

void modificar(struct Cuenta *cu1){

    cu1 -> saldo = 200;
    printf("el saldo disponible es de %d bolivares", cu1 -> saldo);

}


int main(){


    struct Cuenta c1;
    modificar(&c1);
    return 0;

}