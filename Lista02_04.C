#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado
• A raiz quadrada do número digitado
*/

int main(){

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x < 0){
        printf("\nNumero invalido.");
        return 0;
    }

    printf("\n%d ao quadrado = %d", x, x*x);
    printf("\nRaiz quadrada de %d = %f", x, sqrt(x));

    return 0;
}