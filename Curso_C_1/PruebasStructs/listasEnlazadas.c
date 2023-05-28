#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Libro
{
    char titulo[50];
    char autor[50];

}Libro;

typedef struct Nodo{
    
    Libro libro;
    struct Nodo * siguiente;
}Nodo;

typedef struct Lista{
    Nodo * cabeza;
    int longitud;
}Lista;


Nodo* CrearNodo(Libro * libro){
    Nodo * nodo = (Nodo*) malloc(sizeof(Nodo));
    strncpy(nodo->libro.titulo, libro->titulo, 50);
    strncpy(nodo->libro.autor, libro->autor, 50);
    nodo->siguiente = NULL;
    return nodo;
}

void DestruirNodo(Nodo *nodo){
    free(nodo);
}

void InsectarPrincipio(Lista * lista, Libro * libro){
    Nodo * nodo = CrearNodo(libro);
    nodo->siguiente = lista->cabeza;
    lista->cabeza = nodo;
    lista->longitud++;
}

void InsectarFinal(Lista * lista, Libro * libro){
    Nodo * nodo = CrearNodo(libro);

    if(lista->cabeza == NULL){
        lista->cabeza = nodo;        
    }

    else{
        Nodo * puntero = lista->cabeza;
        while(puntero->siguiente){
            puntero = puntero->siguiente;        
        } 
        puntero->siguiente = nodo; 
    } 
    lista->longitud++;         

}

void InsectarDespues(int n, Lista * lista, Libro * libro){
    Nodo * nodo = CrearNodo(nodo);
    if(lista->cabeza == NULL){
        lista->cabeza = nodo;        
    } 
    else{
        Nodo * puntero = lista->cabeza;
        int posicion = 0;
        while((posicion < n) && (puntero->siguiente)){
            puntero = puntero->siguiente;
            posicion++;        
        } 
        nodo->siguiente = puntero->siguiente;
        puntero->siguiente = nodo;
    }
    lista->longitud++;
}

Libro* Obtener(int n, Lista * lista){
    if(lista->cabeza = NULL){
        return NULL;       
    }
    else{
        Nodo * puntero = lista->cabeza;
        int posicion = 0;
        while((posicion = n) && (puntero->siguiente)){
            puntero = puntero->siguiente;
            posicion++;        
        }
        if(posicion != n){
            return NULL;
        }
        else{
            return &puntero->libro;
        }

    }    
}

int Contar(Lista*lista){
    return lista->longitud;
}

// int ListaVacia(Lista*lista){
//     return lista->cabeza == NULL;
// }


void EliminarpPrincipio(Lista*lista){
    if(lista->cabeza){
        Nodo * eliminado = lista->cabeza;
        lista->cabeza =  lista->cabeza->siguiente;
        DestruirNodo(eliminado);
        lista->longitud--;
    }

}

void EliminarUltimo(Lista *lista){
    if(lista->cabeza){
        if(lista->cabeza->siguiente){
            Nodo * puntero = lista->cabeza;
            while(puntero->siguiente->siguiente){
                puntero = puntero->siguiente;
            }
            Nodo * eliminado = puntero->siguiente; 
            puntero->siguiente = NULL;
            DestruirNodo(eliminado);
            lista->longitud--;
        }
        else{
            Nodo * eliminado = lista->cabeza;
            lista->cabeza = NULL;
            DestruirNodo(eliminado);
            lista->longitud--;
        }
    }    
}

void EliminarElemento(int n, Lista * lista){
    if(lista->cabeza){
        if(n == 0){
            Nodo * eliminado = lista->cabeza;
            lista->cabeza =  lista->cabeza->siguiente;
            DestruirNodo(eliminado);
            lista->longitud--;
        }

        else if(n < lista->longitud){
            Nodo * puntero = lista->cabeza;
            int posicion = 0;
            while(posicion < (n -1)){
                puntero = puntero->siguiente;
                posicion++;
            }
            Nodo* eliminado = puntero->siguiente;
            puntero->siguiente = eliminado->siguiente;
            DestruirNodo(eliminado);
            lista->longitud--;
        }

    }
}








