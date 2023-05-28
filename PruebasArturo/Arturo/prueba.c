#include <stdio.h>          //We include the necessary libraries
#include <stdlib.h>


typedef struct Lista{
    int valor;
    struct Lista *prox;
}Lista;

void imprimirLista(Lista * lista)
{
    Lista * nodo = lista;
    printf("\nNodos -> ");
    while (nodo){
        printf("[%i]->", nodo->valor);
        nodo = nodo->prox;
    }
    printf(" NULL \n\n");
    system("pause");
    system("cls");
}

int main()
{
    Lista * nodo = NULL, *lista;
    int n=-1;
    int exit = 1;

    while (exit != 0){
        printf("Ingrese un numero = ");
        scanf("%i", &n);
        printf("\n");

        if (n){
            if (nodo == NULL){
                nodo= (Lista*)malloc(sizeof(Lista));
                nodo->valor = n;
                nodo->prox = NULL;
            }
            else {
                lista =(Lista*)malloc(sizeof(Lista));
                lista->valor = n;
                lista->prox = NULL;
                nodo=lista;
            }
        }

        imprimirLista(nodo);

        if(exit == 1){        
            printf("Desea salir : 0: Salir y 1: Seguir\n");
            printf("Opcion = ");
            scanf("%i", &exit);
            system("cls");
        }


    }
    return 0;
}