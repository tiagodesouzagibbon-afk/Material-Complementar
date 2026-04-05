#include <stdio.h>

// 5 exercicios de uma vez

int main(){

    int Inteiros[3], Soma = 0;
    double Real;
    for (int i = 0; i < 3; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &Inteiros[i]);
        Soma += Inteiros[i];
        printf("\n");
    }

    printf("Digite um numero real: ");
    scanf("%lf", &Real);

    printf("\n\n1. Numero inteiro: %d\n2. Numero real: %lf\n3. Soma dos inteiros: %d\n4. Quadrado do real: %lf\n5. 1/5 do real: %lf",
            Inteiros[0], Real, Soma, Real*Real, Real/5);
    
    return 0;
}