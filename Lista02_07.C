#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba dois numeros e mostre o maior. Se por acaso, os dois
numeros forem iguais, imprima a mensagem Numeros iguais.*/

int main(){

    int a,b,c;

    printf("Digite dois numeros(x,y): ");
    scanf("%d,%d", &a, &b);

    if (a == b){
        printf("\nNumeros iguais.");
        return 0;
    }

    c = (a > b) ? a : b;

    printf("\nNumero maior: %d", c);

    return 0;
}