#include <stdio.h>
#include <stdlib.h>

/*Faca um programa que peca ao usuario para digitar 10 valores e some-os.*/

int main(){

    int Soma = 0;
    int S;

    for (int i = 0; i < 10; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &S);
        Soma += S;
    }

    printf("\nSoma dos valores: %d", Soma);

    return 0;
}