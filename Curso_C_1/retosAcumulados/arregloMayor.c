#include <stdio.h>
#include <stdlib.h>


int main(){

    printf("\nArray  - numero mayor\n\n");

    int array[10] = {1,6,3,10,12,100,20,300,600,1}; 
    int almacen;
    int i;

    if(array[0] > array[1]){
        
        almacen = array[0];
        i = 0;
    }

    else{
        
        almacen = array[1]; 
        i = 1;
    }

    for( i ; i < 10; i++){

        if (almacen < array[i] ){
            
          almacen = array[i];  
        }

    }

    printf("El numero mayor es = %i", almacen);

    return 0;

}