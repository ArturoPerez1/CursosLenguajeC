#include <stdio.h>
#include <stdlib.h>


int main(){

    int sum;
    float rest;
    float div;
    float mult;
    int mod;

    sum =  1 + 20;
    rest =  4 - 3.4;
    div = 4 / 2;
    mult = 7 * 2;
    mod =  2 % 2;


    printf("sum(%i), rest(%0.2f), div(%0.2f), mult(%0.0f), mod(%i)", sum, rest, div, mult, mod);


    return 0;
}