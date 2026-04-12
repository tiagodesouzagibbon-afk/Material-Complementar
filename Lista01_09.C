#include <stdio.h>
#include <stdlib.h>

/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/

int main(){

    float C;

    printf("Digite a temperatura em graus celcius: ");
    scanf("%f", &C);

    float K = C + 273.15;

    printf("\nA temperatura convertida para graus kelvin e: %.1f", K);

    return 0;
}