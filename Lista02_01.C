#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba dois numeros e mostre qual deles é o maior.*/

int main(){

    int x,y;
    printf("Digite dois numeros (x,y): ");
    scanf("%d,%d",&x,&y);

    if (x == y){
        printf("\nOs numeros sao iguais.");
        return 0;
    }
    
    int z = (x > y) ? x : y;
    printf("\nO numero maior e %d", z);

    return 0;
}