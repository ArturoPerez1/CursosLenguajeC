#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct registro{
    char nombreUser[50];
    char numeroTelefono[50];
}Registro;

typedef struct Nodo{
    Registro registro;
    struct Nodo * siguiente;
}Nodo;

typedef struct lista{
    Nodo * cabeza;
    int logitud;
}Lista;


Nodo * CrearNodo(Registro*registro){
    Nodo * nodo = (Nodo*) malloc(sizeof(Nodo));
    strncpy(nodo->registro.nombreUser, registro->nombreUser, 50);
    strncpy(nodo->registro.numeroTelefono, registro->numeroTelefono, 50);
    nodo->siguiente = NULL;
    return nodo;    
}

void DestruirNodo(Nodo * nodo){
    free(nodo);
}

void insectarPrincipio(Lista * lista){
    Nodo * nodo =  CrearNodo(nodo);
    nodo->siguiente =  lista->cabeza;
    lista->cabeza = nodo;
    lista->logitud++;
}

void insectarFinal(Lista*lista){
    Nodo * nodo =  CrearNodo(nodo); 
    if(lista->cabeza == NULL){
       lista->cabeza = nodo; 
    }
    else{
        Nodo*puntero = lista->cabeza;
        while(puntero->siguiente){
            puntero = puntero->siguiente;
        }
        puntero->siguiente = nodo; 
    }

    lista->logitud++;
}

void insectarDespues(int n, Lista * lista){
    Nodo * nodo =  CrearNodo(nodo);
    if(lista->cabeza == NULL){
        lista->cabeza = nodo;
    }
    else{
        Nodo*puntero = lista->cabeza;
        int posicion = 0;
        while((posicion < n) && (puntero->siguiente)){
            puntero = puntero->siguiente;
            posicion++;
        }

        nodo->siguiente = puntero->siguiente;
        puntero->siguiente = nodo;
    }
    lista->logitud++;
}




int main(){
    return 0;
}