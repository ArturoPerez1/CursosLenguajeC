#include <stdio.h>
#include <stdlib.h>

typedef char* URL;

typedef struct Nodo{
    URL url;
    struct Nodo* siguiente;
}Nodo;

typedef struct Pilas{
    Nodo * cima;
    int longitud;
}Pila;


Nodo* CrearNodo(URL url){
    Nodo* nodo = (Nodo*) malloc(sizeof(Nodo));
    nodo->url = url;
    nodo->siguiente = NULL;
    return nodo;
} 

void DestruirNodo(Nodo* nodo){
    nodo->siguiente = NULL;
    free(nodo);
}

Pila * CrearPila(){
    Pila * pila = (Pila*) malloc(sizeof(Pila));
    pila->cima = NULL;
    pila->longitud = 0;
    return pila;
}

void DestruirPila(Pila * pila){
    while(pila->cima != NULL){
        Desapilar(pila);
    }
    free(pila);
}

void Apilar(Pila * pila, URL url){
    Nodo * nodo = CrearNodo(nodo);
    nodo->siguiente = pila->cima;
    pila->cima =  nodo;
    pila->longitud++;
}

void Desapilar(Pila*pila){
    if(pila->cima != NULL){
        Nodo * eliminar = pila->cima;
        pila->cima = pila->cima->siguiente; 
        DestruirNodo(eliminar); 
        pila->longitud--;
    }
}

URL Cima(Pila * pila){
    if(pila->cima == NULL){
        return NULL;
    } 
    else{
        return pila->cima->url;
    }   
}

int Longitud(Pila*pila){
    return pila->longitud;
}

int EstaVacia(Pila*pila){
    return pila->longitud == 0;
}



