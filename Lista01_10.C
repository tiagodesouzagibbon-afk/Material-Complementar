#include <stdio.h>
#include <stdlib.h>

/*Leia uma velocidade em km/h e apresente-a convertida em m/s. A fórmula de conversão é: M = K/3.6, sendo K a velocidade em
km/h e M em m/s.*/

int main(){

    float km;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &km);

    float m = km/3.6;

    printf("\nA velocidade convertida para m/s e: %.1f", m);

    return 0;
}