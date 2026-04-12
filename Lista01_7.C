#include <stdio.h>
#include <stdlib.h>

/*Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A fórmula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.*/

int main(){

    float F;

    printf("Digite a temperatura em graus fahrenheit: ");
    scanf("%f", &F);

    float C = 5.0 * (F - 32.0)/9.0;

    printf("\nA temperatura convertida para graus celcius e: %.1f", C);

    return 0;
}