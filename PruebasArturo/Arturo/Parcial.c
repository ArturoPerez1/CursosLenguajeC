#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

void CrearNode(struct Node ** new_node){
    *new_node = (struct Node*) malloc(sizeof(struct Node));
}

void insertarFinal(struct Node **Cabeza_ref, int new_data){
    struct Node* new_node;
    CrearNode(&new_node);
    struct Node *last = *Cabeza_ref;
    new_node->data  = new_data;
    new_node->next = NULL;

    if (*Cabeza_ref == NULL)
    {
        *Cabeza_ref = new_node;
        return;
    }

    while (last->next != NULL){
        last = last->next;
    }

    last->next = new_node;
    return;
}

void printList(struct Node* aux)
{
    if(aux->next == NULL){
        printf(" %d ", aux->data);
    }else {
        printf("El tope: ");
        while (aux != NULL) {
            printf(" |%d| ->", aux->data);
            aux = aux ->next;
        }
        printf(" Null");
    }
}

//Ordenar imparez y eliminar los primos

void OrdenarLista(struct Node ** Cabeza_ref){
  struct Node * aux = *Cabeza_ref;
  struct Node * conector1 = NULL;
  struct Node * conector2 = NULL;
  int contador = 0;
  int numero;
  if(aux == NULL){
    printf("Lista Vacia\n");
  }
  else{
     
     while(aux != NULL){
            if(aux->data == 1)
            {
              if(aux->next == NULL)
               {
                aux = aux->next;
               }
              else
               {
                 if(aux->next->next == NULL)
                  {
                  //Reviso si es primo y conecto
                  }
                  else
                   {
                    if(aux->next->next != NULL)
                     {
                     //Reviso si es primo y conecto
                     }
                  }
                }
            }
          
          if(aux->data > 1)
          {   
            if(aux->next == NULL)
             {
               //Reviso si es primo
               aux = aux->next;
             }
             else
             {
               if(aux->next->next == NULL)
               {
                  //Reviso si es primo y conecto
               }
               else
               {
                 if(aux->next->next != NULL)
                 {
                  //Reviso si es primo y conecto
                 }
               }
             } 
          }

     }
  }
}


int main(){
    system("cls");
    int exit = 0;
    int data;
    struct Node*Cabeza = NULL;

    do{
        printf("      MENU LISTAS");
        printf("\n    1: InsertarFinal");
        printf("\n    2: Mostrar Lista");
        printf("\n    3: Ordenar Lista");
        printf("\n    4:Salir");
        printf("\n    Opcion: ");
        scanf("%i", &exit);


        switch(exit){
            case 1:
                printf("Introduzca la data: ");
                scanf("%i", &data);
                insertarFinal(&Cabeza, data);
                system("cls");
            break;
            case 2:
                if(Cabeza == NULL){
                  printf("\n\nLista Vacia\n");
                  system("pause");
                  system("cls");
                }
                else{
                  system("cls");
                  printList(Cabeza);
                  printf("\n");
                  system("pause");
                  system("cls");
                }

            break;
            case 3:
                OrdenarLista(&Cabeza);
            break;
            case 4:
                printf("\nMuchas gracias por usar el programa");
            break;
            default:
                printf("\nOpcion invalida");
                break;
        }
    }while(exit != 4);




}