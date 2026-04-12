#include <stdio.h>
#include <stdlib.h>

/*Leia uma velocidade em m/s e apresente-a convertida em km/h. A fórmula de conversão é: M = K*3.6, sendo K a velocidade em
km/h e M em m/s.*/

int main(){

    float ms;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);

    float k = ms*3.6;

    printf("\nA velocidade convertida para km/h e: %.1f", k);

    return 0;
}