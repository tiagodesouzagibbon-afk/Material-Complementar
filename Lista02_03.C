#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Leia um numero real. Se o n ´umero for positivo imprima a raiz quadrada. Do contr ´ario,
imprima o numero ao quadrado.*/

int main(){

    double x;

    printf("Digite um numero real: ");
    scanf("%lf",&x);

    if (x < 0){
        printf("\n%.1f ao quadrado = %f.", x, x*x);
        return 0;
    }
    
    printf("\nRaiz quadrada de %.1f = %f", x, sqrt(x));

    return 0;
}