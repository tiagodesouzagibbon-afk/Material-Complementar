#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, at ´e que seu valor seja 100000 (cem mil).*/

int main(){

    int i = 0;
    printf("i = 0\n");

    while (i != 100000){
        i += 1000;
        printf("i = %d\n", i);
    }

    return 0;
}