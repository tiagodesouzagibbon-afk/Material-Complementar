#include <stdio.h>
#include <stdlib.h>

/*escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repetiçao for, a segunda while, e a terceira do while.*/

int main(){

    int i;

    for (i = 1; i < 101; i++){
        printf("%d ", i);
    }

    printf("\n\n");
    i = 1;

    while (i != 101){
        printf("%d ", i);
        i++;
    }
    
    printf("\n\n");
    i = 1;

    do
    {
        printf("%d ", i);
        i++;
    } while (i != 101);
    

    return 0;
}