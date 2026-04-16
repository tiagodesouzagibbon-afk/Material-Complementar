#include <stdio.h>
#include <stdlib.h>

/*Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
contrario imprima: Emprestimo concedido.*/

int main(){

    int Salario, Prestacao;

    printf("Digite o salario do trabalhador: ");
    scanf("%d", &Salario);
    printf("Digite o valor da prestacao: ");
    scanf("%d", &Prestacao);

    if (Prestacao > (Salario/5)){
        printf("Emprestimo nao concedido.");
    } else {
        printf("Emprestimo concedido.");
    }

    return 0;
}