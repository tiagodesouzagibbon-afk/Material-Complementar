#include <stdio.h>
#include <stdlib.h>

/*Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde h corresponde a altura):
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7*/

int main(){

    float h;
    int sexo;

    printf("Digite a altura da pessoa em metros: ");
    scanf("%f", &h);

    printf("Digite o sexo da pessoa:\n0 - Masculino\n1 - Feminino\n");
    scanf("%d", &sexo);

    while ((sexo < 0) || (sexo > 1)){
        
        printf("Erro. Digite um valor valido\n0 - Masculino\n1 - Feminino\n");
        scanf("%d", &sexo);

    }
    
    printf("O peso ideal da pessoa e: ");

    if (sexo){
        printf("%.1f", (62.1*h) - 44.7);
    } else {
        printf("%.1f", (72.7*h) - 58);
    }

    return 0;
}