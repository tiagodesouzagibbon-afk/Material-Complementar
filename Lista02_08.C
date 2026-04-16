#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e
exiba na tela a média destas notas. Uma nota valida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser
informado ao usuario e o programa termina.*/

int main(){

    float n1,n2;

    printf("Digite as notas do aluno:\nNota 1: ");
    scanf("%f", &n1);

    if ((n1 < 0) || (n1 > 10)){
        printf("Nota invalida");
        return 0;
    }

    printf("Nota 2: ");
    scanf("%f", &n2);

    if ((n2 < 0) || (n2 > 10)){
        printf("Nota invalida");
        return 0;
    }

    printf("\nMedia do aluno: %.1f", (n1+n2)/2);
    
    return 0;
}