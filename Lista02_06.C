#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Escreva um programa que, dados dois n ´umeros inteiros, mostre na tela o maior deles,
assim como a diferenc¸a existente entre ambos.
*/

int main(){

    int x,y;
    printf("Digite dois numeros (x,y): ");
    scanf("%d,%d",&x,&y);

    if (x == y){
        printf("\nOs numeros sao iguais.\nDiferenca = 0");
        return 0;
    }
    
    int z = (x > y) ? x : y;
    printf("\nO numero maior e %d", z);
    printf("\nDiferenca = %d", abs(x - y));

    return 0;
}