#include <stdio.h>
#include <stdlib.h>

/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fórmula de conversão é: F = C ∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.*/

int main(){

    float C;

    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &C);

    float F = C * (9.0/5.0)+32.0;

    printf("\nA temperatura convertida para fahrenheits e: %.1f", F);

    return 0;
}