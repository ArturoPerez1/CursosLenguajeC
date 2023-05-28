#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	  int number;
	  struct node * next;
}Node;

 
Node * createNode(int number)
{
	Node * newNode;
	newNode = malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->number = number;

	return newNode;
}

int main(int argc, char * argv[])
{
	Node * start = NULL, * current, * next;
	char goOn;
	int listSize = 0, number;

	 do
	 {
       	printf("La lista contiene %d nodos. Ingrese el siguiente número (0 para finalizar)\n", listSize);
       	scanf("%d", &number);

       	if(number)
       	  {

       	  	if(!start)
       	  	  {	
       	  	   start = createNode(number);
       	  	   listSize++;
       	  	  }

       	  	else
       	   	  {
                 current = start;
                 while( current -> next)
                     {
                       current = current -> next;
                     }
                     current -> next = createNode(number);
                     listSize++;
       	  	  }  

       	     
       	     goOn = 1;
       	  }

       	else
          {
       		goOn = 0;
       	  }
	 }while(goOn);

	 current = start;
	 printf("La lista contiene los números: \n");
	 while(current)
	 {
         printf("%d", current-> number);
         printf(current->next? "," : "\n" );
         current = current -> next;
	 }

	 current = start;
	 while(current)
	 {
	 	 next = current -> next;
	 	 free(current);
         current = next;
	 }
     

	 return 0;
}