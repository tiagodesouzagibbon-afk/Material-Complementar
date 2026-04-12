#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Leia um n ´umero fornecido pelo usu ´ario. Se esse n ´umero for positivo, calcule a raiz
quadrada do n ´umero. Se o n ´umero for negativo, mostre uma mensagem dizendo que o
n ´umero ´e inv ´alido*/

int main(){

    int x;

    printf("Digite um numero: ");
    scanf("%d",&x);

    if (x < 0){
        printf("\nNumero invalido.");
        return 0;
    }
    
    printf("\nRaiz quadrada de %d = %f", x, sqrt(x));

    return 0;
}