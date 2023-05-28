#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    char Text[40];
    int size;

    printf("Por favor introduzca el texto que quiere invertir = ");
    gets(Text);

    printf("Su texto es = ");
    puts(Text);

    size = strlen(Text);
    printf("Su texto invertido es = ");

    for(int i = size; i >= 0; i--){

        printf("%c", Text[i]);

    }

    return 0;

}