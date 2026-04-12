#include <stdio.h>
#include <stdlib.h>

/*
Fac¸a um programa que receba um n ´umero inteiro e verifique se este n ´umero ´e par ou
´ımpar.
*/

int main(){

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("\nO numero digitado e ");

    if ((x % 2) == 0){
        printf("par");
    } else {
        printf("impar");
    }

    return 0;
}